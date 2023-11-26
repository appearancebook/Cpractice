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

//ͨѶ¼����
typedef struct Peoinfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char address[MAX_ADDRESS];
}Peoinfo;

//ͨѶ¼
typedef struct Contact
{
	Peoinfo data[MAX];
	int sz;
}Contact;

//��������

//��ʼ��ͨѶ¼
void InItContact(Contact* con);

//�����ϵ�˼�����Ϣ
void AddContact(Contact* con);

//��ʾ������ϵ�˵���Ϣ
void ShowContact(const Contact* con);

//ɾ��ָ����ϵ��
void DelContact(Contact* con);