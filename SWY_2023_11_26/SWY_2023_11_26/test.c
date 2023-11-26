#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#pragma pack(4)/*编译选项，表示4字节对齐 平台：VS2013。语言：C语言*/
////假设long 是4个字节
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

//实现一个通讯录
//通讯录中保存人的信息：
//名字
//年龄
//性别
//电话
//住址


//1.通讯录可以存放100个人的信息
//2.增加联系人
//3.删除指定联系人
//4.修改指定联系人
//5.查找指定联系人的信息
//6.显示所有人的信息
//7.排序功能

//test.c -- 测试通讯录
//contact.h -- 函数和类型声明
//contact.c -- 函数实现

//设计保存人的信息的结构体：

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
	//通讯录
	Contact con;
	InItContact(&con);

	do
	{
		menu();
		printf("请选择:>");
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
			printf("输入错误，请重新选择");
			break;
		}

		
	} while (input);

}

int main()
{
	test();
	return 0;

}