#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 20
#define ADDRESS 20
enum 
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODFY,
	SHOW,
	CLEAR,
	QSORT
};

typedef struct	Peoinfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int  age;
	char tele[MAX_TELE];
	char address[MAX_TELE];
}Peoinfo;

typedef struct Contact
{
	Peoinfo data[MAX];
	int sz;

}Contact;

//打印菜单
void meum();

//初始化
void INItContact(Contact* con);

//添加联系人
void AddContact(Contact* con);

//显示所有联系人的信息
void ShowContact(const Contact* con);

//删除联系人
void DelContact(Contact* con);

//通过名字找到联系人
int FindByName(const Contact* con, const char* name);

//查找指定联系人信息
void SearChContact(const Contact* con);

//修改联系人信息
void modifyContact(Contact* con);

//清空通讯录
void ClearContact(Contact* con);

//按名字给联系人进行排序
void QsortContact(Contact* con);

//qsort 所需要的函数
int CmpContact_name(void* x, void* y);
