#define _CRT_SECURE_NO_WARNINGS 1

#include "test.h"

//函数实现




void Paixu_(int* arr, int a)
{
	int i = 0;
	int j = 0;
	int c = 0;
	for (j = 0; j < a; j++)
	{
		for (i = j + 1; i < a; i++)
		{
			if (arr[j] > arr[i])
			{

				c = arr[j];
				arr[j] = arr[i];
				arr[i] = c;
			}
		}
	}
}

void Paixu_1(int* arr, int a)
{
	int i = 0;
	int j = 0;
	int c = 0;
	for (j = 0; j < a; j++)
	{
		for (i = j + 1; i < a; i++)
		{
			if (arr[j] < arr[i])
			{

				c = arr[j];
				arr[j] = arr[i];
				arr[i] = c;
			}
		}
	}
}

void SZ_FZ(char arr[ROW1][COL1], int row, int col)     //|
{                                                    //|
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			arr[i][j] = ' ';
		}
	}
}

void PT_qipan(char arr[ROW1][COL1], int row, int col)                   //   |   |   
{                                                                     //---|---|---
	int i = 0;                                                        //   |   |   
	int j = 0;                                                        //---|---|--- 
	for (i = 0; i < row; i++)                                               //   |   |   
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", arr[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");

			}
		}
		printf("\n");
	}
}

void Playermove(char arr[ROW1][COL1], int row, int col)
{
	int x, y;
	printf("玩家走\n");
	printf("请输入坐标:>");
	scanf("%d%d", &x, &y);
	if (arr[x][y] == '#' || arr[x][y] == '*')
	{
		printf("%输入坐标错误，请重新输入\n");
		PT_qipan(arr, ROW1, COL1);
		Playermove(arr, ROW1, COL1);
	}

	if (x < row && y < col && arr[x][y] == ' ')
		arr[x][y] = '*';
}
void Computmove(char arr[ROW1][COL1], int row, int col)
{
	int x, y;
	printf("电脑走\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (arr[x][y] == ' ')
		{
			arr[x][y] = '#';
			break;
		}
	}
}

int IsFull(char arr[ROW1][COL1], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (arr[i][j] == ' ')
			{
				return 0;
				break;
			}
		}
	}
	return 1;
}

char PD_sy_jj(char arr[ROW1][COL1], int row, int col)
{
	//对角线
	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] != ' ')
	{
		return arr[0][0];
	}
	if (arr[2][0] == arr[1][1] && arr[1][1] == arr[0][2] && arr[2][0] != ' ')
	{
		return arr[2][0];
	}
	//横三行
	else if (arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2] && arr[0][0] != ' ')
	{
		return arr[0][0];
	}
	else if (arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2] && arr[1][0] != ' ')
	{
		return arr[1][0];
	}
	else if (arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2] && arr[2][0] != ' ')
	{
		return arr[2][0];
	}
	//竖三列
	else if (arr[0][0] == arr[1][0] && arr[1][0] == arr[2][0] && arr[0][0] != ' ')
	{
		return arr[0][0];
	}
	else if (arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1] && arr[0][1] != ' ')
	{
		return arr[0][1];
	}
	else if (arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2] && arr[0][2] != ' ')
	{
		return arr[0][2];
	}
	if (1 == IsFull(arr, ROW1, COL1))
	{
		return 'c';
	}
	return 'v';
}
