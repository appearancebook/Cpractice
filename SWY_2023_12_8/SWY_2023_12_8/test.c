#define _CRT_SECURE_NO_WARNINGS 1

//#include "Minesweeper.h"
//#include "test.h"
//
//
//Minesweeper()
//{
//	char mine[ROWS][COLS];
//	char show[ROWS][COLS] = {'0'};
//	//��ʼ������
//	//1.mine������ŵ�ȫ�� '0 '
//	//2.show������ŵ�ȫ�� '* '
//	Initboard(mine, ROWS, COLS, '0');
//	Initboard(show, ROWS, COLS, '*');
//	//��ӡ����
//	//Displarboard(mine,ROW,COL);
//	//Displarboard(show, ROW, COL);
//	//1.������
//	SetMine(mine, ROW, COL);
//	Displarboard(show, ROW, COL);
//	//2.�Ų���
//	FindMine(mine, show, ROW, COL);
//}
//
//Mills()
//{
//	char arr[ROW1][COL1] = { 0 };
//	char a = 0;
//
//	//�����鸳ֵ
//	SZ_FZ(arr, ROW1, COL1);
//	//��ӡ����
//	PT_qipan(arr, ROW1, COL1);
//	//printf("%c", arr[2][2]);
//	while (1)
//	{
//		//�������
//		Playermove(arr, ROW1, COL1);
//		//�ж���Ӯ ��������
//		PT_qipan(arr, ROW1, COL1);
//		a = PD_sy_jj(arr, ROW1, COL1);
//		if (a != 'v')
//		{
//			break;
//		}
//		////��������
//		Computmove(arr, ROW1, COL1);
//		PT_qipan(arr, ROW1, COL1);
//		a = PD_sy_jj(arr, ROW1, COL1);
//		if (a != 'v')
//		{
//			break;
//		}
//	}
//	if (a == '*')
//	{
//		printf("��һ�ʤ\n");
//	}
//	if (a == '#')
//	{
//		printf("���Ի�ʤ");
//	}
//	if (a == 'c')
//	{
//		printf("ƽ��\n");
//	}
//	return 0;
//}
//
//
//int main()
//{
//	
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//			printf("��ѡ��:>");
//			scanf("%d", &input);
//			switch (input)
//			{
//			case MINESWEEPER:
//				Minesweeper();
//				break;
//			case MILLS:
//				Mills();
//				break;
//			case EXIT:
//				printf("�˳��ɹ�");
//				break;
//			default:
//				printf("�������������ѡ��\n");
//				break;
//			}
//	} while (input);
//
//	return 0;
//}

////����������ʱ������������������������
//
//#include <stdio.h>
//
//int main()
//{
//	int a = 72;
//	int b = 213;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//	return 0;
//}

//дһ���������ز����������� 1 �ĸ�����
//
//���磺 15    0000 1111    4 �� 1
//

//#include <stdio.h>
//
//int number_2(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//  return count;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = number_2(n);
//	printf("%d\n", ret);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 30; i >= 0; i-=2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	for (i = 31 ; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	return 0;
//}

#include <stdio.h>

int number_2(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}


int main()
{
	int n = 0;
	int m = 0;
	scanf("%d%d", &n,&m);
	int ret = number_2(n ^ m);
	printf("%d\n", ret);
	return 0;
}