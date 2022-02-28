#define _CRT_SECURE_NO_WARNINGS 1

#include "topic.h"

bool Del_Elem(SqList* L,int del_target)
{//记录顺序表中等于del_target的个数，边扫描边L，边记录k，并将不等于的向前移动k
	int k = 0;
	int i = 0;
	for (i = 0; i < L->length; i++)
	{
		if (del_target == L->data[i])
			k++;
		else
			L->data[i] = L->data[i + k];
	}
	if (!k)
		return false;
	L->length -= k;
	return true;
	
}

//bool Del_Elem(SqList* L, int del_target)
//{//时间复杂度为O(n)--->相当于只能用一次for循环
//	//空间复杂度为O(1)--->相当于用指针
//	int k = 0;//记录不等于要删除元素的个数
//	int i = 0;
//	for (i = 0; i < L->length; i++)
//	{
//		if (del_target != L->data[i])
//		{
//			L->data[k] = L->data[i];
//			k++;
//		}
//	}
//	if (k == L->length)
//		return false;
//	L->length = k;
//	return true;
//}

//bool Del_Elem(SqList* L, int del_target)
//{//这样写不算法不高效，而且还不能将全部的del_target删除，只能删除第一个，一次只能删除一个
//	int i = 0;
//	int pos = 0;
//	int j = 0;
//	for (i = 0; i < L->length; i++)
//	{
//		if (L->data[i] == del_target)
//		{
//			pos = i;
//			L->length--;
//			break;
//		}
//	}
//	for (j = pos; j < L->length; j++)
//	{
//		L->data[j] = L->data[j + 1];
//	}
//	if (!pos)
//		return false;
//	return true;
//}