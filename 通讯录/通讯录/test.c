#define _CRT_SECURE_NO_WARNINGS 1
#include "AddressList.h"



// ��ʾ�˵�����
void menu()
{
	printf("*********************************\n");
	printf("*****1.add         2.delect******\n");
	printf("*****3. change     4. seek ******\n");
	printf("*****5.print      0.exit   ******\n");
	printf("********************************\n");
}

// ��ʼ��ͨѶ¼����
void init_con(Con *p) 
{
	p->siz = 0;
}




int main()
{
	//����һ���˵�ö������
	enum seletiong  
	{
		exit,
		add,
		delect,
		change,
		seek,
		print
	};
	// ����һ��ͨѶ¼
	Con con;
	//����һ����ϵ������
	pif f;
	// ��ʼ��ͨѶ¼
	init_con(&con);
	//�û������ֵ
	int input;
	

	do
	{
		printf("\n");
		// ��ʾ�˵�
		menu();
		printf("���������ѡ��>>");
		scanf("%d", &input);
		switch (input)
		{
		case add:
		{
			if (Add(&con) == OK)
				printf("���ӳɹ�!\n");
			break;
		}
			
		case delect:
		{
			if ( Delect(&con) == OK)
				printf("ɾ���ɹ�!\n");
			break;
		}
		case change:
		{
			if (Change(&con) == OK)
				printf("�޸ĳɹ�!\n");
			break;
		}
		case seek:
		{
			Seek(&con);
			break;
		}
		case print:
		{
			Print(&con);
			break;
		}
		case exit:
			break;
		}
	} while (input);
	return 0;
}

