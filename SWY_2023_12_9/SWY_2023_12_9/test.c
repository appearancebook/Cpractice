#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	return 0;
//}

//#include <stdio.h>
//
//void print(float* p, int sz)
//{
//	float* p1 = p + sz;
//	while (p<p1)
//	{
//		printf("%.2f ", *p++);
//	}
//}
//
//
//int main()
//{
//	float arr[] = { 3.14f,7.02f,2.13f };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	float* p = arr;
//	print(arr, sz);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//void Revsr(char* arr, int len)
//{
//	char* left = arr + 0;
//	char* right = arr + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[10001] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	Revsr(arr, len);
//	
//	printf("%s", arr);
//	return 0;
//}

//#include <stdio.h>
//
//void LX_print(int line)
//{
//	//打印上部分 
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//
//		//打印 '* '
//		for (j = 0; j < 2 * (i + 1) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	//打印下部分
//	for (i = 0; i < line - 1; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//
//		//打印'* '
//		for (j = 0; j < 2 * (line - 1 - i) - 1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	LX_print(line);
//	return 0;
//}

////自幂数
//
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	//0---100000生成
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//计算是几位数
//		int n = 1;
//		int tmp = i;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//计算每位的n次幂之和
//		int sum = 0;
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//	scanf("%d", &money);
//	total = +money;
//	empty += money;
//	//while (empty >= 2)
//	//{
//	//	total += empty / 2;
//	//	empty = empty / 2 + empty % 2;
//	//}
//	if (money > 0)
//		total = 2 * money - 1;
//
//	printf("%d\n", total);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* o = arr;
//	int* j = arr + sz-1;
//	while (o < j)
//	{
//		//找偶数
//		while ((o < j) && (*o) % 2)
//			o++;
//
//		//找奇数
//		while ((o < j) && (!((*j) % 2)))
//			j--;
//
//		if (o < j)
//		{
//			int tmp = *o;
//			*o = *j;
//			*j = tmp;
//			o++;
//			j--;
//
//		}
//	}
//	int i = 0;
//	for (i = 0; i < sz ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

////多组输入
//
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n)==1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i + j < n-1)
//					printf("  ");
//				else
//					printf("* ");
//				
//			}
//			printf("\n");
//		}
//
//	}
//	return 0;
//}

////模拟strlen
//
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
////计数器
//size_t my_strlen1(char* arr)
//{
//	assert(arr);
//	int count = 0;
//	while (*arr++)
//		count++;
//	return count;
//}
//
////递归
//size_t my_strlen2(char* arr)
//{
//	assert(arr);
//	if (!*arr)
//		return 0;
//	return (1 + my_strlen2(++arr));
//}
//
//
////地址-地址
//size_t my_strlen3(char* arr)
//{
//	assert(arr);
//	char* p = arr;
//	while (*arr++);
//	return arr - p - 1;
//}
//
//
//int main()
//{
//	char* arr = "appearance book";
//	int a1 = strlen(arr);
//	printf("%d\n", a1);
//
//	a1 = my_strlen1(arr);
//	printf("%d\n", a1);
//
//	a1 = my_strlen2(arr);
//	printf("%d\n", a1);
//
//	a1 = my_strlen3(arr);
//	printf("%d\n", a1);
//
//	return 0;
//}

////模拟strcpy
//
//char* my_strcpy(char* dest, const char* src)
//{
//	int ret = dest;
//	while (*dest++ = *src++);
//	return ret;
//}
//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr1[30] = "xxxxxxxxxxxxxxxxxxxxxxxxxxx";
//	char arr2[30] = "xxxxxxxxxxxxxxxxxxxxxxxxxxx";
//	char* a = "appearancebook";
//	printf("%s\n", strcpy(arr1, a));
//	printf("%s\n", strcpy(arr1, a));
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("% d % d", a + b, c);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if (a * b * c * d * e == 1 * 2 * 3 * 4 * 5)
//							{
//								printf("a=%d b=%d c=%d d=%d e=%d", a, b, c, d, e);
//							}
//						}
//					}
//
//				}
//
//			}
//
//		}
//
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("%c", killer);
//			break;
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//#define N 11
//void main()
//{
//    int i, j, k, n = 0, a[N][N] = {0};
//    
//    while (n <= 0 || n >= 11)
//    {
//        printf("请输入要打印的行数：\n");
//        scanf("%d", &n);
//    }
//    printf("%d行杨辉三角如下：\n", n);
//    /*********Begin*********/
//
//    //初始化二维数组
//    for (i = 0; i < N - 1; i++)
//    {
//        for (j = 0; j <= i; j++)//每行
//        {
//            if (j == i || j == 0)
//            {
//                a[i][j] = 1;
//            }
//            if (i > 1 && j > 0)
//            {
//                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//            }
//        }
//    }
//    
//    //打印
//    for (i = 0; i < n; i++)
//    {
//        for (k = n-1-i; k > 0; k--)
//        {
//            printf("   ");
//        }
//
//
//        for (j = 0; j <= i; j++)
//        {
//           
//            printf("%6d", a[i][j]);
//            
//        }
//        printf("\n");
//    }
//
//
//	/*********End**********/
//
//
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[9][9] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	if (n > 0 || n < 9)
//	{
//		//赋值
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j <= i; j++)
//			{
//				if (j == 0 || j == i)
//					arr[i][j] = 1;
//				if (i >= 2 && j >= 1)
//					arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//		//打印
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = n-1-i; j >0; j--)
//			{
//				printf("  ");
//			}
//			int k = 0;
//			for (k = 0; k <= i; k++)
//			{
//				printf("%4d", arr[i][k]);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}