#define _CRT_SECURE_NO_WARNINGS 1
#include "AddressList.h"



// ���������Ϣ����
pif my_scanf()
{
	pif f;
	printf("�����������Ϣ>>\n");
	printf("name>>");
	scanf("%s", f.name);
	printf("sex>>");
	scanf("%s", f.sex);
	printf("age>>");
	scanf("%d", &(f.age));
	printf("number>>");
	scanf("%d", &(f.number));
	return f;
}

// ��ʾ����
void Print(Con* p)
{
	int i;
	printf("%-10s%-10s%-10s%-10s\n","name","sex","age","number");
	for (i = 0; i < p->siz; i++)
	{
		printf("%-10s", (p->data)[i].name);
		printf("%-10s", (p->data)[i].sex);
		printf("%-10d", (p->data)[i].age);
		printf("%-10d", (p->data)[i].number);
		printf("\n");
	}

}

// ���Ӻ���
int Add(Con* p)
{
	if (p->siz >= MAX)
	{
		printf("ͨѶ¼������");
		return ERROR;
	}
	*(p->data + p->siz) = my_scanf();
	p->siz = (p->siz)+1;
	return OK;

}

// ɾ������
int Delect(Con* p)
{
	char arr[20];
	int i;
	//Ѱ��Ҫɾ��������
	int count = Seek(p);
	
	for (i = count; i < p->siz; i++)
	{
		p->data[i] = p->data[i + 1];

	}
	p->siz = p->siz- 1;
	return OK;
}

// �޸ĺ���
int Change(Con* p)
{
	int count = Seek(p);
	if (count >= 0)
	{
		printf("\n");
		p->data[count] = my_scanf();
		return OK;
	}
	else
		return ERROR;

}

//�鿴����
int Seek(Con*p)
{
	int i;
	char arr[20];
	printf("���������Ϣ������>>");
	scanf("%s", arr);
	for (i = 0; i < p->siz; i++)
	{
		if (strcmp((p->data)[i].name, arr) == 0)
		{
			printf("%-10s%-10s%-10s%-10s\n", "name", "sex", "age", "number");
			printf("%-10s", (p->data)[i].name);
			printf("%-10s", (p->data)[i].sex);
			printf("%-10d", (p->data)[i].age);
			printf("%-10d\n", (p->data)[i].number);
			return i;
		}
	}
	if (i == p->siz - 1)
	{
		printf("�Բۣ�û���ҵ���\n");
		return ERROR;
	}
}