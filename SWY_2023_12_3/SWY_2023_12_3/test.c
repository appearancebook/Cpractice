#define _CRT_SECURE_NO_WARNINGS 1

////模拟实现strstr
//
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	char* cp = str1;
//	char* s1 = str1;
//	char* s2 = str2;
//
//	if (*str2 == '\0')
//	{
//		return str1;
//	}
//
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//
//
//int main()
//{
//	char arr1[] = "appbookearancebook";
//	char arr2[] = "book";
//	char* a1 = strstr(arr1, arr2);//再arr1中找arr2
//	char* a2 = my_strstr(arr1, arr2);
//	printf("%s\n", a1);
//	printf("%s\n", a2);
//	return 0;
//}

////模拟实现strcat
//
//#include <string.h>
//#include <stdio.h>
//#include <assert.h>
//
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//
//	while (*dest++);
//	    dest--;
//
//	     while (*dest++ = *src++)
//		        ;
//
//	return ret;
//}
//
//
//int main()
//{
//	char arr1[20] = "appearance";
//	char arr2[10] = "book";
//	char* a1 = strcat(arr1, arr2);
//	char* a2 = my_strcat(arr1, arr2);
//	printf("%s\n", a1);
//	printf("%s\n", a2);
//	return 0;
//}

////模拟实现strcpm
//
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//
//int main()
//{
//	char* a1 = "appearancebook";
//	char* a2 = "appbook";
//	char  arr[] = "appbook";
//	printf("%d\n", my_strcmp(a1, a2));
//	printf("%d\n", my_strcmp(a2, a1));
//	printf("%d\n", my_strcmp(a2, arr));
//	return 0;
//}

////模拟实现 strcpy
//
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//
//	    while (*dest++ = *src++)
//		         ;
//
//	return ret;
//}
//
//int main()
//{
//	char arr1[30] = { 0 };
//	char arr2[30] = { 0 };
//	char* yzs = "appearancebook";
//	char* a1 = strcpy(arr1, yzs);
//	char* a2 = my_strcpy(arr2, yzs);
//	printf("%s\n", a1);
//	printf("%s\n", a2);
//	return 0;
//}

////模拟实现 strlen
//
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//size_t my_strlen(const char* str)
//{
//	const char* ret = str;
//	while (*str++)
//		;
//	return (size_t)(str - ret-1);
//}
//
//int main()
//{
//	char* yzs = "appearancebook";
//
//	printf("%lld\n", strlen(yzs));
//	printf("%lld\n", my_strlen(yzs));
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
////int main()
////{
////	char* pa = "appearancebook";
////	char arr1[] = "abc";
////	char arr2[] = { 'a','b','c' };
////	printf("%lld\n", strlen(pa));
////	printf("%lld\n", strlen(arr1));//由于arr1的初始化方式会再末尾补上 '\0' 所以结果为3
////	printf("%lld\n", strlen(arr2));//arr2初始化方式不会补上'\0'，所以结果为随即值
////	return 0;
////}
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "appearancebook";
//	char* a = strcpy(arr1, arr2);
//	printf("%s\n", a);
//	return 0;
//}

//#include <string.h>
//#include <stdio.h>
//
//int main()
//{
//	char arr[20] = "appearance";
//	char* a = "book";
//	char* a1 = strcat(arr, a);
//	printf("%s\n", a1);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char* a1 = "appearancebook";
//	char* a2 = "appbook";
//	char  arr[] = "appbook";
//	printf("%d\n", strcmp(a1, a2));
//	printf("%d\n", strcmp(a2, a1));
//	printf("%d\n", strcmp(a2, arr));
//	return 0;
//}

