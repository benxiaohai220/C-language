#define _CRT_SECURE_NO_WARNINGS 1


//�ݹ麯��

////�ݹ��������������
//1.��ŵ������
//2.������̨������

#include<stdio.h>
#include<string.h>
int main()
{
	char arr[]="abcdef";
	int i=0;
	int num=strlen(arr);//strlen()�����ķ���ֵ��һ���޷��ŵ���������
	for(i=0;i<num;i++)
	{
		printf("%c ",arr[i]);
	}
}







////��дһ�����������n������쳲���������
//// 1 1 2  3 5 8 13 21 34 55
//
//#include<stdio.h>//ʹ��ѭ���ķ�ʽ����쳲���������
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
//	printf("��%d��쳲��������ǣ�%d",num,Fib(num));
//	return 0;
//}


//#include<stdio.h>//�ݹ麯���ķ�ʽ
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
//	printf("��%d�ķʲ���Щ�����ǣ�%d",num,Fib(num));
//	return 0;
//}





////��дһ���ݹ麯�������ַ����ĳ��ȣ�Ҫ��ʹ����ʱ����
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
//	printf("���ַ����ĳ����ǣ�%d",len);
//	return 0;
//}




//// ��дһ���ݹ麯������˳��������������ݵ�ÿһλ����
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