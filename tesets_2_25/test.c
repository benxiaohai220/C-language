#define _CRT_SECURE_NO_WARNINGS 1

//ʵ���ַ�����������my_strcopy
#include<stdio.h>
#include<assert.h>
//������ѧ��֪ʶд��һ�����ֵ��ַ����󳤶ȵĺ���
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

//char* my_strcopy(char* dest,const char* src)//�����ַ�����������
//{//���ַ���ʹ��const�ؼ��ֶ�src����ָ��������ƣ���ͬͨ��*src�����޸�src���������
//	//ͬʱ���÷���ֵΪ���������dest�ؼ���
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
//	assert(dest!=NULL);//�������ʱ�����ʽ��ֵΪ��ʱ�����б���
//	assert(src!=NULL);//ʹ�����������ʱҪ����ͷ�ļ�
//	while (*dest++=*src++)
//	{
//		;
//	}
//}

//void my_strcopy(char* dest,char* src)//���ַ������ǲ������������㴫һ����ָ��ʱ
//{                                    //û�н�����ʾ��û�з���������󣬲��׷���
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++=*src++)//���ú���++�����ԣ������ȼ����ٽ��и�ֵ
//		{                   //ͬʱ����'\0'��ASKLL��ֵΪ������Խ�ѭ��������
//			;
//		}
//	}
//}
//

//void my_strcopy(char* dest,char* src)//������ʱ��������ָ����ƣ��ٸ�ֵ
//{
//	while (*src!='\0')  //����д���������ã�����̫�࣬����Ҳû�ж�ָ��ΪNULLʱ�����ж�
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
//void my_strcopy(char* dest,char* src)//������ʱ��������������һ��һ����ֵ��ȥ
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
////дһ��������ǰn��Ľ׳˵ĺ�
//int main()
//{
//
//	int num = 0;
//	int sum = 0;
//	printf("������Ҫ��׳˺͵Ľ�����->\n");
//	int j=scanf("%d",&num);//scanf()��ô�����з���ֵ,����ֵʱһ
//	sum = factorial_sum(num);
//	printf("���Ϊ��%d\n",sum);
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