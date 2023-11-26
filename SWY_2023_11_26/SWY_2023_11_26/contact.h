#define _CRT_SECURE_NO_WARNINGS 1

#define ADD 1
#define DEL 2
#define SEARCH 3
#define MODIFY 4
#define SHOW 5
#define SORT 6
#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 9
#define MAX_TELE 18
#define MAX_ADDRESS 20

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
typedef struct Contact
{
	Peoinfo data[MAX];
	int sz;
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