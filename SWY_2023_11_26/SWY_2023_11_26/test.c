#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#pragma pack(4)/*����ѡ���ʾ4�ֽڶ��� ƽ̨��VS2013�����ԣ�C����*/
////����long ��4���ֽ�
//int main(int argc, char* argv[])
//{
//    struct tagTest1
//    {
//        short a;
//        char d;
//        long b;
//        long c;
//    };
//    struct tagTest2
//    {
//        long b;
//        short c;
//        char d;
//        long a;
//    };
//    struct tagTest3
//    {
//        short c;
//        long b;
//        char d;
//        long a;
//    };
//    struct tagTest1 stT1;
//    struct tagTest2 stT2;
//    struct tagTest3 stT3;
//
//    printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
//    return 0;                //12        //12           //16
//}
//#pragma pack()

//#include <stdio.h>
//union Un
//{
//    short s[7];
//    int n;
//};
//int main()
//{
//    printf("%d\n", sizeof(union Un));
//    return 0;
//}

//typedef struct {
//	int a;//4 8 4   |0 1 2 3
//	char b;//1 8 1  |4 
//	short c;//2 8 2 |6 7
//	short d;//2 8 2 |8 9
//}AA_t;
//
//int main()
//{
//	printf("%d\n", sizeof(AA_t));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//    union
//    {
//        short k;
//        char i[2];
//    }*s, a;
//    s = &a;
//    s->i[0] = 0x39;
//    s->i[1] = 0x38;
//    printf("%x\n", a.k);
//    return 0;
//}

//#include <stdio.h>
//
//enum ENUM_A
//{
//	X1,
//	Y1,
//	Z1 = 255,
//	A1,
//	B1,
//};
//int main()
//{
//	enum ENUM_A enumA = Y1;
//	enum ENUM_A enumB = B1;
//	printf("%d %d\n", enumA, enumB);
//	return 0;
//}

//ʵ��һ��ͨѶ¼
//ͨѶ¼�б����˵���Ϣ��
//����
//����
//�Ա�
//�绰
//סַ


//1.ͨѶ¼���Դ��100���˵���Ϣ
//2.������ϵ��
//3.ɾ��ָ����ϵ��
//4.�޸�ָ����ϵ��
//5.����ָ����ϵ�˵���Ϣ
//6.��ʾ�����˵���Ϣ
//7.������

//test.c -- ����ͨѶ¼
//contact.h -- ��������������
//contact.c -- ����ʵ��

//��Ʊ����˵���Ϣ�Ľṹ�壺

#include "contact.h"

void menu()
{
	printf("****************************************\n");
	printf("***********1.add     2.del     *********\n");
	printf("***********3.search  4.modify  *********\n");
	printf("***********5.show    6.sort    *********\n");
	printf("***********0.exit              *********\n");
	printf("****************************************\n");
}

void test()
{
	int input = 0;
	//ͨѶ¼
	Contact con;
	InItContact(&con);

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch(input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			break;
		case MODIFY:
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			break;
		case 0:
			break;
		default:
			printf("�������������ѡ��");
			break;
		}

		
	} while (input);

}

int main()
{
	test();
	return 0;

}