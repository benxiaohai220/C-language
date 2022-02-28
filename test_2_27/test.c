#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void printf1(int (*arr)[5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++) 
		{
			printf("%d " ,arr[i][j]);
		}
		printf("\n");
	}
}
int main()
{

	int arr[3][5] = { {1,2,3,4,5}, {2,3,4,5,6}, {3,4,5,6,7} };

	printf1(arr,3,5);
	
	/*char a = 'q';
	char* arr[5] = {&a};
	char* (*p)[5] = &arr;
	printf("%p\n", arr[0]);
	printf("%c\n", *arr[0]);
	printf("%p\n",(*p)[0]);
	printf("%c\n", *(*p)[0]);*/


	return 0;
}