#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <assert.h>
//
//void yang_search(int (*arr)[3], int n, int* px, int* py)
//{
//	assert(arr);
//	assert(px && py);
//	int x = 0;
//	int y = 2;
//
//	while (x <= 2 && y >= 0)
//	{
//		if (arr[x][y] > n)
//		{
//			y--;
//		}
//		else if (arr[x][y] < n)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return;
//		}
//	}
//	*px = -1;
//	*py = -1;
//}
//
//int main()
//{
//	int arr[][3] = { 1,2,3,4,5,6,7,8,9 };
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int x = 0;
//		int y = 0;
//		yang_search(arr, n, &x, &y);
//		if (x == -1 && y == -1)
//		{
//			printf("找不到\n");
//		}
//		else
//		{
//			printf("找到了 下标是%d %d\n", x, y);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//void left_xuan1(char* str, int n)
//{
//	assert(str);
//	int len = strlen(str);
//	int i = 0;
//	n %= len;
//	while (n-- > 0)
//	{
//		char tmp = *str;
//		for (i = 0; i < len - 1; i++)
//		{
//			//*(str + i) = *(str + i + 1);
//			str[i] = str[i + 1];
//		}
//		//*(str + len - 1) = tmp;
//		str[len - 1] = tmp;
//	}
//}
//
//void reverse(char* left, char* right)
//{
//	assert(left && right);
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
//void left_xuan2(char* str, int n)
//{
//	int len = strlen(str);
//	n %= len;
//	reverse(str, str + n - 1);
//	reverse(str + n, str + len - 1);
//	reverse(str, str + len - 1);
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	int n = 0;
//	scanf("%d", &n);
//
//	left_xuan1(arr1, n);
//	left_xuan2(arr2, n);
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//int is_left_xuan1(char* str1, char* str2)
//{
//	assert(str1);
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 - len2 != 0)
//		return 0;
//	int i = 0;
//	for (i = 0; i < len1; i++)
//	{
//		char tmp = *str1;
//		int j = 0;
//		for (j = 0; j < len1 - 1; j++)
//		{
//			*(str1 + j) = *(str1 + j + 1);
//		}
//		*(str1 + len1 - 1) = tmp;
//		if (strcmp(str1, str2) == 0)
//			return 1;
//	}
//	return 0;
//}
//
//int is_left_xuan2(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	strncat(str1, str1, len1);
//	if (strstr(str1, str2) == NULL)
//		return 0;
//	else
//		return 1;
//}
//
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[20] = "abcdef";
//	char* a = "cdefab";
//	int ret = is_left_xuan1(arr1, a);
//	int ret1 = is_left_xuan2(arr2, a);
//	if (ret == 1)
//		printf("是\n");
//	else
//		printf("不是\n");
//	if (ret1 == 1)
//		printf("是\n");
//	else
//		printf("不是\n");
//
//	
//	return 0;
//}

//#include <stdio.h>
//#include <assert.h>
//#include <stdlib.h>
//
//struct student
//{
//	char name[18];
//	int age;
//	double d;
//};
//
//int cmp_int(const void* p1, const void* p2)
//{
//	assert(p1 && p2);
//	return *(int*)p1 - *(int*)p2;
//}
//
//test1()
//{
//	int arr[] = { 18,54,45,213,72,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//}
//
//int cmp_student_age(const void* p1, const void* p2)
//{
//	assert(p1 && p2);
//	return ((struct student*)p1)->age - ((struct student*)p2)->age;
//}
//
//test2()
//{
//	struct student arr[] = { {"yzs",18,0.72f},{"tl",20,3.14f},{"lx",19,7.62f} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_student_age);
//}
//
//int cmp_student_name(const void* p1, const void* p2)
//{
//	assert(p1 && p2);
//	return strcmp(((struct student*)p1)->name, ((struct student*)p2)->name);
//}
//
//test3()
//{
//	struct student arr[] = { {"yzs",18,0.72f},{"tl",20,3.14f},{"lx",19,7.62f} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_student_name);
//}
//
//int cmp_student_d(const void* p1, const void* p2)
//{
//	assert(p1 && p2);
//
//	return ((struct student*)p1)->d - ((struct student*)p2)->d;
//}
//
//test4()
//{
//	struct student arr[] = { {"yzs",18,0.72f},{"tl",20,7.62},{"x",19,5.56f} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_student_d);
//}
//
//
//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	test4();
//	return 0;
//}

//用冒泡排序模拟实现qsort

