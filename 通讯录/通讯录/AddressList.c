#define _CRT_SECURE_NO_WARNINGS 1
#include "AddressList.h"



// 输入个人信息函数
pif my_scanf()
{
	pif f;
	printf("请输入个人信息>>\n");
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

// 显示函数
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

// 增加函数
int Add(Con* p)
{
	if (p->siz >= MAX)
	{
		printf("通讯录已满！");
		return ERROR;
	}
	*(p->data + p->siz) = my_scanf();
	p->siz = (p->siz)+1;
	return OK;

}

// 删除函数
int Delect(Con* p)
{
	char arr[20];
	int i;
	//寻找要删除的数据
	int count = Seek(p);
	
	for (i = count; i < p->siz; i++)
	{
		p->data[i] = p->data[i + 1];

	}
	p->siz = p->siz- 1;
	return OK;
}

// 修改函数
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

//查看函数
int Seek(Con*p)
{
	int i;
	char arr[20];
	printf("请输入该信息的名字>>");
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
		printf("卧槽！没有找到！\n");
		return ERROR;
	}
}