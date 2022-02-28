#define _CRT_SECURE_NO_WARNINGS 1

/*
	���Ա�ͨ��ʵ�ֵĲ��������У�

		1.InitList(&L):��ʼ�����Ա�,����һ���յ����Ա�

		2.length(L)������������Ա���Ԫ�صĸ���

		3.LocateElem(L,e):��ֵ���ң��ڱ��в��Ҹ�������e��Ԫ��

		4.GetElem(L,i):��λ�ò��ң��ڱ��в��ҵ�i��λ��Ԫ�ص�ֵ

		5.ListInsert(&L,i,e):����Ԫ�أ��ڱ��еĵ�i��λ���ϲ���Ԫ��e

		6.ListDelete(&L,i,&e):ɾ��Ԫ�أ�ɾ�����еĵ�i��λ���ϵ�Ԫ�أ�����e����ɾ��Ԫ�ص�ֵ

		7.PrintList(L):��ӡ��������������Ա��λ��˳��������Ա��е�����Ԫ��

		8.Empty(L):�ж����Ա��Ƿ�Ϊ�գ�Ϊ�շ���true�����򷵻�false

		9.DestroyList(&L):�������Ա������ͷ����Ա�ռ�õĴ洢�ռ�

*/
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>
//#define MaxSize 100//����˳������󳤶�(��̬����)
#define InitSize 50 //����˳���ĳ�ʼ���ȣ���̬���飩

//typedef struct SqList {
//	char data[MaxSize];//˳����Ԫ�أ������������ʹ�þ�̬����ģ�
//	int length;//˳���ǰ�ĳ���
//}SqList;//˳������͵Ķ��壨�����͵����֣�

typedef struct SqList {
	char* data;//˳����Ԫ�أ������Ƕ�̬����ģ�
	int length;//˳���ǰ�ĳ���
}SqList;

void InitList(SqList* L);//��ʼ�����Ա�,����һ���յ����Ա�

int length(SqList L);

int LocateElem(SqList L,char target);

char GetElem(SqList L,int i);

SqList ListInsert(SqList* L, int i, char target);//�������
//bool ListInsert(SqList* L,int i,char target);//���������Ĳ������

char* ListDelete(SqList* L,int i,char* elem);//ɾ������
//bool ListDelete(SqList* L, int i, char* elem);//����������ɾ������

bool Empty(SqList L);

void PrintList(SqList L);//������Ա��е�ÿһ������Ԫ��

void DestroyList(SqList* L);