#define _CRT_SECURE_NO_WARNINGS 1


//实现一个通讯录；
//
//通讯录可以用来存储1000个人的信息，每个人的信息包括：姓名、性别、年龄、电话、住址
//
//提供方法：
//
//添加联系人信息
//删除指定联系人信息
//查找指定联系人信息
//修改指定联系人信息
//显示所有联系人信息
//清空所有联系人
//以名字排序所有联系人


#include "Contact.h"


void Test()
{
	//打印菜单
	Contact con;
	INItContact(&con);

	int input = 0;

	do
	{
		meum();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearChContact(&con);
			break;
		case MODFY:
			modifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case CLEAR:
			ClearContact(&con);
			SaveContackt(&con);
			break;
		case QSORT:
			QsortContact(&con);
			break;
		case EXIT:
			SaveContackt(&con);
			DestroyContact(&con);
			break;
		default:

			break;
		}

	} while (input);
}


int main()
{
	Test();
	return 0;
}