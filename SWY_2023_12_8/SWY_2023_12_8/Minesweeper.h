#pragma once
 
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROWS (COL+2)
#define COLS (ROW+2)
#define ROW 9
#define COL 9
#define EASY_COUNT 1

enum
{
	EXIT,
	MINESWEEPER,
	MILLS
};

void menu();

void Initboard(char mine[ROWS][COLS], int rows, int cols, char a);

void Displarboard(char mine[ROWS][COLS], int row, int col);

void SetMine(char mine[ROWS][COLS], int row, int col);

void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);

int GetMineCount(char mine[ROWS][COLS], int x, int y);

void ZKShow(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y, int row, int col);

void Count(char show[ROWS][COLS], int row, int col, int* count);


