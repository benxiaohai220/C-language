#pragma once
#include<assert.h>
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
#define InitSize 50

typedef struct SqList {
	int* data;
	int length;
}SqList;

void Init_sqList(SqList* L);
int sqList_length(SqList* L);
bool sqList_Insert(SqList* L,int i,int elem);
int sqList_len(SqList L);