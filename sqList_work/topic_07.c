#define _CRT_SECURE_NO_WARNINGS 1

#include"topic.h"
SqList ListSpleye(SqList L1, SqList L2)
{//两个有序顺序表合成一个     返回一个新的有序顺序表
	SqList returnList;
	Init_sqList(&returnList);
	/*returnList.data = (int*)malloc((L1.length + L2.length) * sizeof(int*));*/
	int i = 0;
	int L1_top = 0;
	int L2_top = 0;
	int len_same = L1.length > L2.length ? L1.length - L2.length : L2.length - L1.length;
	for (i = 0; i < len_same*2;i++)
	{
		if (L1.data[L1_top] > L2.data[L2_top])
		{
			returnList.data[i] = L2.data[L2_top];
			L2_top++;
		}
		else
		{
			returnList.data[i] = L1.data[L1_top];
			L1_top++;
		}
	}
	if(L1.length>L2.length)
		for (i = len_same * 2; i < L1.length + L2.length; i++)
		{
			returnList.data[i] = L1.data[L1_top];
			L1_top++;
		}
	else
	{
		for (i = len_same * 2; i < L1.length + L2.length; i++)
		{
			returnList.data[i] = L1.data[L2_top];
			L2_top++;
		}
	}
	returnList.length = L1.length + L2.length;
	return returnList;
}