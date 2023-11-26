#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

//初始化通讯录 
void InItContact(Contact* con)
{
	assert(con);
	//初始化
	memset(con->data, 0, sizeof(con->data));
	con->sz = 0;
}

//添加联系人及其信息
void AddContact(Contact* con)
{
	assert(con);
	if (con->sz == MAX)
	{
		printf("通讯录已满，无法添加");
		return;
	}
	//输入信息
	printf("请输入名字\n");
	scanf("%s", con->data[con->sz].name);

	printf("请输入年龄\n");
	scanf("%d", &con->data[con->sz].age);

	printf("请输入性别\n");
	scanf("%s", con->data[con->sz].sex);

	printf("请输入电话\n");
	scanf("%s", con->data[con->sz].tele);

	printf("请输入住址\n");
	scanf("%s", con->data[con->sz].address);

	con->sz++;
	printf("成功添加联系人\n");
	
	
}

//显示所以联系人的信息	`
void ShowContact(const Contact* con)
{
	assert(con);
	int i = 0;
	//打印标题
	printf("%-9s\t%-9s\t%-9s\t%-9s\t%-9s\n", "名字", "年龄", "性别", "电话", "住址");
	//打印数据
	for (i=0;  i < con->sz; i++)
	{
		printf("%-9s\t%-9d\t%-9s\t%-9s\t%-9s\n",
			con->data[i].name,
			con->data[i].age,
			con->data[i].sex,
			con->data[i].tele,
			con->data[i].address);
	}
}

void DelContact(Contact* con)
{
	assert(con);
	//删除
	char name[MAX_NAME] = {0};
	printf("请输入要删除的联系人的名字:>");
	scanf("%s", name);
	
	//找到要删除的人
	int i = 0;
	int del = 0;
	int flag = 0;
	for (i = 0; i < con->sz; i++)
	{
		if (strcmp(con->data[i].name, name) == 0)
		{
			del = i;
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		printf("要删除的联系人不存在\n");
		return;
	}
	//删除指定联系人
	for (i = del; i < con->sz - 1; i++)
	{
		//*(con->data + i) = *(con->data + (i + 1));
		con->data[i] = con->data[i + 1];
	}
	con->sz--;

	printf("成功删除联系人");
}
