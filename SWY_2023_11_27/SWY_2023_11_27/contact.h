#define _CRT_SECURE_NO_WARNINGS 1


#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 9
#define MAX_TELE 18
#define MAX_ADDRESS 20
#define DEFAULT_SZ 3
#define INC_SZ 2

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
//��̬�汾
//typedef struct Contact
//{
//	Peoinfo data[MAX];
//	int sz;
//}Contact;

//��̬�汾
typedef struct Contact
{
	Peoinfo* data;//ָ���˴�����ݵĿռ�
	int sz;//��¼��ǰ�ŵ���ЧԪ�صĸ���
	int capacity;//ͨѶ¼��ǰ���������
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

//����ָ����ϵ��
void SearchContact(const Contact* con);

//�޸�ָ����ϵ����Ϣ
void MondifyContact(Contact* con);

//�ͷſռ䲢�˳�
void DestroyContact(Contact* con);

//����ͨѶ¼��Ϣ���ļ�
void SaveContackt(Contact* con);
