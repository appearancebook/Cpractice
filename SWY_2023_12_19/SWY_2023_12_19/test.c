#define _CRT_SECURE_NO_WARNINGS 1
//#include  <stdio.h>
//#include  <string.h>
//#define   MONTHS  12
//#define   MAX_LEN  20         	//字符串最大长度
//
//int FindWord(char mws[12][MAX_LEN], int n, char x[]);
//int main(void)
//{
//	int    pos1, pos2;
//	char   x[MAX_LEN];
//	char   monthsWords[][MAX_LEN] = { "January","February","March","April",
//					"May","June","July","August",
//					"September","October","November","December" };
//	char   monthsAbbr[][MAX_LEN] = { "Jan.","Feb.","Mar.","Apr.",
//					"May.","Jun.","Jul.","Aug.",
//					"Sept.","Oct.","Nov.","Dec." };
//	char monthsChinese[][MAX_LEN] = { "元月元旦","二月春节","三月植树","四月清明","五月劳动",
//								"六月儿童","七月七夕","八月中秋","九月开学","十月国庆",
//								"十一月光棍","十二月圣诞" };
//	printf("Please enter a string:\n");
//	scanf("%s", x);             	//输入待查找的字符串
//
//	/***************Begin**************/
//		//此处应用函数调用
//	pos1 = FindWord(monthsAbbr, 4, x);
//	pos2 = FindWord(monthsAbbr, 3, x);
//
//	/***************End***************/
//
//
//	if (pos1 >= 0)        		//找到标志为真，说明找到
//	{
//		printf("%s: %s\n", x, monthsChinese[pos1]);
//		//printf("%s: %s\n", x, *(monthsChinese+pos1));
//	}
//	else if (pos2 >= 0)
//	{
//		printf("%s: %s\n", x, monthsChinese[pos2]);
//		//printf("%s: %s\n", x, *(monthsChinese+pos2));
//	}
//	else                		//找到标志为假，说明未找到
//	{
//		printf("Not found!\n");
//	}
//	return 0;
//}
//
////在单词表中找x字符串，若找到，返回其位置（位置从0开始）
////若找不到则返回-1
//int FindWord(char mws[][MAX_LEN], int n, char x[])
//{
//	/***************Begin**************/
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		if (strncmp(mws[i], x, n) == 0)
//		{
//			return i;
//		}
//	}
//	return -1;
//
//	/***************End***************/
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
////#include <stdio.h>
//
//#define MAX_LEN 80
//
//void extractNum(char* str);
//
//int main()
//{
//	char str[MAX_LEN] = {0};
//	gets(str);
//	extractNum(str);
//	puts(str);
//	return 0;
//}
//// 函数extractNum：选出str指向的字符串中的数字，并写回str
//// 参数：str-指向字符串
//void extractNum(char* str)
//{
//	// 请在此添加代码，实现函数extractNum
//	   /********** Begin *********/
//	int len = strlen(str);
//	int i = 0;
//	int flag = 0;
//	for (i = 0; i < len;i++)
//	{
//			
//		if (str[i] == '-')
//		{
//			int j = 0;
//			for (j = 0; j < i; j++)
//			{
//				if (str[j] >= '0' && str[j] <= '9')
//				{
//					flag = 1;
//					break;
//				}
//			}
//			if (flag == 0)
//			{
//				for (j = len; j >0; j--)
//				{
//					str[len] = str[len - 1];
//				}
//				str[0] = '-';
//			}
//			break;
//		}
//	}
//	i = 0;
//	int j = 0;
//	for (i = 0; i < len; i++)
//	{
//		if (str[i] == '-'&&i==0)
//		{
//			i++;
//			j++;
//		}
//		if (str[i] >= '0' && str[i] <= '9')
//		{
//			str[j] = str[i];
//			j++;
//		}
//	}
//	str[j] = '\0';
//	/********** End **********/
//}

#include <stdio.h>
#define ROW 3
#define COL 4
void Transpose(int* a, int* at, int row, int col);
void InputMatrix(int* s, int row, int col);
void PrintMatrix(int* s, int row, int col);
int main(void)
{
	int s[ROW][COL];				//s代表原矩阵
	int st[COL][ROW] = { 0 };				//st代表转置后的矩阵
	//	printf("Please enter matrix:\n");
		/***********begin**********/
		//输入原矩阵,*s指向矩阵s的0行0列,是列指针
	InputMatrix(s[0], ROW, COL);

	/***********end**********/
	Transpose(s[0], st[0], ROW, COL);
	/***********begin**********/
	//对矩阵s进行转置,结果存放于st中
	
	/***********end**********/
//	printf("The transposed matrix is:\n");
	/***********begin**********/
	//输出转置矩阵,*st指向st的0行0列,是列指针
	PrintMatrix(s[0], ROW, COL);
	PrintMatrix(st[0], COL, ROW);
	

	/***********end**********/

	return 0;
}
//函数功能： 对任意row行col列的矩阵a转置，转置后的矩阵为at
void Transpose(int* a, int* at, int row, int col)
{
	/***********begin**********/
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col;j++)
		{
			(at + 2)[i] = 1;
		}
	}



	/***********end**********/

}
void InputMatrix(int* s, int row, int col)   //输入矩阵元素
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			scanf("%d", s + i * col + j);		//这里s+i*col+j等价于&s[i][j]
		}
	}
}
void PrintMatrix(int* s, int row, int col)  //输入矩阵元素
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d\t", *(s + i * col + j));//这里*(s+i*col+j)等价于s[i][j]
		}
		printf(" \n");
	}
}
