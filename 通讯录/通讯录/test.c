#define _CRT_SECURE_NO_WARNINGS 1
#include "AddressList.h"



// 显示菜单函数
void menu()
{
	printf("*********************************\n");
	printf("*****1.add         2.delect******\n");
	printf("*****3. change     4. seek ******\n");
	printf("*****5.print      0.exit   ******\n");
	printf("********************************\n");
}

// 初始化通讯录函数
void init_con(Con *p) 
{
	p->siz = 0;
}




int main()
{
	//定义一个菜单枚举类型
	enum seletiong  
	{
		exit,
		add,
		delect,
		change,
		seek,
		print
	};
	// 创建一个通讯录
	Con con;
	//创建一个联系人类型
	pif f;
	// 初始化通讯录
	init_con(&con);
	//用户输入的值
	int input;
	

	do
	{
		printf("\n");
		// 显示菜单
		menu();
		printf("请输入你的选择>>");
		scanf("%d", &input);
		switch (input)
		{
		case add:
		{
			if (Add(&con) == OK)
				printf("增加成功!\n");
			break;
		}
			
		case delect:
		{
			if ( Delect(&con) == OK)
				printf("删除成功!\n");
			break;
		}
		case change:
		{
			if (Change(&con) == OK)
				printf("修改成功!\n");
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

