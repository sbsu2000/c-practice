#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//交换函数
int swap(void *e1,void *e2,int width)
{
	int k;
	char tmp;
	for (k = 0; k < width; k++)
	{
		// 一个个字节交换，最终达到，想要的数据类型交换
		tmp = *(char*)e1;
		*(char*)e1 = *(char*)e2;
		*(char*)e2 = tmp;

		//在这里出现了错误，没有进行解引用，导致外部的数组根本没有发生改变

	
	}
}

void my_sort(void *base,//排序数据地址
	         int sz ,//排序元素个数
	         int width,//每个元素所占字节大小       
	         int (*cmp)(void *e1,void *e2) /* 传入用户自定义比较函数，用函数指针接收*/ )
{
	int i;
	int j;
	//一组待排序元素排序的趟数
	for (i = 0; i < sz -1;i++)
	{
		//每个元素排序的次数
		for (j = 0; j < sz - 1 - i; j++)
		{ 
			//使用用户传入的自定义比较函数对排序元素以及它的下一个元素进行比较
			if (cmp((char*)base +i*width,(char*)base + (i+1)*width)  > 0) //转换为char更容易对字节进行操作，从而得到各个数据类型的大小 
			{
				swap((char*)base + i * width, (char*)base + (i + 1) * width,width); //如果相邻两个元素第二个大于第一个，则交换
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
	//使用前需要自己编写一个比较函数,传入my_sort中
	my_sort(arr, sz, width,int_cmp);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}


}

int main()
{
    //模拟函数 my_sort()
	test1();//测试排序int数组 
	return 0;
}