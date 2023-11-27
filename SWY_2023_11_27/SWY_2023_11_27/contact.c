#define _CRT_SECURE_NO_WARNINGS 1


#include "contact.h"

////初始化通讯录 
////静态版本
//void InItContact(Contact* con)
//{
//	assert(con);
//	//初始化
//	
//	memset(con->data, 0, sizeof(con->data));
//	con->sz = 0;
//
//}

int CheckCapacity(Contact* con)
{
	assert(con);
	if (con->sz == con->capacity)
	{
		Peoinfo* ptr = (Peoinfo*)realloc(con->data, sizeof(Peoinfo) * (con->capacity + INC_SZ));
		if (ptr == NULL)
		{
			perror("CheckCapacity");
			return 1;
		}
		else
		{
			con->data = ptr;
			con->capacity += INC_SZ;
			printf("增容成功\n");
			return 0;
		}
		

	}
	return 0;
}

void LoadContact(Contact* con)
{
	assert(con);
	//打开文件
	FILE* pf = fopen("contact.dat", "rb");
	if (pf == NULL)
	{
		perror("LoadContact");
		return;
	}

	//读文件
	Peoinfo tmp = { 0 };
	while (fread(&tmp, sizeof(Peoinfo), 1, pf))
	{
		if (1 == CheckCapacity(con))
			return;
		con->data[con->sz] = tmp;
		con->sz++;
	}
	//printf("读取成功\n");

	//关闭文件
	fclose(pf);
	pf = NULL;
}

//动态版本
void InItContact(Contact* con)
{
	assert(con);
	
	con->data = (Peoinfo*)malloc(sizeof(Peoinfo) * DEFAULT_SZ);
	if (con->data == NULL)
	{
		perror("InItContact");
		return;
	}
	con->capacity = DEFAULT_SZ;
	con->sz = 0;

	//把文件中保存的信息加载到通讯录
	LoadContact(con);
}


//添加联系人及其信息
//静态版本
//void AddContact(Contact* con)
//{
//	assert(con);
//	if (con->sz == MAX)
//	{
//		printf("通讯录已满，无法添加");
//		return;
//	}
//	//输入信息
//printf("请输入名字:>");
//scanf("%s", con->data[con->sz].name);
//
//printf("请输入年龄:>");
//scanf("%d", &con->data[con->sz].age);
//
//printf("请输入性别:>");
//scanf("%s", con->data[con->sz].sex);
//
//printf("请输入电话:>");
//scanf("%s", con->data[con->sz].tele);
//
//printf("请输入住址:>");
//scanf("%s", con->data[con->sz].address);
//
//	con->sz++;
//	printf("成功添加联系人\n");
//
//
//}

//动态版本
void AddContact(Contact* con)
{
	assert(con);
	int ini = CheckCapacity(con);
	//if (con->sz == con->capacity)
	//{
	//	Peoinfo* ptr = (Peoinfo*)realloc(con->data, sizeof(Peoinfo) * (con->capacity + 2));
	//	return;
	//}
	//输入信息
	if (1 == ini)
	{
		return;
	}
	printf("请输入名字:>");
	scanf("%s", con->data[con->sz].name);

	printf("请输入年龄:>");
	scanf("%d", &con->data[con->sz].age);

	printf("请输入性别:>");
	scanf("%s", con->data[con->sz].sex);

	printf("请输入电话:>");
	scanf("%s", con->data[con->sz].tele);

	printf("请输入住址:>");
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
	for (i = 0; i < con->sz; i++)
	{
		printf("%-9s\t%-9d\t%-9s\t%-9s\t%-9s\n",
			con->data[i].name,
			con->data[i].age,
			con->data[i].sex,
			con->data[i].tele,
			con->data[i].address);
	}
}

int FindByName(const Contact* con, char name[])
{
	assert(con);
	//找到要删除的人
	int i = 0;
	
	for (i = 0; i < con->sz; i++)
	{

		if (strcmp(con->data[i].name, name) == 0)
		{
			return i;
		}

	}
	return -1;

}

void DelContact(Contact* con)
{
	assert(con);

	//判断是否还有联系人
	if (con->sz == 0)
	{
		printf("通讯录中无联系人，无法删除\n");
		return ;
	}
	////删除
	char name[MAX_NAME] = { 0 };
	printf("请输入要删除的联系人的名字:>");
	scanf("%s", name);
	int del = FindByName(con, name);
	//找到要删除的人
	int i = 0;
	//int del = 0;
	//int flag = 0;
	//for (i = 0; i < con->sz; i++)
	//{
	//	if (strcmp(con->data[i].name, name) == 0)
	//	{
	//		del = i;
	//		flag = 1;
	//		break;
	//	}
	//}

	if (del == -1)
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

	printf("成功删除联系人\n");
}

void SearchContact(const Contact* con)
{
	assert(con);
	char name[MAX_NAME] = { 0 }; 
	printf("请输入联系人名字:>");
	scanf("%s", name);
	int search = FindByName(con, name);
	if (search == -1)
	{
		printf("该姓名不存在\n");
		return;
	}
	printf("%-9s\t%-9s\t%-9s\t%-9s\t%-9s\n", "名字", "年龄", "性别", "电话", "住址");
	printf("%-9s\t%-9d\t%-9s\t%-9s\t%-9s\n",
		con->data[search].name,
		con->data[search].age,
		con->data[search].sex,
		con->data[search].tele,
		con->data[search].address);
	return;
}

void MondifyContact(Contact* con)
{
	assert(con);
	char name[MAX_NAME] = { 0 };
	printf("其输入联系人名字:>");
	scanf("%s", name);
	int modify = FindByName(con, name);
	if (modify == -1)
	{
		printf("该联系人不存在\n");
	}
	else
	{
		//输入信息
		printf("请输入名字\n");
		scanf("%s", con->data[modify].name);

		printf("请输入年龄\n");
		scanf("%d", &con->data[modify].age);

		printf("请输入性别\n");
		scanf("%s", con->data[modify].sex);

		printf("请输入电话\n");
		scanf("%s", con->data[modify].tele);

		printf("请输入住址\n");
		scanf("%s", con->data[modify].address);

		printf("修改信息成功\n");

	}
}

void DestroyContact(Contact* con)
{
	assert(con);
	free(con->data);
	con->data = NULL;
	con->capacity = 0;
	con->sz = 0;
}

void SaveContackt(Contact* con)
{
	assert(con);
	FILE* pf = fopen("contact.dat","wb");
	if (pf == NULL)
	{
		perror("SaveContackt");
		return;
	}
	//写数据
	int i = 0;
	for (i = 0; i < con->sz; i++)
	{
		fwrite(con->data + i, sizeof(Peoinfo), 1, pf);
	}
	printf("保存文件\n");

	//关闭文件
	fclose(pf);
	pf = NULL;
}

