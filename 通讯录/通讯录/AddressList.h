#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

// ͨѶ¼ʵ��

//1.����һ�� ������Ϣ
//2. ����һ��ͨѶ¼����������˸�����Ϣ
//3. ����ʵ����ɾ�Ĳ�

// �����
#define MAX 100  // ����һ��ͨѶ¼��С
#define ERROR -1
#define OK 1



// ����һ����ϵ������Ԫ��
typedef struct PeopleInformation
{
	char name[20];
	char sex[10];
	int age;
	int number;
}pif;

// ����һ��ͨѶ¼
typedef struct contacts
{
	pif data[MAX]; //һ��ͨѶ¼�������ж��ٸ���ϵ��
	int siz;   // ͨѶ¼����������ϵ�˵ĸ���
}Con;



//��������

//����
int Add(Con*);

//ɾ��
int Delect(Con*);

//�޸�
int Change(Con*);

// ����
int Seek(Con*);

//��ʾ����
void Print(Con*);

//���������Ϣ����
pif my_scanf();


