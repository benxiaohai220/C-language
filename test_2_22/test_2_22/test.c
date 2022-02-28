#define _CRT_SECURE_NO_WARNINGS 1


//递归函数

////递归两个经典的问题
//1.汉诺塔问题
//2.青蛙跳台阶问题

#include<stdio.h>
#include<string.h>
int main()
{
	char arr[]="abcdef";
	int i=0;
	int num=strlen(arr);//strlen()函数的返回值是一个无符号的整形数据
	for(i=0;i<num;i++)
	{
		printf("%c ",arr[i]);
	}
}







////编写一个函数求出第n个数的斐波那契数列
//// 1 1 2  3 5 8 13 21 34 55
//
//#include<stdio.h>//使用循环的方式计算斐波那契数列
//
//int Fib(int num)
//{
//	int a=1;
//	int b=1;
//	int c=1;
//	while(num>2)
//	{
//		c=a+b;
//		a=b;
//		b=c;
//		num--;
//	}
//	return c;
//}
//int main()
//{
//	int num=0;
//	scanf("%d",&num);
//
//	printf("第%d个斐波那契数是：%d",num,Fib(num));
//	return 0;
//}


//#include<stdio.h>//递归函数的方式
//int Fib(int num)
//{
//	if(num<=2&&num>=1)
//		return 1;
//	else
//		return Fib(num-1)+Fib(num-2);
//}
//int main()
//{
//	int num=0;
//	scanf("%d",&num);
//	
//	printf("第%d的肥波那些数列是：%d",num,Fib(num));
//	return 0;
//}





////编写一个递归函数，求字符串的长度，要求不使用临时变量
//#include<stdio.h>
//int my_strlenth(char* str)
//{
//	if(*str !='\0')
//		return 1+my_strlenth(str+1);
//	return 0;
//}
//
//int main()
//{
//	char arr[]="bit";
//	int len=my_strlenth(arr);
//	printf("该字符串的长度是：%d",len);
//	return 0;
//}




//// 编写一个递归函数：按顺序输出你输入数据的每一位数字
//#include<stdio.h>
//
//void print(int num)
//{
//	if(num>9)
//		print(num/10);
//	printf("%d ",num%10);
//}
//int main()
//{
//	int num=0;
//	scanf("%d",&num);
//	print(num);
//	return 0;
//}