////模拟实现strncpm
//
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//int my_strncmp(const char* str1, const char* str2,int sz)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2 && --sz)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//
//int main()
//{
//	char* a1 = "appearancebook";
//	char* a2 = "appbook";
//	char  arr[] = "appbook";
//	printf("%d\n", strncmp(a1, a2,3));
//	printf("%d\n", my_strncmp(a1, a2, 3));
//	printf("%d\n", strncmp(a2, a1, sizeof(a2)));
//	printf("%d\n", my_strncmp(a2, a1, sizeof(a2)));
//	printf("%d\n", strncmp(a2, arr, sizeof(a2)));
//	printf("%d\n", my_strncmp(a2, arr, sizeof(a2)));
//	return 0;
//}

////memset 
//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[] = "hello appearancebook";
//	memset(arr, 'x', 4);
//	printf("%s", arr);
//
//	return 0;
//}

////memcmp 内存比较
//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int arr1[] = { 1,2,3,1,3,45 };
//	int arr2[] = { 1,2,3,257 };
//	printf("%d", memcmp(arr1, arr2, 13));
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	//都是预编译阶段处理的预定义符号
//	printf("%s\n", __FILE__);//文件名
//	printf("%d\n", __LINE__);//这个代码在第几行
//	printf("%s\n", __DATE__);//日期
//	printf("%s\n", __TIME__);//时间
//	//printf("%s\n", __STDC__);//VS不支持ANSIC
//
//
//
//	return 0;
//}

//#include <stdio.h>
//
//#define W 7
//#define Y "ABC"
//#define Z for(;;)
//
//int main()
//{
//	printf("%d\n", W);
//	printf("%s\n", Y);
//	//Z
//	//{
//	//	printf("hehe\n");
//	//}
//	return 0;
//}

#include <stdio.h>

////#define 定义宏  不能递归
//#define MAX(x,y)  ((x)>(y)?(x):(y))
//
//int main()
//{
//	int a = 2;
//	int b = -1;
//	int c = MAX(a, b);
//	printf("%d\n", c);
//	return 0;
//}

////#define  SQUARE(X) X*X
//#define  SQUARE(X) ((X)*(X)) //尽量写成这样   
//
//int main()
//{
//	int a = 3;
//	int r = SQUARE(a);
//	    r = SQUARE(a+2);
//	printf("r=%d\n", r);
//	return 0;
//}


////#undef  取消宏定义
//
//#define MAX(x,y) ((x)>(y)?(x):(y))
//
//int main()
//{
//	int c = MAX(3, 5);
//#undef MAX
//	int b = MAX(4, 5);//到这里MAX未定义了
//	return 0;
//}


////条件编译  可以嵌套使用
////一般用于不同编译器下编译的代码不同
//#define M 1
//int main()
//{
//#if M<3 //#if后的表达是为0，则在预处理完后直接删掉两者之间的代码
//	printf("yzs\n");//只有一个#endif的情况
//	printf("yzs\n");//如果 #if 和 #elif 都满足条件 只保留前者内容的代码
//	printf("yzs\n");
//#endif
//#if M==2
//	printf("ys\n");
//	printf("\n");
//	printf("ys\n");
//	printf("ys\n");
//
//#else
//	printf("\n");
//	printf("\n");
//	printf("yj\n");
//
//#endif
//	return 0;
//
//}


//#define WIN 1


//int main()
//{
////#if defined(WIN)
////#if !defined(WIN)
//#ifdef WIN
////#ifndef WIN
//	printf("windows");
//#endif
//	return 0;
//}


//#include "xxx.h"
//先在xxx.c文件的当前文件目录下找xxx.h，找不到再去库目录里面找，
//在找不到就报错
//#include <xxx.h>
//直接去不标准库目录去找
//找不到就报错

