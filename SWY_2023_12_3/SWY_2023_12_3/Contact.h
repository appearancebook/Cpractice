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

//��ӡ�˵�
void meum();

//��ʼ��
void INItContact(Contact* con);

//�����ϵ��
void AddContact(Contact* con);

//��ʾ������ϵ�˵���Ϣ
void ShowContact(const Contact* con);

//ɾ����ϵ��
void DelContact(Contact* con);

//ͨ�������ҵ���ϵ��
int FindByName(const Contact* con, const char* name);

//����ָ����ϵ����Ϣ
void SearChContact(const Contact* con);

//�޸���ϵ����Ϣ
void modifyContact(Contact* con);

//���ͨѶ¼
void ClearContact(Contact* con);

//�����ָ���ϵ�˽�������
void QsortContact(Contact* con);

//qsort ����Ҫ�ĺ���
int CmpContact_name(void* x, void* y);
