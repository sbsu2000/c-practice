#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//��������
int swap(void *e1,void *e2,int width)
{
	int k;
	char tmp;
	for (k = 0; k < width; k++)
	{
		// һ�����ֽڽ��������մﵽ����Ҫ���������ͽ���
		tmp = *(char*)e1;
		*(char*)e1 = *(char*)e2;
		*(char*)e2 = tmp;

		//����������˴���û�н��н����ã������ⲿ���������û�з����ı�

	
	}
}

void my_sort(void *base,//�������ݵ�ַ
	         int sz ,//����Ԫ�ظ���
	         int width,//ÿ��Ԫ����ռ�ֽڴ�С       
	         int (*cmp)(void *e1,void *e2) /* �����û��Զ���ȽϺ������ú���ָ�����*/ )
{
	int i;
	int j;
	//һ�������Ԫ�����������
	for (i = 0; i < sz -1;i++)
	{
		//ÿ��Ԫ������Ĵ���
		for (j = 0; j < sz - 1 - i; j++)
		{ 
			//ʹ���û�������Զ���ȽϺ���������Ԫ���Լ�������һ��Ԫ�ؽ��бȽ�
			if (cmp((char*)base +i*width,(char*)base + (i+1)*width)  > 0) //ת��Ϊchar�����׶��ֽڽ��в������Ӷ��õ������������͵Ĵ�С 
			{
				swap((char*)base + i * width, (char*)base + (i + 1) * width,width); //�����������Ԫ�صڶ������ڵ�һ�����򽻻�
			}
			
		}
	}
}


int int_cmp(int* e1,int* e2)
{
	return (*e1) - (*e2);
}

test1()
{
	int sz;
	int width;
	int i;
	int arr[10] = {9,8,7,6,5,4,3,2,1,0};
	sz = sizeof(arr) / sizeof(arr[0]);
	width = sizeof(arr[0]);
	//ʹ��ǰ��Ҫ�Լ���дһ���ȽϺ���,����my_sort��
	my_sort(arr, sz, width,int_cmp);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}


}

int main()
{
    //ģ�⺯�� my_sort()
	test1();//��������int���� 
	return 0;
}