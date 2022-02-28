#define _CRT_SECURE_NO_WARNINGS 1

/*
	线性表通常实现的操作函数有：

		1.InitList(&L):初始化线性表,构造一个空的线性表

		2.length(L)：求表长，即线性表中元素的个数

		3.LocateElem(L,e):按值查找，在表中查找给定数据e的元素

		4.GetElem(L,i):按位置查找，在表中查找第i个位置元素的值

		5.ListInsert(&L,i,e):插入元素，在表中的第i个位置上插入元素e

		6.ListDelete(&L,i,&e):删除元素，删除表中的第i个位置上的元素，并用e返回删除元素的值

		7.PrintList(L):打印输出操作，按线性表的位置顺序输出线性表中的所有元素

		8.Empty(L):判断线性表是否为空，为空返回true，否则返回false

		9.DestroyList(&L):销毁线性表，并且释放线性表占用的存储空间

*/
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>
//#define MaxSize 100//定义顺序表的最大长度(静态数组)
#define InitSize 50 //定义顺序表的初始长度（动态数组）

//typedef struct SqList {
//	char data[MaxSize];//顺序表的元素（这里的数组是使用静态分配的）
//	int length;//顺序表当前的长度
//}SqList;//顺序表类型的定义（即类型的名字）

typedef struct SqList {
	char* data;//顺序表的元素（数组是动态分配的）
	int length;//顺序表当前的长度
}SqList;

void InitList(SqList* L);//初始化线性表,构造一个空的线性表

int length(SqList L);

int LocateElem(SqList L,char target);

char GetElem(SqList L,int i);

SqList ListInsert(SqList* L, int i, char target);//插入操作
//bool ListInsert(SqList* L,int i,char target);//布尔函数的插入操作

char* ListDelete(SqList* L,int i,char* elem);//删除操作
//bool ListDelete(SqList* L, int i, char* elem);//布尔函数的删除操作

bool Empty(SqList L);

void PrintList(SqList L);//输出线性表中的每一个数据元素

void DestroyList(SqList* L);