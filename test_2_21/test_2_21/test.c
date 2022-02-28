#define _CRT_SECURE_NO_WARNINGS 1

//
//#include<string.h>
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	char arr1[]="bit";
//	char arr2[]="##########";
//
//	strcpy(arr2,arr1);
//	printf(arr2);
//	printf("%d\n",strlen(arr2));
//	
//	return  0;
//}
//
//void Swap1(int a,int b)
//{
//	int tem=0;
//	tem=a;
//	a=b;
//	b=tem;
//
//}
//
//void Swap2(int* pa,int* pb)
//{
//	int tem=0;
//	tem=*pa;
//	*pa=*pb;
//	*pb=tem;
//}
//#include<math.h>
//是素数返回1，不是素数返回0；
//int is_prime(int x)
//{
//	int i=0;
//	for(i=2;i<=sqrt(x);i++)
//	{
//		if(x%i==0)
//			return 0;
//	}
//	return 1;
//}
//
//再写函数是要注意是传值调用还是传址调用
//
//
//int main()
//{
//	/*char arr[]="hello world";
//	memset(arr,'*',5);
//	printf("%s\n",arr);*/
//	int a=10;
//	int b=20;
//	int i=0;//打印100-200之间的素数
//	printf("%d\n",a>>1);
//	for(i=100;i<=200;i++)
//	{
//		if(is_prime(i)==1)
//			printf("%d ",i);
//	}
//
//	printf("a = %d b= %d\n",a,b);
//	Swap2(&a,&b);
//	printf("a = %d b= %d\n",a,b);
//}
//#include<stdio.h>
//int main()
//{
//	printf("%d",printf("%d",printf("%d",43)));
//	return 0;
//}

//写一个用二分查找法从数组中查找指定数的下标的函数

#include<stdio.h>
#include<string.h>

int binary_search(int arr[],int key,int length)
{
	int left=0;
	int right=length-1;
	int mid=0;
	while(left<=right)
	{
		mid=(right+left)/2;
		if(arr[mid]<key)
			left=mid+1;
		if(arr[mid]>key)
			right=mid-1;
		if(arr[mid]==key)
			return mid;
	}
	return -1;
}
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int length=sizeof(arr)/sizeof(arr[0]);
	int index=binary_search(arr,10,length);
	printf("%d\n",index);
	return 0;
}