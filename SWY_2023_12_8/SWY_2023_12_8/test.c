#define _CRT_SECURE_NO_WARNINGS 1

//#include "Minesweeper.h"
//#include "test.h"
//
//
//Minesweeper()
//{
//	char mine[ROWS][COLS];
//	char show[ROWS][COLS] = {'0'};
//	//初始化棋盘
//	//1.mine数组里放的全是 '0 '
//	//2.show数组里放的全是 '* '
//	Initboard(mine, ROWS, COLS, '0');
//	Initboard(show, ROWS, COLS, '*');
//	//打印棋盘
//	//Displarboard(mine,ROW,COL);
//	//Displarboard(show, ROW, COL);
//	//1.布置雷
//	SetMine(mine, ROW, COL);
//	Displarboard(show, ROW, COL);
//	//2.排查雷
//	FindMine(mine, show, ROW, COL);
//}
//
//Mills()
//{
//	char arr[ROW1][COL1] = { 0 };
//	char a = 0;
//
//	//给数组赋值
//	SZ_FZ(arr, ROW1, COL1);
//	//打印棋盘
//	PT_qipan(arr, ROW1, COL1);
//	//printf("%c", arr[2][2]);
//	while (1)
//	{
//		//玩家下棋
//		Playermove(arr, ROW1, COL1);
//		//判断输赢 继续结束
//		PT_qipan(arr, ROW1, COL1);
//		a = PD_sy_jj(arr, ROW1, COL1);
//		if (a != 'v')
//		{
//			break;
//		}
//		////电脑下棋
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
//		printf("玩家获胜\n");
//	}
//	if (a == '#')
//	{
//		printf("电脑获胜");
//	}
//	if (a == 'c')
//	{
//		printf("平局\n");
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
//			printf("请选择:>");
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
//				printf("退出成功");
//				break;
//			default:
//				printf("输入错误，请重新选择\n");
//				break;
//			}
//	} while (input);
//
//	return 0;
//}

////不允许创建临时变量，交换两个整数的内容
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

//写一个函数返回参数二进制中 1 的个数。
//
//比如： 15    0000 1111    4 个 1
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