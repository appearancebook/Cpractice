#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <assert.h>
//
//int main()
//{
//	char arr1[100] = { 0 };
//	char arr2[100] = { 0 };
//	int Lens = 0;
//	int len = 0;
//	while (scanf("%s", arr1) == 1)
//	{
//		if (arr1[0] == 's' && arr1[1] == 't' && arr1[2] == 'o' && arr1[3] == 'p')
//		{
//			break;
//		}
//		int len1 = strlen(arr1);
//		if (len1 > len)
//		{
//			memset(arr2, 0, 100);
//			len = len1;
//			strcpy(arr2, arr1);
//		}
//		Lens += len1;
//		if (getchar() == '\n')
//		{
//			printf("%d ", Lens);
//			printf("%s\n", arr2);
//			Lens = 0;
//			len = 0;
//			//memset(arr1, 0, 100);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	long long a = 0;
//	long long b = 0;
//	scanf("%lld%lld", &a, &b);
//	long long a1 = a;
//	long long b1 = b;
//	while (a % b)
//	{
//		long long tmp = a % b;
//		a = b;
//		b = tmp;
//	}
//	printf("%lld", a1 * b1 / b);
//
//	return 0;
//}

#include <stdio.h>
#include <assert.h>

int my_strcmp(const char* dest, const char* scr)
{
	assert(dest && scr);

	while (*dest == *scr)
	{
		if (!*dest)
			return 0;
		dest++;
		scr++;
	}
	return (*dest - *scr);
}

int main()
{
	char arr1[18] = "abcdd";
	char arr2[18] = "abcd";
	int a = strcmp(arr1, arr2);
	int b = my_strcmp(arr1, arr2);
	return 0;
}