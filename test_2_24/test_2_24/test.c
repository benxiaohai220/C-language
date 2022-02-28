#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//int* twoSum(int* nums, int numsSize, int target, int* returnSize){
//    int i=0;
//    int j=0;
//    returnSize =(int*)malloc(sizeof(int)*2);
//    for(i=0;i<numsSize-1;i++)
//    {
//        for(j=i+1;j<numsSize;j++)
//        {
//            if(target==nums[i]+nums[j])
//            {
//                returnSize[0]=i;
//                returnSize[1]=j;
//            }
//        }
//    }
//    return returnSize;
//}
//int main()
//{
//	int arr[]={1,2,3,5};
//	int returnArr[2]={0};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	twoSum(arr,sz,8,returnArr);
//	printf("%d %d\n",returnArr[0],returnArr[1]);
//	return 0;
//}
//#include<stdio.h>
//int my_strlen(char* arr)//求字符串的长度，字符串是以‘\0‘结束的
//{
//	char* start=arr;
//	char* end=arr;
//	while(*end!='\0')
//	{
//		end++;
//	}
//	return end-start;
//}
//int main()
//{
//	char arr[]="bit";//
//	int length=my_strlen(arr);
//	printf("%d\n",length);
//	return 0;
//}