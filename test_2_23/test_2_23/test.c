#define _CRT_SECURE_NO_WARNINGS 1

int main()
{
	int i=0;
	int arr[10]={0};
	int* p=arr;
	//char* p=arr;
	for(i=0;i<10;i++)
	{
		*(p+i)=1;
	}
	
}
//#include<stdio.h>//写表达式时要让表达式有位移的计算路径，不然在不同的编译器上会出现不同的计算结果
//int main()
//{
//	int i=0;
//	int c=1;
//	for(i=0;i<100;i++)
//	{
//	printf("%d\n",c+--c);
//	c=1;
//	}
//	return 0;
//}
//计算输入的整数数据的二进制中一的个数，
//整数在计算机中是以补码的形式存储的
//#include<stdio.h>
//这种方法不行，当输入的数据是负整数时就算不出来啦
//int bin_sum(int sum)
//{
//	int count=0;
//	while(sum>0)
//	{
//		if(sum%2==1)
//		{
//			count++;
//		}
//		sum=sum/2;
//	}
//	return count;
//}

//利用按位与和移位操作符写该算法
//int bin_sum(int sum)
//{
//	int i=0;
//	int count=0;
//	for(i=0;i<32;i++)
//	{
//		if(1==(sum&1))
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int sum=0;
//	int a=0;
//	scanf("%d",&sum);
//	a=bin_sum(sum);
//	printf("%d\n",a);
//	return 0;
//}
//右移语言符：>>
//#include<stdio.h>
//int main()
//{
//	int a=3;
//	int b=5;
//	//交换a和b俩个数字的内容且不适用临时变量
//	//使用异或的方法
//	//使用普通的加减法进行交换数据时很可能会产出溢出数据
//	//int是四个字节
//	printf("a=%d\n",a);
//	printf("b=%d\n",b);
//	a=a^b;
//	b=a^b;
//	a=a^b;
//	printf("a=%d\n",a);
//	printf("b=%d\n",b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a=10;
//	int c=a>>1;
//	//右移操作符：
//	//分为算术右移：补码向右移动一位，在原头上补上符号位
//	//    逻辑右移：补码向右移动一位，在源头上补上0
//	int d=-10;
//	int e=d>>1;
//	printf("%d\n",c);
//	printf("%d\n",e);
//	return 0;
//}



////用冒泡排序将一个数组改成升序
//
//#include<stdio.h>
//void bubble_sort(int arr[],int sz)
//{
//	int i=0;
//	for(i=0;i<sz-1;i++)
//	{
//		int flag=1;//表示这一趟排序已经是升序排好的
//		int j=0;
//		for(j=0;j<sz-1-i;j++)
//		{
//			if(arr[j]>arr[j+1])
//			{
//			int temp=arr[j];
//			arr[j]=arr[j+1];
//			arr[j+1]=temp;
//			flag=0;
//			}
//		}
//		if(flag==1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int sz=0;
//	int i=0;
//	sz=sizeof(arr)/sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for(i=0;i<sz;i++)
//		printf("%d ",arr[i]);
//	return 0;
//}