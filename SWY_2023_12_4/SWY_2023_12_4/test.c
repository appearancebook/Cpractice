#define _CRT_SECURE_NO_WARNINGS 1


//ʵ��һ��ͨѶ¼��
//
//ͨѶ¼���������洢1000���˵���Ϣ��ÿ���˵���Ϣ�������������Ա����䡢�绰��סַ
//
//�ṩ������
//
//�����ϵ����Ϣ
//ɾ��ָ����ϵ����Ϣ
//����ָ����ϵ����Ϣ
//�޸�ָ����ϵ����Ϣ
//��ʾ������ϵ����Ϣ
//���������ϵ��
//����������������ϵ��


#include "Contact.h"


void Test()
{
	//��ӡ�˵�
	Contact con;
	INItContact(&con);

	int input = 0;

	do
	{
		meum();
		printf("��ѡ��:>");
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