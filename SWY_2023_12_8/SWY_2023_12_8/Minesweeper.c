#define _CRT_SECURE_NO_WARNINGS 1

#include "Minesweeper.h"

void menu()
{
	printf("*********************************************************************\n");
	printf("******    1.扫雷        2.三子棋         0.exit     *****************\n");
	printf("*********************************************************************\n");
}


void Initboard(char mine[ROWS][COLS], int rows, int cols, char a)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			mine[i][j] = a;
		}
	}
}

void Displarboard(char mine[ROWS][COLS],int row,int col)
{
	int i = 0;
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 0; i <= row; i++)
	{
		printf("- ");
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		int j = 0;
		printf("%d", i);
		printf("|");
		for (j = 1; j <= col; j++)
		{
			printf("%c ",mine[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	} 
}

int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return ((mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1]) - 8 * '0');
}

void ZKShow(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y,int row,int col)
{
	if (show[x][y] == ' '||(x<0&&x>row)||(y<0&&y>col))
		return;
	if (x > 0 && x <= row && y > 0 && y <= col)
	{
		show[x][y] = GetMineCount(mine, x, y) + '0';
		if (show[x][y] == '0' && x > 0 && x <= row && y > 0 && y <= col)
		{
			show[x][y] = ' ';
			ZKShow(mine, show, x - 1, y - 1, row, col);
			ZKShow(mine, show, x - 1, y, row, col);
			ZKShow(mine, show, x - 1, y + 1, row, col);
			ZKShow(mine, show, x, y - 1, row, col);
			ZKShow(mine, show, x, y + 1, row, col);
			ZKShow(mine, show, x + 1, y - 1, row, col);
			ZKShow(mine, show, x + 1, y, row, col);
			ZKShow(mine, show, x + 1, y + 1, row, col);
		}
	}
}

void Count(char show[ROWS][COLS], int row, int col, int* count)
{
	*count = 0;
	int i = 0;
	for (i = 1; i <= row; i++)
	{
		int j = 0;
		for (j = 1; j <= col; j++)
		{
			if (show[i][j] == '*')
			{
				(*count)++;
			}
		}
	}
}

void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS], int col, int row)
{
	int x = 0;
	int y = 0;
	int count = 0;
	while(1)
	{
		printf("请根据棋盘，输入要排查的坐标:>");
		scanf("%d%d", &x, &y);
		if (x > 0 && x <= row && y > 0 && y <= col)
		{
			if (mine[x][y] == '0')
			{
				//show[x][y] = GetMineCount(mine, x, y) + '0';
				ZKShow(mine, show, x, y,ROW,COL);
				Displarboard(show, ROW, COL);
				Count(show, ROW, COL, &count);
				if (count == EASY_COUNT)
					break;
				
			}
			if (mine[x][y] == '1')
			{
				printf("你被炸死了\n");
				return;
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}

	}

		printf("扫雷成功\n");
		printf("展示雷图:\n");
		Displarboard(mine,ROW,COL);

	

}
