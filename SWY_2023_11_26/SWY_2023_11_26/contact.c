#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

//��ʼ��ͨѶ¼ 
void InItContact(Contact* con)
{
	assert(con);
	//��ʼ��
	memset(con->data, 0, sizeof(con->data));
	con->sz = 0;
}

//�����ϵ�˼�����Ϣ
void AddContact(Contact* con)
{
	assert(con);
	if (con->sz == MAX)
	{
		printf("ͨѶ¼�������޷����");
		return;
	}
	//������Ϣ
	printf("����������\n");
	scanf("%s", con->data[con->sz].name);

	printf("����������\n");
	scanf("%d", &con->data[con->sz].age);

	printf("�������Ա�\n");
	scanf("%s", con->data[con->sz].sex);

	printf("������绰\n");
	scanf("%s", con->data[con->sz].tele);

	printf("������סַ\n");
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
	//ɾ��
	char name[MAX_NAME] = {0};
	printf("������Ҫɾ������ϵ�˵�����:>");
	scanf("%s", name);
	
	//�ҵ�Ҫɾ������
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

	printf("�ɹ�ɾ����ϵ��");
}
