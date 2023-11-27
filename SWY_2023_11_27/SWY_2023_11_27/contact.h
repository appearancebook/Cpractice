#define _CRT_SECURE_NO_WARNINGS 1


#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 9
#define MAX_TELE 18
#define MAX_ADDRESS 20
#define DEFAULT_SZ 3
#define INC_SZ 2

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

//通讯录内容
typedef struct Peoinfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char address[MAX_ADDRESS];
}Peoinfo;


//通讯录
//静态版本
//typedef struct Contact
//{
//	Peoinfo data[MAX];
//	int sz;
//}Contact;

//动态版本
typedef struct Contact
{
	Peoinfo* data;//指向了存放数据的空间
	int sz;//记录当前放的有效元素的个数
	int capacity;//通讯录当前的最大容量
}Contact;


//函数声明

//初始化通讯录
void InItContact(Contact* con);

//添加联系人及其信息
void AddContact(Contact* con);

//显示所有联系人的信息
void ShowContact(const Contact* con);

//删除指定联系人
void DelContact(Contact* con);

//查找指定联系人
void SearchContact(const Contact* con);

//修改指定联系人信息
void MondifyContact(Contact* con);

//释放空间并退出
void DestroyContact(Contact* con);

//保存通讯录信息到文件
void SaveContackt(Contact* con);
