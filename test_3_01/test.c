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
//	//�������ʹ������˼���ǽ�0ǿ������ת����void(*)()���ͣ�������*��������0��ַָ��ĺ���
//
//	void(*p)() = test;
//	//void(*p)() = test1;
//
//	p();
//
//	//void(*  signal(int,void(*)(int))   )(int)
//	//��δ����Ǻ�����Ϊsignal�ĺ�������
//	//��������Ĳ���Ϊint�ͺ���ָ������->����ָ��ָ�����һ������Ϊint������ֵΪvoid���͵�һ������
//	//��������ķ���ֵ����һ������ָ������->�ú���ָ��ָ�����һ������Ϊint������ֵΪvoid���͵�һ������
//
//	void(*signal(int, void(*)(int)))(int);
//	//��������������Լ�����typedef�Ժ������ͽ���������
//
//	//typedef void(*)(int) p_func;//�Ժ���ָ��������������������
//
//	typedef void(*p_func)(int);//ֻ����������������
//	p_func signal(int,void(*)(int));
//
//
//	int(*pa)(int, int) = Add;
//	printf("%d\n",pa(2,3));
//	printf("%d\n",Add(2,3));
//	printf("%d\n", (* pa)(2, 3));
//	printf("%d\n", (**pa)(2, 3));
//	//ע�⣬*������û��ʵ������
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
//	//int(*p)(int, int) = Add;//�������ָ����Դ��Add,Sub,Mul,Div��
//	//���Կ�����һ������ָ���������������ĸ������ĵ�ַ
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
{//��src�ַ������Ƶ�dest�ַ����У������ظ��ַ���
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
	//char* arr4 = "###########";//����my_strcopy()ʱ��dest����ȥ��ָ�����͵ĳ�����ܲ�������Ϊʲô��Ϊʲô���ҵ����أ��Ҳ���

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
//	int* arr[10];//ָ�����飬�����ŵ��ǵ�ַ
//	int* (*p)[10]=&arr;//����ָ�룬��ŵ�������ĵ�ַ
//	int (*pa)(int, int);//����ָ�룬��һ��ָ�����ĵ�ַ
//	int(*pa[10])(int, int);//����ָ�����飬��һ�����飬���������ŵ��Ǻ���ָ��
//	int(*(*paa)[10])(int, int);//����ָ�������ָ�룬��һ��ָ�룬��һ��ָ����ָ�������һ��ָ��
//
//	return 0;
//}

//�ص�����-->����ͨ��һ��ͨ������ָ����õĺ������Ѻ�����ָ�루��ַ����Ϊ�������ݸ���һ���������ͳ����ָ��Ϊ�ص�����
// дһ��ð������ĺ������������κ����͵�����
//�⺯��--->void qsort (void* base, 
//						size_t num, 
//						size_t size,
//						int (*compar)(const void*, const void*));
//����⺯�����Զ��κ����ͽ�������
//       base-->�ǽ����������Ԫ�ص�ַ
//		 num--->������Ԫ�صĸ���
//		 size-->������ĵ���Ԫ�ص��ֽڴ�С
//		 int(*compar)(const void*,const void*)-->�ǱȽϺ�����������ָ�룩����Ҫ�Լ�д
		//�Ƚ�����Ԫ�صĴ�С��������ڷ��ش���0������С���򷵻�С��0��������ȷ���0