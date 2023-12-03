#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//int Max(int a, int b)
//{
//	int c = (a > b ? a : b);
//	return c;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int ret=Max(a, b);
//	printf("%d\n", ret);
//
//}
//
////int main()
////{
////
////	return 0;
////}


//#include <stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//}

//int main()
//{
//	3.14;
//	9;
//	return 0;
//}

//int main()
//{
//	const int a = 10;
//	a = 9;
//	return 0;
//}

//#include <stdio.h>
//
//#define ABC "abc"
//#define BCD 100
//#define CDE 3.14f
//int main()
//{
//	printf("%s\n", ABC);
//	printf("%d\n", BCD);
//	printf("%f\n", CDE);
//	return 0;
//}

//#include <stdio.h>
//
//enum Sex
//{
//	NAN,//男性
//	NV,//女性
//	MIMI//秘密
//};
//
//
//int main()
//{      
//	                     //枚举常量 默认是从0开始 向下递增1
//	printf("%d\n", NAN); //0
//	printf("%d\n", NV);  //1
//	printf("%d\n", MIMI);//2
//	
//	return 0;
//}

//#include <stdio.h>
//
//int a = 1;//全局变量
//
//
//int main()
//{
//	int a = 9;//局部变量
//	printf("%d", a);//当全局变量和局部变量的变量名一致时
//	                //赋值结果为局部变量赋值的结果
//	                //也就是打印结果为 9
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr1[] = "yzs";          //这种初始化末尾自动加 '\0'
//	char arr2[] = { 'y','z','s' };//这种末尾不加
//	printf("%d\n", (int)strlen(arr1));//结果为3
//	printf("%d\n", (int)strlen(arr2));//结果为随机值 也就是从该字符串开始一直找到  '\0'
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    printf("%d\n", strlen("abcdef"));//结果为6
//    // \62被解析成一个转义字符
//    printf("%d\n", strlen("c:\test\628\test.c"));//结果为14
//    return 0;
//}
//
//
//int main()
//{
//    //int a = 0;
//    /*int b = 0;*/
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 9;
//	if (i < 9)
//	{
//		printf("小于9");
//	}
//	else if (i > 9)
//	{
//		printf("大于9");
//	}
//	else
//	{
//		printf("等于9");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 9;
//	switch(i)
//	{
//		case 1:
//		case 2:
//		case 3:
//		default:
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int Add(int x, int y)//函数定义
//{
//
//	return x + y;
//}
//
//int main()
//{
//	int a = 213;
//	int b = 72;
//	int ret = Add(a, b);//函数调用
//	printf("%d\n", ret);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char arr1[] = "abcdef";
//	int arr2[] = {1,2,3,4,5,6,7};
//	printf("%c\n", arr1[1]);
//	printf("%d\n", arr2[1]);
//
//	return 0;
//}

//#include <stdio.h>
//
//
//typedef int it;
//
//int main()
//{
//	it a = 10;
//	it c = 9;
//
//	printf("%d\n", a);
//	printf("%d\n", c);
//
//	return 0;
//}
// 
// 

//#include <stdio.h>
//
////定义常量
//#define A 9
//
////定义宏
//#define B(x,y) ((x)+(y))
//
//int main()
//{
//	printf("%d\n", B(A, A));
//	return 0;
//}


//int main()
//{
//	int a = 9;
//	int* p = a;//p是一个指针 ，指向的是一个整型的地址
//	return 0;
//}

//#include <stdio.h>
//
//struct Student       //结构体类型的定义
//{
//	char name[20];//姓名
//	char sex[10];//性别
//	int  age;     //年龄
//	char  tele[18];//电话号码
//};
//
//
//
//int main()
//{
//	struct Student s = { "appearancebook","男",18,"112233445566" };
//	printf("%s\n", s.name);
//	printf("%s\n", s.sex);
//	printf("%d\n", s.age);
//	printf("%s\n", s.tele);
//
//	return 0;
//}

