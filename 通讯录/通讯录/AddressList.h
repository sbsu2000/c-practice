#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

// 通讯录实现

//1.定义一个 个人信息
//2. 定义一个通讯录，里面包含了个人信息
//3. 可以实现增删改查

// 定义宏
#define MAX 100  // 设置一个通讯录大小
#define ERROR -1
#define OK 1



// 定义一个联系人数据元素
typedef struct PeopleInformation
{
	char name[20];
	char sex[10];
	int age;
	int number;
}pif;

// 定义一个通讯录
typedef struct contacts
{
	pif data[MAX]; //一个通讯录可以有有多少个联系人
	int siz;   // 通讯录里面现有联系人的个数
}Con;



//函数声明

//增加
int Add(Con*);

//删除
int Delect(Con*);

//修改
int Change(Con*);

// 查找
int Seek(Con*);

//显示函数
void Print(Con*);

//输入个人信息函数
pif my_scanf();


