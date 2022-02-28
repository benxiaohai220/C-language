#define _CRT_SECURE_NO_WARNINGS 1
#include "topic.h"

int main()
{
	SqList L;
	SqList L3;
	Init_sqList(&L);
	SqList L1;
	Init_sqList(&L);
	int arr[] = {1,2,2,2,2,3,3,3,4,4,5};
	int arr1[] = {1,2,3,4,5,6,7};
	int i = 1;
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		sqList_Insert(&L, i + 1, arr[i]);
	}
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		sqList_Insert(&L1, i + 1, arr1[i]);
	}
	L3= ListSpleye(L, L1);
	for (i = 0; i < L3.length; i++)
	{
		printf("%d ",L3.data[i]);
	}
	/*for (i = 0; i < L.length; i++)
	{
		printf("%d ",L.data[i]);
	}*/
	/*Del_RepeatElem(&L);*/
	printf("\n");
	/*for (i = 0; i < L.length; i++)
	{
		printf("%d ", L.data[i]);
	}*/
	/*printf("\n");
	printf("%d\n",sqList_len(L));*/


	return 0;
}