//#include <stdio.h>
//#include <stdlib.h>
//
////malloc   返回类型void 不会初始化
//int main()
//{
//	int arr[10];
//	int* p = (int*)malloc(40);
//	if(p==NULL)
//	{ 
//		perror("malloc");
//		return 1;
//	}
//	//开辟成功
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//  free(p);
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//
//calloc
//会初始化
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if(p==NULL)
//	{ 
//		perror("malloc");
//		return 1;
//	}
//	//开辟成功
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	free(p);
//  p = NULL;
//	return 0;
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//
////realloc
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	//初始化为1～10
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p[i] = i + 1;
//	}
//	//增加一下空间
//	int* ptr = (int*)realloc(p, 80);//不会初始化
//	if (ptr != NULL)
//	{
//		p = ptr;
//		ptr = NULL;
//	}
//	else
//	{
//		perror("realloc");
//		return 1;
//	}
//	//打印数据
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d\n", p[i]);
//	}
//	//释放
//	free(p);
//	p = NULL;
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//#include <ctype.h>
////3.1 对NULL指针的解引用操作
// 
//void test()
//{
//	int* p = (int*)malloc(INT_MAX / 4);
//	*p = 20;
//	
//}
//int main()
//{
//	test();
//	return 0;
//}
// 
// 
////3.2 对动态内存开辟空间的越界访问
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d\n", p[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
//
//
////3.3 对非动态开辟内存使用free释放
// 
//int main()
//{
//	int a = 0;
//	int* p = &a;
//	free(p);
//	p = NULL;
//	return 0;
//}
//
////3.4使用free释放一块动态内存的一部分
//
//int main()
//{
//	int* p = (int*)malloc(40);
//	//int* ptr = p; 修正
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p = i;
//		p++;
//	}
//	//p = ptr;修正
//	//释放
//	free(p);
//	p = NULL;
//	return 0;
//}
//
////3.5 对同一块空间的多次释放
//
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	//使用
//
//	//释放
//	free(p);
//	//p = NULL;修正
//	//多次释放
//	free(p);
//	return 0;
//}
//
////3.6 动态内存开辟忘记释放(内存泄漏)
//
//void test()
//{
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		perror("malloc");
//	}
//	else
//	{
//		*p = 20;
//	}
//	//free(p);修正
//	//p = NULL;
//}
//
//int main()
//{
//	test();
//
//	while (1);
//
//	return 0;
//
//}

////文件的打开和关闭
//
//int main()
//{
//	//打开文件
//	
//	//相对路径
//	//FILE* pf = fopen("..\\x64\\data.txt", "w");
//	
//	
//	//绝对路径C:\Users\sss\Desktop\data.txt
//	//FILE* pf = fopen("C:\\Users\\sss\\Desktop\\data.txt","w");
//	
//	//当前路径
//	FILE* pf = fopen("data.txt", "r");
//
//
//
//
//	if (pf == NULL)
//	{
//		perror("fopen->pf");
//		return 1;
//	}
//
//	//读文件
//	int ch = fgetc(stdin);
//	printf("%c", ch);
//	//顺序读写
//	//int i = 0;
//	//for (i = 0; i < 26; i++)
//	//{
//	//	fputc('a' + i, pf);//标准输入流stdin
//	//	                   //标准输出流stdout
//	//	                   //标准错误流stderr
//	//}                                           
//	
//	//随机读写
//	 
//	
//	//关闭文件
//	fclose(pf);
//	pf == NULL;
//
//	return 0;
//}



//实现一个通讯录；
//
//通讯录可以用来存储1000个人的信息，每个人的信息包括：姓名、性别、年龄、电话、住址
//
//提供方法：
//
//添加联系人信息
//删除指定联系人信息
//查找指定联系人信息
//修改指定联系人信息
//显示所有联系人信息
//清空所有联系人
//以名字排序所有联系人


#include "Contact.h"


void Test()
{
	//打印菜单
	meum();
	Contact con;
	INItContact(&con);

	int input = 0;
	
	do
	{
		meum();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearChContact(&con);
			break;
		case MODFY:
			modifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case CLEAR:
			ClearContact(&con);
			break;
		case QSORT:
			QsortContact(&con);
			break;
		case EXIT:
			break;
		default:

			break;
		}

	} while (input);
}


int main()
{
	Test();
	return 0;
}