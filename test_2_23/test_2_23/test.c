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
//#include<stdio.h>//д���ʽʱҪ�ñ��ʽ��λ�Ƶļ���·������Ȼ�ڲ�ͬ�ı������ϻ���ֲ�ͬ�ļ�����
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
//����������������ݵĶ�������һ�ĸ�����
//�����ڼ���������Բ������ʽ�洢��
//#include<stdio.h>
//���ַ������У�������������Ǹ�����ʱ���㲻������
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

//���ð�λ�����λ������д���㷨
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
//�������Է���>>
//#include<stdio.h>
//int main()
//{
//	int a=3;
//	int b=5;
//	//����a��b�������ֵ������Ҳ�������ʱ����
//	//ʹ�����ķ���
//	//ʹ����ͨ�ļӼ������н�������ʱ�ܿ��ܻ�����������
//	//int���ĸ��ֽ�
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
//	//���Ʋ�������
//	//��Ϊ�������ƣ����������ƶ�һλ����ԭͷ�ϲ��Ϸ���λ
//	//    �߼����ƣ����������ƶ�һλ����Դͷ�ϲ���0
//	int d=-10;
//	int e=d>>1;
//	printf("%d\n",c);
//	printf("%d\n",e);
//	return 0;
//}



////��ð������һ������ĳ�����
//
//#include<stdio.h>
//void bubble_sort(int arr[],int sz)
//{
//	int i=0;
//	for(i=0;i<sz-1;i++)
//	{
//		int flag=1;//��ʾ��һ�������Ѿ��������źõ�
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