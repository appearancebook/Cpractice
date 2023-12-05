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

////��̬�汾
//void INItContact(Contact* con)
//{
//	assert(con);
//	memset(con->data, 0, sizeof(Peoinfo) * MAX);
//	con->sz = 0;
//}

//��̬�汾
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

////��̬�汾
//void AddContact(Contact* con)
//{
//	assert(con);
//	//�ж��Ƿ�����
//	if (con->sz == MAX)
//		return;
//	printf("����������\n");
//	scanf("%s", (con->data[con->sz].name));
//	printf("�������Ա�\n");
//	scanf("%s", (con->data[con->sz].sex));
//	printf("����������\n");
//	scanf("%d", &(con->data[con->sz].age));
//	printf("������绰\n");
//	scanf("%s", (con->data[con->sz].tele));
//	printf("������סַ\n");
//	scanf("%s", (con->data[con->sz].address));
//	(con->sz)++;
//	printf("�����ϵ�˳ɹ�\n");
//}

//��̬�汾
void AddContact(Contact* con)
{
	assert(con);
	int add = CheckCapacity(con);
	if (-1 == add )
	{
		return;
	}
	printf("����������\n");
	scanf("%s", (con->data[con->sz].name));
	printf("�������Ա�\n");
	scanf("%s", (con->data[con->sz].sex));
	printf("����������\n");
	scanf("%d", &(con->data[con->sz].age));
	printf("������绰\n");
	scanf("%s", (con->data[con->sz].tele));
	printf("������סַ\n");
	scanf("%s", (con->data[con->sz].address));
	con->sz++;
	printf("�����ϵ�˳ɹ�\n");

}

void ShowContact(const Contact* con)
{
	assert(con);
	int i = 0;
	printf("������ϵ��Ϣ������:>\n");
	printf("%-27s%-27s%-27s%-27s%-27s\n", "����", "�Ա�", "����", "�绰", "סַ");
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
		printf("ͨѶ¼�ѿ��޷�ɾ��\n");
		return;
	}
	char name[MAX_NAME] = { 0 };
	printf("����������Ҫɾ������ϵ�˵�����;>");
	scanf("%s", name);
	//ͨ����ϵ�������ҵ���ϵ��
	int del = FindByName(con, name);
	if (del == -1)
	{
		printf("Ҫɾ������ϵ�˲�����\n");
		return;
	}
	int i = 0;
	for (i = del; i < con->sz - 1; i++)
	{
		con->data[i] = con->data[i + 1];
	}
	con->sz--;
	printf("��ɾ����ϵ��%s\n", name);

}


void SearChContact(const Contact* con)
{
	assert(con);
	char name[MAX_NAME] = { 0 };
	printf("����������Ҫ�ҵ���ϵ�˵�����:>");
	scanf("%s", name);
	int search = FindByName(con, name);
	if (search == -1)
	{
		printf("Ҫ���ҵ���ϵ�˲�����\n");
		return;
	}
	printf("����ϵ����Ϣ����:>\n");
	printf("%-27s%-27s%-27s%-27s%-27s\n", "����", "�Ա�", "����", "�绰", "סַ");
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
	printf("����������Ҫ�޸ĵ���ϵ�˵�����;>");
	scanf("%s", name);
	int mod = FindByName(con, name);
	if (mod == -1)
	{
		printf("Ҫ�޸ĵ���ϵ�˲�����\n");
		return;
	}
	//�޸�
	printf("�������µ�����\n");
	scanf("%s", (con->data[mod].name));
	printf("�������µ��Ա�\n");
	scanf("%s", (con->data[mod].sex));
	printf("�������µ�����\n");
	scanf("%d", &(con->data[mod].age));
	printf("�������µĵ绰\n");
	scanf("%s", (con->data[mod].tele));
	printf("�������µ�סַ\n");
	scanf("%s", (con->data[mod].address));
	printf("�޸���ϵ����Ϣ�ɹ�\n");

}

void ClearContact(Contact* con)
{
	assert(con);
	memset(con->data, 0, sizeof(Peoinfo) * con->sz);
	con->sz = 0;
	printf("�ɹ����ͨѶ¼\n");
}


void QsortContact(Contact* con)
{
	assert(con);
	qsort(con->data, con->sz, sizeof(Peoinfo), CmpContact_name);//�⺯��д��
	printf("����ɹ�\n");
}

int CmpContact_name(const void* x, const void* y)
{
	assert(x && y);
	return (int)strcmp(((Peoinfo*)x)->name, ((Peoinfo*)y)->name);
}

int CheckCapacity(Contact* con)
{
	assert(con);
	//����
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
			printf("���ݳɹ�\n");
			return 0;
		}
	}

	return 0;
}

void LoadContact(Contact* con)
{
	assert(con);

	//���ļ�
	FILE* pf = fopen("Contact.dat", "rb");
	if (pf == NULL)
	{
		perror("LoadContact");
		return;
	}

	//���ļ�
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
	

	printf("��ȡ�ɹ�\n");
	
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
}

void SaveContackt(Contact* con)
{
	assert(con);

	//���ļ�
	FILE* pf = fopen("Contact.dat", "wb");
	if (pf == NULL)
	{
		perror("SaveContackt");
		return;
	}

	//д����
	int i = 0;
	for (i = 0; i < con->sz; i++)
	{
		fwrite(con->data + i, sizeof(Peoinfo), 1, pf);
	}
	printf("�����ļ�\n");

	//�ر��ļ�
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
