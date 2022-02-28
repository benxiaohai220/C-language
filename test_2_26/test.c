#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<Windows.h>
int main()
{
	char arr[1000];
	int i = 0;
	for (i = 0; i < 1000; i++)
	{
		arr[i] = -1 - i;
		//Sleep(100);
	}
	printf("%d\n",(int)strlen(arr));
	printf("%d\n",'\0');
	return 0;
}
//#include<stdio.h>
//#include<Windows.h>
//int main()
//{
//	//计算机中只有加法计算器，所以在计算时是以补码进行计算
//	//int a = 0x11223344;
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);
//	}
//
//	return 0;
//
//	
//}