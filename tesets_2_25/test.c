#define _CRT_SECURE_NO_WARNINGS 1

//实现字符串拷贝函数my_strcopy
#include<stdio.h>
#include<assert.h>
//根据所学的知识写出一个满分的字符串求长度的函数
int my_strlength(const char* arr)
{
	int returnSize=0;
	assert(arr!=NULL);
	while (*arr++ != '\0')
	{
		returnSize++;
	}
	return returnSize;
}
int main()
{
	int len = 0;
	char arr[] = "abcdefghjkl";
	len = my_strlength(arr);
	printf("%d\n",len);
	return 0;
}

//char* my_strcopy(char* dest,const char* src)//满分字符串拷贝函数
//{//这种方法使用const关键字对src进行指针进行限制，不同通过*src进行修改src数组的内容
//	//同时利用返回值为拷贝过后的dest关键字
//	char* ret = dest;
//	assert(dest!=NULL);
//	assert(src!=NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//void my_strcopy(char* dest,char* src)
//{
//	assert(dest!=NULL);//这个方法时当表达式的值为假时，进行报错
//	assert(src!=NULL);//使用这个方法是时要引用头文件
//	while (*dest++=*src++)
//	{
//		;
//	}
//}

//void my_strcopy(char* dest,char* src)//这种方法还是不够完美，当你传一个空指针时
//{                                    //没有进行提示，没有返回这个错误，不易发现
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++=*src++)//利用后置++的特性，进行先计算再进行赋值
//		{                   //同时利用'\0'的ASKLL码值为零的特性将循环结束掉
//			;
//		}
//	}
//}
//

//void my_strcopy(char* dest,char* src)//不用临时变量，将指针后移，再赋值
//{
//	while (*src!='\0')  //这样写方法不够好，代码太多，而且也没有对指针为NULL时进行判断
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
//void my_strcopy(char* dest,char* src)//创建临时变量，根据数组一个一个赋值过去
//{
//	int i = 0;
//	while (src[i] != '\0')
//	{
//		dest[i] = src[i];
//		i++;
//	}
//	dest[i] = src[i];
//}
//int main()
//{
//	char arr[] = "############";
//	char arr1[] = "bit";
//
//	//my_strcopy(arr,arr1);
//	printf("%s\n",my_strcopy(arr,arr1));
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int factorial_sum(int num) 
//{
//	int i = 0;
//	int j = 0;
//	int returnSum=0;
//	int returnTem=1;
//	for (i=1;i<=num;i++)
//	{
//		returnTem = 1;
//		for (j = 1; j <=i; j++)
//		{
//			returnTem = returnTem * j;
//		}
//		returnSum += returnTem;
//	}
//	return returnSum;
//}
////写一个函数求前n向的阶乘的和
//int main()
//{
//
//	int num = 0;
//	int sum = 0;
//	printf("请输入要求阶乘和的阶数：->\n");
//	int j=scanf("%d",&num);//scanf()怎么还会有返回值,返回值时一
//	sum = factorial_sum(num);
//	printf("结果为：%d\n",sum);
//	printf("%d",j);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		//arr[i] = 0;
//	}
//	return 0;
//}