//1.
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//
//	//先产生1--100之间的数
//	for (i = 1; i <= 100; i++)
//	{
//		//找到3整除的数并打印
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//2.

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	//从3开始直接打印，加3再打印 直到超过100
//	for (i = 3; i <= 100; i += 3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		int j = 0;
//		int flag = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i += 4)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	//初始化
//	int arr[10] = { 0 };
//	int i = 0;
//	int pos = 0;
//
//	//赋值
//	for (i = 0; i < 10; i++)
//	{
// 		scanf("%d", &arr[i]);
//	}
//
//	//最大值下标
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[pos] < arr[i])
//		{
//			pos = i;
//		}
//	}
//	printf("%d", arr[pos]);
//}

//#include <stdio.h>
//
//int main()
//{
//	double s = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		s = s + 1.0 / i;
//	}
//	printf("%lf\n", s);
//	return 0;
//}

//
////
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//char* my_strncat(char* dest, const char* src, int sz)
//{
//	assert(dest && src);
//	int i = 1;
//	char* ret = dest;
//
//	//找到目标字符串的'\0'
//	while (*dest++)
//		;
//
//	//由于找到之后有++了一次，所以退回'\0'的位置
//	dest--;
//
//	 while (*dest++ = *src++)   //当*src为'\0 '时跳出循环
//		   if (!--sz)           //当sz=0时跳出循环   
//				break;
//	
//	
//	 *dest = '\0';	            //追加完后直接追加'\0' 最多追加一个完整的源字符串
//		return ret;
//}
//
//int main()
//{
//	char arr1[30] = "abcdef\0yyyyyyyy";
//	char arr3[30] = "abcdef\0yyyyyyyyy";
//	char arr2[30] = "xxxx";
//	//strncat(arr1, arr2, 7);
//	///my_strncat(arr3, arr2, 7);
//	//my_strncat(arr2, arr2,4);
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr3);
//	printf("%s\n", arr2);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//
//char* my_strncpy(char* dest, const char* src, int sz)
//{
//	assert(dest && src);
//	char* ret = dest;
//
//
//	while (*dest++ = *src++) //当*src为'\0 '时跳出循环
//		if (!--sz)           //当sz==0时跳出循环   
//			break;
//
//
//	                         //拷贝完后不加\0 拷贝数大于源字符串补'\0 '
//	return ret;
//}
//
//
//int main()
//{
//	char arr1[30] = "abcdefyyyyyyyyy";
//	char arr3[30] = "abcdefyyyyyyyyy";
//	char* arr2 = "xxxx";
//	strncpy(arr1, arr2, 7);
//	my_strncpy(arr3, arr2, 7);
//	//strncpy(arr2 + 2, arr2, 7);
//	printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	printf("%s\n", arr3);
//
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[30] = "appearancebook";
//	strncat(arr, arr + 1, 3);
//	printf("%s\n", arr);
//	return 0;
//}


////模拟memcpy
//
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//void* my_memcpy(void* dest, const void* src, int sz)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (sz--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src  = (char*)src  + 1;
//
//	}
//  return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
//	int arr2[20] = { 0 };
//	int arr3[20] = { 0 };
//	memcpy(arr2, arr1, 36);
//	my_memcpy(arr3, arr1,36);
//	return 0;
//}


////模拟实现memmove
//
//#include <assert.h>
//#include <string.h>
//
//void* my_memmove(void* dest, const void* src, int sz)
//{
//	void* ret = dest;
//	if (dest < src)
//	{
//		int i = 0;
//		while (i < sz)
//		{
//			*((char*)dest + i) = *((char*)src + i);
//			i++;
//		}
//
//	}
//
//	else
//	{
//		while (sz--)
//		{
//			*((char*)dest + sz) = *((char*)src + sz);
//		}
//	}
//
//	return ret;
//}
//
//
//int main()
//{
//
//	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
//	int arr2[] = { 1,2,3,4,5,6,7,8,9 };
//	int arr3[20] = { 0 };
//	memmove(arr1 , arr1+2, 20);
//	my_memmove(arr2 , arr2+2, 20);
//
//	return 0;
//}