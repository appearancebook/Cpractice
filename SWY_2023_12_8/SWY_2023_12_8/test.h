#pragma once

//全部的头文件 以及函数引用

#define ROW1 3
#define COL1 3

#include <stdio.h>
#include <string.h>
#include <time.h>

void Paixu_(int* arr, int a);
void Paixu_1(int* arr, int a);
void SZ_FZ(char arr[ROW1][COL1], int row, int col);
void PT_qipan(char arr[ROW1][COL1], int row, int col);
void Playermove(char arr[ROW1][COL1], int row, int col);
void Computmove(char arr[ROW1][COL1], int row, int col);
char PD_sy_jj(char arr[ROW1][COL1], int row, int col);
int IsFull(char arr[ROW1][COL1], int row, int col);