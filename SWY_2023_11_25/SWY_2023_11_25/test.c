#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//int main()
//{
//	char arr1[] = "hello appearancebook";
//	char arr2[] = "hello appearancebook";
//	char* p1 = "hello appearancebook";
//	char* p2 = "hello appearancebook";
//	if (arr1 == arr2)
//		printf("1\n");
//	else
//		printf("2\n");
//	if (p1 == p2)
//		printf("3\n");
//	else
//		printf("4\n");
//	return 0;
//}

//���Ͼ���
//��һ�����־��󣬾���ÿ�д������Ҷ��ǵ����ģ��������¶��ǵ�����
//���дһ�������������ľ����в���ĳ������

//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	//O(N)
//	int k = 0;
//	scanf("%d", &k);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			if (arr[i][j] == k)
//			{
//				printf("�ҵ��ˣ��±��ǣ�%d %d\n", i, j);
//				return 0;
//			}
//		}
//	}
//	printf("�Ҳ���\n");
//	return 0;
//}

//void yang_(int(*arr)[3], int* px, int* py, int k)
//{
//	
//	int s1 = 0;
//	int s2 = *py-1;
//	while (s1 <=*px-1 && s2 >= 0)
//	{
//		if (arr[s1][s2] > k)
//		{
//			s2--;
//		}
//		else if (arr[s1][s2] < k)
//		{
//			s1++;
//		}
//		else
//		{
//			*px = s1;
//			*py = s2;
//			return;
//		}
//	}
//	*px = -1;
//	*py = -1;
//}
//
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 0;
//	int x = 3;
//	int y = 3;
//	scanf("%d", &k);
//	yang_(arr, &x, &y,k);
//	if (x == -1 && y == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ����±���: %d %d\n", x, y);
//	}
//	return 0;
//
//}