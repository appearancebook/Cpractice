#define _CRT_SECURE_NO_WARNINGS 1
//#include  <stdio.h>
//#include  <string.h>
//#define   MONTHS  12
//#define   MAX_LEN  20         	//�ַ�����󳤶�
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
//	char monthsChinese[][MAX_LEN] = { "Ԫ��Ԫ��","���´���","����ֲ��","��������","�����Ͷ�",
//								"���¶�ͯ","������Ϧ","��������","���¿�ѧ","ʮ�¹���",
//								"ʮһ�¹��","ʮ����ʥ��" };
//	printf("Please enter a string:\n");
//	scanf("%s", x);             	//��������ҵ��ַ���
//
//	/***************Begin**************/
//		//�˴�Ӧ�ú�������
//	pos1 = FindWord(monthsAbbr, 4, x);
//	pos2 = FindWord(monthsAbbr, 3, x);
//
//	/***************End***************/
//
//
//	if (pos1 >= 0)        		//�ҵ���־Ϊ�棬˵���ҵ�
//	{
//		printf("%s: %s\n", x, monthsChinese[pos1]);
//		//printf("%s: %s\n", x, *(monthsChinese+pos1));
//	}
//	else if (pos2 >= 0)
//	{
//		printf("%s: %s\n", x, monthsChinese[pos2]);
//		//printf("%s: %s\n", x, *(monthsChinese+pos2));
//	}
//	else                		//�ҵ���־Ϊ�٣�˵��δ�ҵ�
//	{
//		printf("Not found!\n");
//	}
//	return 0;
//}
//
////�ڵ��ʱ�����x�ַ��������ҵ���������λ�ã�λ�ô�0��ʼ��
////���Ҳ����򷵻�-1
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
//// ����extractNum��ѡ��strָ����ַ����е����֣���д��str
//// ������str-ָ���ַ���
//void extractNum(char* str)
//{
//	// ���ڴ���Ӵ��룬ʵ�ֺ���extractNum
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
	int s[ROW][COL];				//s����ԭ����
	int st[COL][ROW] = { 0 };				//st����ת�ú�ľ���
	//	printf("Please enter matrix:\n");
		/***********begin**********/
		//����ԭ����,*sָ�����s��0��0��,����ָ��
	InputMatrix(s[0], ROW, COL);

	/***********end**********/
	Transpose(s[0], st[0], ROW, COL);
	/***********begin**********/
	//�Ծ���s����ת��,��������st��
	
	/***********end**********/
//	printf("The transposed matrix is:\n");
	/***********begin**********/
	//���ת�þ���,*stָ��st��0��0��,����ָ��
	PrintMatrix(s[0], ROW, COL);
	PrintMatrix(st[0], COL, ROW);
	

	/***********end**********/

	return 0;
}
//�������ܣ� ������row��col�еľ���aת�ã�ת�ú�ľ���Ϊat
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
void InputMatrix(int* s, int row, int col)   //�������Ԫ��
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			scanf("%d", s + i * col + j);		//����s+i*col+j�ȼ���&s[i][j]
		}
	}
}
void PrintMatrix(int* s, int row, int col)  //�������Ԫ��
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d\t", *(s + i * col + j));//����*(s+i*col+j)�ȼ���s[i][j]
		}
		printf(" \n");
	}
}