//#include <stdio.h>
//#include <assert.h>
//#include <string.h>
//
//struct student
//{
//	char name[18];
//	int age;
//};
//
//int cmp_student_name(const void* p1, const void* p2)
//{
//	return strcmp(((struct student*)p1)->name, ((struct student*)p2)->name);
//}
//
//int cmp_student_age(const void* p1, const void* p2)
//{
//	return ((struct student*)p1)->age - ((struct student*)p2)->age;
//}
//
//int cmp_int(const void* p1, const void* p2)
//{
//	return *((int*)p1) - *((int*)p2);
//}
//
//void Swap(char* p1, char* p2,int sz)
//{
//	assert(p1 && p2);
//	int i = 0;
//	char tmp = 0;
//	for (i = 0; i < sz; i++)
//	{
//		tmp = *p1;
//		*p1 = *p2;
//		*p2 = tmp;
//		p1++;
//		p2++;
//	}
//}
//
//void bubble_qsort(void* str, int num, int sz, int(*cmp)(const void* p1, const void* p2))
//{
//	int i = 0;
//	for (i = 0; i < num-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			if (cmp((char*)str + j * sz, (char*)str + (j + 1) * sz) > 0)
//			{
//				Swap((char*)str + j * sz, (char*)str + (j + 1) * sz,sz);
//			}
//		}
//	}
//}
//
//test1()
//{
//	int arr[] = { 2,1,3,7,9,8,5,6,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_qsort(arr,sz,sizeof(arr[0]),cmp_int);
//}
//
//test2()
//{
//	struct student arr[] = { {"yzs",18},{"tl",20},{"lx",19} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_qsort(arr, sz, sizeof(arr[0]), cmp_student_age);
//}
//
//test3()
//{
//	struct student arr[] = { {"yzs",18},{"tl",20},{"lx",19} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_qsort(arr, sz, sizeof(arr[0]), cmp_student_name);
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	test3();
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) == 1)
//	{
//		if (a > 10)
//		{
//			printf("大于10\n");
//		}
//
//		else if (a == 10)
//		{
//			printf("等于10\n");
//		}
//		else
//		{
//			printf("小于10\n");
//		}
//
//		if (a < 20)
//		{
//			printf("小于20\n");
//		}
//
//		if (a < 20);
//		{
//			printf("小于20\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int input = 0;
//	while (scanf("%d", &input) == 1)
//	{
//		switch (input)
//		{
//		case 1:
//			printf("appearancebook\n");
//
//		case 2:
//			printf("appearancebook\n");
//			break;
//
//		case 3:
//			printf("appearancebook\n");
//
//		default:
//			printf("输入错误\n");
//		}
//		printf("结束\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	while (i<10)
//	{
//		printf("%d\n", i);
//		i++;//打印0到9
//	}
//	return 0;
//}

//#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 9; i++)
//	{
//		printf("%d\n", i);//打印1到9
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	do
//	{
//		printf("appearancebook\n");
//
//	} while (0);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; ; i++)
//	{
//		if (i == 72)
//			goto appearancebook;
//	}
//appearancebook:
//	printf("appearancebook\n");
//	return 0;
//}

//#include <stdio.h>
//
//int Add(int, int);//函数声明
//
//int main()
//{
//	int a = 9;
//	int b = 18;
//	int c = Add(a, b);//函数调用
//	printf("%d\n", c);
//	return 0;
//}
//
//int Add(int a, int b)
//{
//	return a + b;
//}//函数定义

//#include <stdio.h>
//
//int Add(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	int a = 9;
//	int b = 18;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//#include <stdio.h>
//
//void print(int x)
//{
//	printf("%d\n", x);
//}
//
//void Swap(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//	print(*a + *b);
//}
//
//int main()
//{
//	int a = 9;
//	int b = 18;
//	Swap(&a, &b);
//	printf("%d %d\n", a, b);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    printf("%d", printf("%d", printf("%d", 43)));
//    //结果是啥？
//    //注：printf函数的返回值是打印在屏幕上字符的个数
//    return 0;
//}

//#include <stdio.h>
//
//void print(int a)
//{
//	if (a > 9)
//	{
//		print(a / 10);
//	}
//	printf("%d ", a % 10);
//}
//
//
//int main()
//{
//	int a = 1234;
//	print(a);
//	return 0;
//}

//int main()
//{
//	//代码1
//	int arr1[10];
//	//代码2
//	int count = 10;
//	//int arr2[count];//数组时候可以正常创建？
//	                //变长数组就可以，vs不支持
//	//代码3
//	char arr3[10];
//	float arr4[1];
//	double arr5[20];
//
//	return 0;
//}

//int main()
//{
//	int arr1[10] = { 1,2,3 };
//	int arr2[] = { 1,2,3,4 };
//	int arr3[5] = { 1,2,3,4,5 };
//	char arr4[3] = { 'a',98, 'c' };
//	char arr5[] = { 'a','b','c' };
//	char arr6[] = "abcdef";
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[3] = { 'a','b','c' };
//	int a1 = strlen(arr1);
//	int a2 = strlen(arr2);
//	printf("%d\n", a1);//abc\0
//	printf("%d\n", a2);//abc??
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[9] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);//给数组赋值
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);//打印数组
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[9] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() 
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int i = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	int j = 0;
//	//	for (j = 0; j < 3; j++)
//	//	{
//	//		printf("&arr[%d][%d] = %p \n", i, j, &arr[i][j]);
//	//	}
//	//}
//	int (*pa)[3] = arr;
//	printf("%d",*(*(pa+1)+1));
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//    /*********Begin*********/
//    char arr[100] = { 0 };
//    gets(arr);
//    int len = strlen(arr);
//    char* left = arr;
//    char* right = arr + len - 1;
//    int i = 0;
//    while (left < right)
//    {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right++;
//    }
//    printf("%s\n", arr);
//    /*********End**********/
//    return 0;
//}

#include<stdio.h>
#include <string.h>
int main(void)
{
    /*********Begin*********/
    int n = 0;
    int arr1[100] = { 0 };
    scanf("%d", &n);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        char arr[100] = { 0 };
        scanf("%s", &arr);
        int len = strlen(arr);
        int count = 0;
        int j = 0;
        for (j = 0; j < len; j++)
        {
            if (arr[j] >= '0' && arr[j] <= '9')
                count++;
        }
        arr1[i] = count;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr1[i]);
    }
    /*********End**********/
    return 0;
}