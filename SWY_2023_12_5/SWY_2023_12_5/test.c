#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int tmp = 0;
//	scanf("%d %d", &a, &b);
//	while (tmp = a % b)
//	{
//		a = b;
//		b = tmp;
//	}
//	printf("%d\n", b);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		int j = 0;
//		for(j=i;j>0;j/=10)
//		{
//			if ((j % 10 == 9))
//			{
//				count++;
//			}
//		}
//			
//	}
//
//	printf("%d", count);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d", i, j, i * j);			
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned)time(NULL));
//	int n = rand() % 100;
//	int a = 0;
//	printf("1��100��������Ϸ:>\n");
//	do
//	{
//		scanf("%d", &a);
//		if (a == n)
//		{
//			printf("��ϲ��¶��ˣ�������%d \n",n);
//			break;
//		}
//		else if (a > n)
//		{
//			printf("�´���\n");
//		}
//
//		else
//		{
//			printf("��С��\n");
//		}
//	} while (1);
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 0;
//	int left = 0;
//	int right = sizeof(arr)/sizeof(arr[0]);
//	printf("������Ҫ���ҵ���\n");
//	scanf("%d", &n);
//	while (left<=right)
//	{
//		if (arr[(left + right) / 2] == n)
//		{
//			printf("�ҵ��ˣ��±���%d\n", (left+right)/2);
//			break;
//		}
//		if (arr[(left + right) / 2] > n)
//		{
//			right = (left + right) / 2 - 1;
//		}
//		if (arr[(left + right) / 2] < n)
//		{
//			left = (left + right) / 2 + 1;
//		}
//
//	}
//
//	if (right < left)
//	{
//		printf("�Ҳ�����");
//	}
//
//	return 0;
//}