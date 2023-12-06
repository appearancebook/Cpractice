#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//void Mw_int(int n)
//{
//	if (n < 10)
//	{
//		printf("%d\n", n);
//		return 0;
//	}
//	if(n>10)
//	{
//		//ÄæÊä³ö
//		//printf("%d\n", n % 10);
//		Mw_int(n / 10);
//		//Ë³Êä³ö
//		printf("%d\n", n % 10);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Mw_int(n);
//	return 0;
//}

//#include <stdio.h>
//
////Ñ­»·
//int  N_jc1(int n)
//{
//	int i = 0;
//	int a = 1;
//	for (i = 1; i <= n; i++)
//	{
//		a = a * i;
//	}
//	return a;
//}
//
////µİ¹é
//int N_jc2(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * N_jc2(n - 1);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//int ret = N_jc1(n);
//	int ret = N_jc2(n);
//	printf("%d\n", ret);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//¼ÆÊıÆ÷
int my_strlen1(char* arr)
{
	int count = 0;
	while (*arr++)
	{
		count++;
	}
	return count;
}
//
////µİ¹é
//int my_strlen2(char* arr)
//{
//	if (*arr == '\0')
//		return 0;
//	else
//	{
//		return 1 + my_strlen2(arr + 1);
//	}
//}
//
//
//int main()
//{
//	char arr[] = "appearancebook";
//	int ret1 = strlen(arr);
//	int ret = my_strlen1(arr);
//	int ret2 = my_strlen2(arr);
//	printf("%d\n", ret1);
//	printf("%d\n", ret);
//	printf("%d\n", ret2);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//void reverse_string(char* string)
//{
//	if (*string=='\0')
//		return;
//	int right = my_strlen1(string) - 1;
//	char tmp = string[0];
//		string[0] = string[right];
//		string[right] = '\0';
//		if (my_strlen1(string + 1) >= 2)
//		reverse_string(string+1);
//		string[right] = tmp;
//	
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	char arr1[] = "abcdef";
//	reverse_string(arr);
//	reverse_string(arr1);
//	printf("%s\n", arr);
//	printf("%s\n", arr1);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    /*********Begin*********/
//    char a[72] = { 0 };
//    char b[72] = { 0 };
//    char c[72] = { 0 };
//    scanf("%s%s%s", a, b, c);
//   //printf("%s\n%s\n%s\n", a, b, c);
//    if (strcmp(a, b) > 0)
//    {
//        char tmp[72] = { 0 };
//        strcpy(tmp, a);
//        strcpy(a, b);
//        strcpy(b, tmp);
//    }
//    if (strcmp(a, c) > 0)
//    {
//        char tmp[72] = { 0 };
//        strcpy(tmp, a);
//        strcpy(a, c);
//        strcpy(c, tmp);
//
//    }
//    if (strcmp(b, c) > 0)
//    {
//        char tmp[72] = { 0 };
//        strcpy(tmp, b);
//        strcpy(b, c);
//        strcpy(c, tmp);
//
//    }
//
//    printf("%s\n", a);
//    printf("%s\n", b);
//    printf("%s\n", c);
//
//
//
//    /*********End**********/
//    return 0;
//}

//#include <stdio.h>
//
//int  DigitSum(int n)
//{
//	if (n < 10)
//		return n;
//	return n % 10 + DigitSum(n / 10);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d\n", ret);
//	return 0;
//}

//#include <stdio.h>
//
//int N_K(int n, int k)
//{
//	if (k == 1)
//		return n;
//	else
//	{
//		return n * N_K(n, k - 1);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	int ret = N_K(n, k);
//	printf("%d\n", ret);
//	return 0;
//}

//#include <stdio.h>
//
//int FB_sl(int n)
//{
//	if (n == 1 || n == 2)
//		return 1;
//	if (n > 2)
//		return FB_sl(n - 1) + FB_sl(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = FB_sl(n);
//	printf("%d\n", ret);
//	return 0;
//}

//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i <=sqrt(n); i++)
//	{
//		if (n % i==0)
//			return 1;
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i <= (int)sqrt(n); i++)
//	{
//		if (!(n % i))
//			return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	//int n = 0;
//	//scanf("%d", &n);
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int ret = is_prime(i);
//		if (ret == 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		
//
//	}
//
//	printf("\n%d\n", count);
//	//printf("%d", (int)sqrt(i));
//
//	
//	return 0;
//}

//#include <stdio.h>
//
//int is_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = is_year(n);
//	if (ret == 1)
//		printf("ÈòÄê");
//	return 0;
//}

//#include <stdio.h>
//
//void tmp(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d %d\n", a, b);
//	tmp(&a, &b);
//	printf("%d %d\n", a, b);
//	return 0;
//}

#include <stdio.h>

void NN(int n)
{
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%-2d*%-2d=%-4d", i, j, i * j);
		}
		printf("\n");
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	NN(n);
	return 0;
}