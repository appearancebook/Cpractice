#define _CRT_SECURE_NO_WARNINGS 1


#include "contact.h"

////��ʼ��ͨѶ¼ 
////��̬�汾
//void InItContact(Contact* con)
//{
//	assert(con);
//	//��ʼ��
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
	FILE* pf = fopen("contact.dat", "rb");
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
			return;
		con->data[con->sz] = tmp;
		con->sz++;
	}
	//printf("��ȡ�ɹ�\n");

	//�ر��ļ�
	fclose(pf);
	pf = NULL;
}

//��̬�汾
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

	//���ļ��б������Ϣ���ص�ͨѶ¼
	LoadContact(con);
}


//�����ϵ�˼�����Ϣ
//��̬�汾
//void AddContact(Contact* con)
//{
//	assert(con);
//	if (con->sz == MAX)
//	{
//		printf("ͨѶ¼�������޷����");
//		return;
//	}
//	//������Ϣ
//printf("����������:>");
//scanf("%s", con->data[con->sz].name);
//
//printf("����������:>");
//scanf("%d", &con->data[con->sz].age);
//
//printf("�������Ա�:>");
//scanf("%s", con->data[con->sz].sex);
//
//printf("������绰:>");
//scanf("%s", con->data[con->sz].tele);
//
//printf("������סַ:>");
//scanf("%s", con->data[con->sz].address);
//
//	con->sz++;
//	printf("�ɹ������ϵ��\n");
//
//
//}

//��̬�汾
void AddContact(Contact* con)
{
	assert(con);
	int ini = CheckCapacity(con);
	//if (con->sz == con->capacity)
	//{
	//	Peoinfo* ptr = (Peoinfo*)realloc(con->data, sizeof(Peoinfo) * (con->capacity + 2));
	//	return;
	//}
	//������Ϣ
	if (1 == ini)
	{
		return;
	}
	printf("����������:>");
	scanf("%s", con->data[con->sz].name);

	printf("����������:>");
	scanf("%d", &con->data[con->sz].age);

	printf("�������Ա�:>");
	scanf("%s", con->data[con->sz].sex);

	printf("������绰:>");
	scanf("%s", con->data[con->sz].tele);

	printf("������סַ:>");
	scanf("%s", con->data[con->sz].address);

	con->sz++;
	printf("�ɹ������ϵ��\n");


}


//��ʾ������ϵ�˵���Ϣ	`
void ShowContact(const Contact* con)
{
	assert(con);
	int i = 0;
	//��ӡ����
	printf("%-9s\t%-9s\t%-9s\t%-9s\t%-9s\n", "����", "����", "�Ա�", "�绰", "סַ");
	//��ӡ����
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
	//�ҵ�Ҫɾ������
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

	//�ж��Ƿ�����ϵ��
	if (con->sz == 0)
	{
		printf("ͨѶ¼������ϵ�ˣ��޷�ɾ��\n");
		return ;
	}
	////ɾ��
	char name[MAX_NAME] = { 0 };
	printf("������Ҫɾ������ϵ�˵�����:>");
	scanf("%s", name);
	int del = FindByName(con, name);
	//�ҵ�Ҫɾ������
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
		printf("Ҫɾ������ϵ�˲�����\n");
		return;
	}
	
	//ɾ��ָ����ϵ��
	for (i = del; i < con->sz - 1; i++)
	{
		//*(con->data + i) = *(con->data + (i + 1));
		con->data[i] = con->data[i + 1];
	}
	con->sz--;

	printf("�ɹ�ɾ����ϵ��\n");
}

void SearchContact(const Contact* con)
{
	assert(con);
	char name[MAX_NAME] = { 0 }; 
	printf("��������ϵ������:>");
	scanf("%s", name);
	int search = FindByName(con, name);
	if (search == -1)
	{
		printf("������������\n");
		return;
	}
	printf("%-9s\t%-9s\t%-9s\t%-9s\t%-9s\n", "����", "����", "�Ա�", "�绰", "סַ");
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
	printf("��������ϵ������:>");
	scanf("%s", name);
	int modify = FindByName(con, name);
	if (modify == -1)
	{
		printf("����ϵ�˲�����\n");
	}
	else
	{
		//������Ϣ
		printf("����������\n");
		scanf("%s", con->data[modify].name);

		printf("����������\n");
		scanf("%d", &con->data[modify].age);

		printf("�������Ա�\n");
		scanf("%s", con->data[modify].sex);

		printf("������绰\n");
		scanf("%s", con->data[modify].tele);

		printf("������סַ\n");
		scanf("%s", con->data[modify].address);

		printf("�޸���Ϣ�ɹ�\n");

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

