#pragma once
#include "sqList.h"

int SqList_minDelete_one(SqList* L);//第一题
bool SqList_minDelete_two(SqList* L,int* temp);

void ListInverted(SqList* L);//第二题

bool Del_Elem(SqList* L,int del_target);//第三题

bool Del_BetweenElem_sort(SqList* L,int begin,int end);//第四题

bool Del_BetweenElem_unsort(SqList* L,int begin,int end);//第五题

bool Del_RepeatElem(SqList* L);//第六题

SqList ListSpleye(SqList L1,SqList L2);
