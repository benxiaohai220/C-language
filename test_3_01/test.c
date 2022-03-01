#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//void test()
//{
//	printf("hello world\n");
//}
//void test1()
//{
//	printf("HELLO WORLD\n");
//}
//int Add(int x,int y)
//{
//	return x + y;
//}
//int main()
//{
//	//(*((void(*)())0))();
//	//这种类型代码的意思就是将0强制类型转换成void(*)()类型，并进行*操作调用0地址指向的函数
//
//	void(*p)() = test;
//	//void(*p)() = test1;
//
//	p();
//
//	//void(*  signal(int,void(*)(int))   )(int)
//	//这段代码是函数名为signal的函数声明
//	//这个函数的参数为int和函数指针类型->函数指针指向的是一个参数为int，返回值为void类型的一个函数
//	//这个函数的返回值又是一个函数指针类型->该函数指针指向的是一个参数为int，返回值为void类型的一个函数
//
//	void(*signal(int, void(*)(int)))(int);
//	//这个函数声明可以简化利用typedef对函数类型进行重命名
//
//	//typedef void(*)(int) p_func;//对函数指针重命名不能这样命名
//
//	typedef void(*p_func)(int);//只能这样进行重命名
//	p_func signal(int,void(*)(int));
//
//
//	int(*pa)(int, int) = Add;
//	printf("%d\n",pa(2,3));
//	printf("%d\n",Add(2,3));
//	printf("%d\n", (* pa)(2, 3));
//	printf("%d\n", (**pa)(2, 3));
//	//注意，*在这里没有实际意义
//
//
//
//	return 0;
//}


//#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x,int y)
//{
//	return x / y;
//}
//int main()
//{
//	//int(*p)(int, int) = Add;//这个函数指针可以存放Add,Sub,Mul,Div等
//	//所以可以用一个函数指针的数组来存放这四个函数的地址
//	int(*p[4])(int, int) = { Add,Sub,Mul,Div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n",p[i](2,3));
//	}
//	return 0;
//}

//
#include<assert.h>
#include<stdio.h>
char* my_strcopy(char* dest, char* src)
{//将src字符串复制到dest字符串中，并返回该字符串
	assert(src);
	while (*dest++=*src++)
	{

	}
	return dest;
}
int main()
{
	char arr1[] = "12345";
	char arr2[] = "#########";

	char* arr3 = "123456";
	char arr4[] = "###########";
	//char* arr4 = "###########";//调用my_strcopy()时，dest传进去是指针类型的程序会跑不起来，为什么，为什么，我的天呢，我不会

	my_strcopy(arr2, arr1);
	printf("%s\n", arr2);
	my_strcopy(arr4, arr3);
	printf("%s\n", arr4);
	/*char* (*pf)(char*,const char*) = my_strcopy;
	char* (*pfArr[4])(char*,const char*) = { my_strcopy ,my_strcopy ,my_strcopy ,my_strcopy };*/

	
	return 0;
}

//int main()
//{
//	int* arr[10];//指针数组，里面存放的是地址
//	int* (*p)[10]=&arr;//数组指针，存放的是数组的地址
//	int (*pa)(int, int);//函数指针，是一个指向函数的地址
//	int(*pa[10])(int, int);//函数指针数组，是一个数组，数组里面存放的是函数指针
//	int(*(*paa)[10])(int, int);//函数指针数组的指针，是一个指针，是一个指向函数指针数组的一个指针
//
//	return 0;
//}

//回调函数-->就是通过一个通过函数指针调用的函数，把函数的指针（地址）作为参数传递给另一个函数，就称这个指针为回调函数
// 写一个冒泡排序的函数，可以排任何类型的数据
//库函数--->void qsort (void* base, 
//						size_t num, 
//						size_t size,
//						int (*compar)(const void*, const void*));
//这个库函数可以对任何类型进行排序
//       base-->是进行排序的首元素地址
//		 num--->是排序元素的个数
//		 size-->是排序的单个元素的字节大小
//		 int(*compar)(const void*,const void*)-->是比较函数（及函数指针），需要自己写
		//比较两个元素的大小，如果大于返回大于0的数，小于则返回小于0的数，相等返回0