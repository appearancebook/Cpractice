#define _CRT_SECURE_NO_WARNINGS 1

#include "Contact.h"

int CheckCapacity(Contact* con);

void LoadContact(Contact* con);

int CmpContact_name(const void* x, const void* y);


void meum()
{
	printf("******************************************************************************\n");
	printf("***********    1.add                             2.del     *******************\n");
	printf("***********    3.search                          4.modfy   *******************\n");
	printf("***********    5.show                            6.clear   *******************\n");
	printf("***********    0.exit                            7.qsort   *******************\n");
	printf("******************************************************************************\n");
}

////静态版本
//void INItContact(Contact* con)
//{
//	assert(con);
//	memset(con->data, 0, sizeof(Peoinfo) * MAX);
//	con->sz = 0;
//}

//动态版本
void INItContact(Contact* con)
{
	assert(con);
	con->data = malloc(sizeof(Peoinfo) * DEFAULT_SZ);
	if (con->data == NULL)
	{
		perror("INTtContact");
		return;
	}
	con->sz = 0;
	con->capacity = DEFAULT_SZ;

	LoadContact(con);
}

////静态版本
//void AddContact(Contact* con)
//{
//	assert(con);
//	//判断是否满人
//	if (con->sz == MAX)
//		return;
//	printf("请输入姓名\n");
//	scanf("%s", (con->data[con->sz].name));
//	printf("请输入性别\n");
//	scanf("%s", (con->data[con->sz].sex));
//	printf("请输入年龄\n");
//	scanf("%d", &(con->data[con->sz].age));
//	printf("请输入电话\n");
//	scanf("%s", (con->data[con->sz].tele));
//	printf("请输入住址\n");
//	scanf("%s", (con->data[con->sz].address));
//	(con->sz)++;
//	printf("添加联系人成功\n");
//}

//动态版本
void AddContact(Contact* con)
{
	assert(con);
	int add = CheckCapacity(con);
	if (-1 == add )
	{
		return;
	}
	printf("请输入姓名\n");
	scanf("%s", (con->data[con->sz].name));
	printf("请输入性别\n");
	scanf("%s", (con->data[con->sz].sex));
	printf("请输入年龄\n");
	scanf("%d", &(con->data[con->sz].age));
	printf("请输入电话\n");
	scanf("%s", (con->data[con->sz].tele));
	printf("请输入住址\n");
	scanf("%s", (con->data[con->sz].address));
	con->sz++;
	printf("添加联系人成功\n");

}

void ShowContact(const Contact* con)
{
	assert(con);
	int i = 0;
	printf("所有联系信息如下人:>\n");
	printf("%-27s%-27s%-27s%-27s%-27s\n", "姓名", "性别", "年龄", "电话", "住址");
	for (i = 0; i < con->sz; i++)
	{
		printf("%-27s%-27s%-27d%-27s%-27s\n", (con->data[i].name),
			(con->data[i].sex),
			con->data[i].age,
			(con->data[i].tele),
			(con->data[i].address));

	}
}

int FindByName(const Contact* con, const char* name)
{
	assert(con && name);
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
	if (con->sz == 0)
	{
		printf("通讯录已空无法删除\n");
		return;
	}
	char name[MAX_NAME] = { 0 };
	printf("请输入所需要删除的联系人的姓名;>");
	scanf("%s", name);
	//通过联系人名字找到联系人
	int del = FindByName(con, name);
	if (del == -1)
	{
		printf("要删除的联系人不存在\n");
		return;
	}
	int i = 0;
	for (i = del; i < con->sz - 1; i++)
	{
		con->data[i] = con->data[i + 1];
	}
	con->sz--;
	printf("已删除联系人%s\n", name);

}


void SearChContact(const Contact* con)
{
	assert(con);
	char name[MAX_NAME] = { 0 };
	printf("请输入所需要找的联系人的姓名:>");
	scanf("%s", name);
	int search = FindByName(con, name);
	if (search == -1)
	{
		printf("要查找的联系人不存在\n");
		return;
	}
	printf("该联系人信息如下:>\n");
	printf("%-27s%-27s%-27s%-27s%-27s\n", "姓名", "性别", "年龄", "电话", "住址");
	printf("%-27s%-27s%-27d%-27s%-27s\n", (con->data[search].name),
		(con->data[search].sex),
		con->data[search].age,
		(con->data[search].tele),
		(con->data[search].address));
}


void modifyContact(Contact* con)
{
	assert(con);
	char name[MAX_NAME] = { 0 };
	printf("请输入所需要修改的联系人的姓名;>");
	scanf("%s", name);
	int mod = FindByName(con, name);
	if (mod == -1)
	{
		printf("要修改的联系人不存在\n");
		return;
	}
	//修改
	printf("请输入新的姓名\n");
	scanf("%s", (con->data[mod].name));
	printf("请输入新的性别\n");
	scanf("%s", (con->data[mod].sex));
	printf("请输入新的年龄\n");
	scanf("%d", &(con->data[mod].age));
	printf("请输入新的电话\n");
	scanf("%s", (con->data[mod].tele));
	printf("请输入新的住址\n");
	scanf("%s", (con->data[mod].address));
	printf("修改联系人信息成功\n");

}

void ClearContact(Contact* con)
{
	assert(con);
	memset(con->data, 0, sizeof(Peoinfo) * con->sz);
	con->sz = 0;
	printf("成功清空通讯录\n");
}


void QsortContact(Contact* con)
{
	assert(con);
	qsort(con->data, con->sz, sizeof(Peoinfo), CmpContact_name);//库函数写法
	printf("排序成功\n");
}

int CmpContact_name(const void* x, const void* y)
{
	assert(x && y);
	return (int)strcmp(((Peoinfo*)x)->name, ((Peoinfo*)y)->name);
}

int CheckCapacity(Contact* con)
{
	assert(con);
	//扩容
	if (con->sz == con->capacity)
	{
		Peoinfo* ptr = (Peoinfo*)realloc(con->data, sizeof(Peoinfo) * (con->capacity + INC_SZ));
		if (ptr == NULL)
		{
			perror("CheckCapacity");
			return -1;
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
	FILE* pf = fopen("Contact.dat", "rb");
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
		{
			return;
		}
		con->data[con->sz] = tmp;
		con->sz++;
	}
	

	printf("读取成功\n");
	
	//关闭文件
	fclose(pf);
	pf = NULL;
}

void SaveContackt(Contact* con)
{
	assert(con);

	//打开文件
	FILE* pf = fopen("Contact.dat", "wb");
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

void DestroyContact(Contact* con)
{
	assert(con);
	free(con->data);
	con->capacity = 0;
	con->sz = 0;
}
