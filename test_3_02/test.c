#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//模拟实现库函数的qsort()函数（利用回调函数）
void Swap(char* buf1,char* buf2,int bt)
{
	int i = 0;
	for (i=0;i<bt;i++)
	{
		char temp = *buf1;
		*buf1 = *buf2;
		*buf2 = temp;
		buf1++;
		buf2++;
	}
}

void Bulle_sort(void* dest,int len,int bt,int (*cap)(const void*,const void*))
{

	int i = 0;
	
	for (i=0;i<len-1;i++)
	{
		int j = 0;
		for (j=0;j<len-i-1;j++)
		{
			if (cap( (char*)dest+j*bt,(char*)dest+(j+1)*bt) > 0)
				Swap((char*)dest + j * bt, (char*)dest + (j + 1) * bt,bt);
		}
	}
}
int cmp_int(const void* dest1,const void* dest2)//整形比较函数
{
	return *(int*)dest1 - *(int*)dest2;
}
int main()
{
	int arr[] = {1,2,3,9,8,4,5,6,7,30,23};
	Bulle_sort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmp_int);

	return 0;
}