#pragma once
#include "sqList.h"

int SqList_minDelete_one(SqList* L);//��һ��
bool SqList_minDelete_two(SqList* L,int* temp);

void ListInverted(SqList* L);//�ڶ���

bool Del_Elem(SqList* L,int del_target);//������

bool Del_BetweenElem_sort(SqList* L,int begin,int end);//������

bool Del_BetweenElem_unsort(SqList* L,int begin,int end);//������

bool Del_RepeatElem(SqList* L);//������

SqList ListSpleye(SqList L1,SqList L2);
