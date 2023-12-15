#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int IsReverse(const char* str)//函数定义
//{
//	/*==========begin============*/
//	// 逆序
//	char str1[80] = { 0 };//建立新数组存放逆序后的字符串
//	int len = strlen(str);
//	int i = 0;
//	for (i = len - 1; i >= 0; i--)// 逆序的一种方法: 倒着拷贝
//	{                    //                也可以left和right交换，然后left++，right--，循环条件left<right
//		str1[len - 1 - i] = str[i];
//	}
//	if (strcmp(str, str1) == 0)
//		return 1;
//	else
//		return 0;
//
//
//
//	/*==========end==============*/
//}
//
//
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
//{
//	int end1 = m-1;
//	int end2 = n - 1;
//	int i = m + n - 1;
//	while (end1 >= 0 && end2 >= 0)
//	{
//		if (nums1[end1] > nums2[end2])
//		{
//			nums1[i--] = nums1[end1--];
//		}
//		else
//		{
//			nums1[i--] = nums2[end2--];
//		}
//	}
//	while (end2 >= 0)
//	{
//		nums1[i] = nums2[end2--];
//	}
//}
//

#include <stdio.h>
#include <stdlib.h>

int* sockCollocation(int* sockets, int socketsSize, int* returnSize)
{
	int* ps = (int*)malloc(sizeof(int) * 2);
	{
		if (ps == NULL)
		{
			perror("sockCollocation");
			return NULL;
		}
	}
	memset(ps, 0, 16);
	int pos = 0;
	int i = 0;
	for (i = 0; i < socketsSize; i++)
		ps[0] ^= sockets[i];

	i = 0;
	while (i < 32)
	{
		if ((ps[0] >> i & 1) == 1)
		{
			pos = i;
			break;
		}
		i++;
	}
	for (i = 0; i < socketsSize; i++)

		if ((sockets[i] >> pos & 1) == 1)
			ps[1] ^= sockets[i];

	ps[0] = ps[0] ^ ps[1];
	
	return ps;
}

int main()
{
	int arr[] = { 4,5,2,4,6,6 };
	int retsize = 0;
	int* ret = sockCollocation(arr, 6, &retsize);
	free(ret);
	ret = NULL;
	return 0;
}

//int missingNumber(int* nums, int numsSize)
//{
//    int x = numsSize * (numsSize + 1) / 2;
//    int i = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        x -= nums[i];
//    }
//    return x;
//}
//
//int main()
//{
//    int arr[] = { 0,1,2,3,4,5,6,8 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int ret = missingNumber(arr, sz);
//    return 0;
//}