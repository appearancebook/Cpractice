#define _CRT_SECURE_NO_WARNINGS 1

////ģ��ʵ��strstr
//
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	char* cp = str1;
//	char* s1 = str1;
//	char* s2 = str2;
//
//	if (*str2 == '\0')
//	{
//		return str1;
//	}
//
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//
//
//int main()
//{
//	char arr1[] = "appbookearancebook";
//	char arr2[] = "book";
//	char* a1 = strstr(arr1, arr2);//��arr1����arr2
//	char* a2 = my_strstr(arr1, arr2);
//	printf("%s\n", a1);
//	printf("%s\n", a2);
//	return 0;
//}

////ģ��ʵ��strcat
//
//#include <string.h>
//#include <stdio.h>
//#include <assert.h>
//
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//
//	while (*dest++);
//	    dest--;
//
//	     while (*dest++ = *src++)
//		        ;
//
//	return ret;
//}
//
//
//int main()
//{
//	char arr1[20] = "appearance";
//	char arr2[10] = "book";
//	char* a1 = strcat(arr1, arr2);
//	char* a2 = my_strcat(arr1, arr2);
//	printf("%s\n", a1);
//	printf("%s\n", a2);
//	return 0;
//}

////ģ��ʵ��strcpm
//
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//
//int main()
//{
//	char* a1 = "appearancebook";
//	char* a2 = "appbook";
//	char  arr[] = "appbook";
//	printf("%d\n", my_strcmp(a1, a2));
//	printf("%d\n", my_strcmp(a2, a1));
//	printf("%d\n", my_strcmp(a2, arr));
//	return 0;
//}

////ģ��ʵ�� strcpy
//
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//
//	    while (*dest++ = *src++)
//		         ;
//
//	return ret;
//}
//
//int main()
//{
//	char arr1[30] = { 0 };
//	char arr2[30] = { 0 };
//	char* yzs = "appearancebook";
//	char* a1 = strcpy(arr1, yzs);
//	char* a2 = my_strcpy(arr2, yzs);
//	printf("%s\n", a1);
//	printf("%s\n", a2);
//	return 0;
//}

////ģ��ʵ�� strlen
//
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//size_t my_strlen(const char* str)
//{
//	const char* ret = str;
//	while (*str++)
//		;
//	return (size_t)(str - ret-1);
//}
//
//int main()
//{
//	char* yzs = "appearancebook";
//
//	printf("%lld\n", strlen(yzs));
//	printf("%lld\n", my_strlen(yzs));
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
////int main()
////{
////	char* pa = "appearancebook";
////	char arr1[] = "abc";
////	char arr2[] = { 'a','b','c' };
////	printf("%lld\n", strlen(pa));
////	printf("%lld\n", strlen(arr1));//����arr1�ĳ�ʼ����ʽ����ĩβ���� '\0' ���Խ��Ϊ3
////	printf("%lld\n", strlen(arr2));//arr2��ʼ����ʽ���Ჹ��'\0'�����Խ��Ϊ�漴ֵ
////	return 0;
////}
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "appearancebook";
//	char* a = strcpy(arr1, arr2);
//	printf("%s\n", a);
//	return 0;
//}

//#include <string.h>
//#include <stdio.h>
//
//int main()
//{
//	char arr[20] = "appearance";
//	char* a = "book";
//	char* a1 = strcat(arr, a);
//	printf("%s\n", a1);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char* a1 = "appearancebook";
//	char* a2 = "appbook";
//	char  arr[] = "appbook";
//	printf("%d\n", strcmp(a1, a2));
//	printf("%d\n", strcmp(a2, a1));
//	printf("%d\n", strcmp(a2, arr));
//	return 0;
//}

////ģ��ʵ��strncpm
//
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//int my_strncmp(const char* str1, const char* str2,int sz)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2 && --sz)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//
//int main()
//{
//	char* a1 = "appearancebook";
//	char* a2 = "appbook";
//	char  arr[] = "appbook";
//	printf("%d\n", strncmp(a1, a2,3));
//	printf("%d\n", my_strncmp(a1, a2, 3));
//	printf("%d\n", strncmp(a2, a1, sizeof(a2)));
//	printf("%d\n", my_strncmp(a2, a1, sizeof(a2)));
//	printf("%d\n", strncmp(a2, arr, sizeof(a2)));
//	printf("%d\n", my_strncmp(a2, arr, sizeof(a2)));
//	return 0;
//}

////memset 
//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[] = "hello appearancebook";
//	memset(arr, 'x', 4);
//	printf("%s", arr);
//
//	return 0;
//}

////memcmp �ڴ�Ƚ�
//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int arr1[] = { 1,2,3,1,3,45 };
//	int arr2[] = { 1,2,3,257 };
//	printf("%d", memcmp(arr1, arr2, 13));
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	//����Ԥ����׶δ����Ԥ�������
//	printf("%s\n", __FILE__);//�ļ���
//	printf("%d\n", __LINE__);//��������ڵڼ���
//	printf("%s\n", __DATE__);//����
//	printf("%s\n", __TIME__);//ʱ��
//	//printf("%s\n", __STDC__);//VS��֧��ANSIC
//
//
//
//	return 0;
//}

//#include <stdio.h>
//
//#define W 7
//#define Y "ABC"
//#define Z for(;;)
//
//int main()
//{
//	printf("%d\n", W);
//	printf("%s\n", Y);
//	//Z
//	//{
//	//	printf("hehe\n");
//	//}
//	return 0;
//}

#include <stdio.h>

////#define �����  ���ܵݹ�
//#define MAX(x,y)  ((x)>(y)?(x):(y))
//
//int main()
//{
//	int a = 2;
//	int b = -1;
//	int c = MAX(a, b);
//	printf("%d\n", c);
//	return 0;
//}

////#define  SQUARE(X) X*X
//#define  SQUARE(X) ((X)*(X)) //����д������   
//
//int main()
//{
//	int a = 3;
//	int r = SQUARE(a);
//	    r = SQUARE(a+2);
//	printf("r=%d\n", r);
//	return 0;
//}


////#undef  ȡ���궨��
//
//#define MAX(x,y) ((x)>(y)?(x):(y))
//
//int main()
//{
//	int c = MAX(3, 5);
//#undef MAX
//	int b = MAX(4, 5);//������MAXδ������
//	return 0;
//}


////��������  ����Ƕ��ʹ��
////һ�����ڲ�ͬ�������±���Ĵ��벻ͬ
//#define M 1
//int main()
//{
//#if M<3 //#if��ı����Ϊ0������Ԥ�������ֱ��ɾ������֮��Ĵ���
//	printf("yzs\n");//ֻ��һ��#endif�����
//	printf("yzs\n");//��� #if �� #elif ���������� ֻ����ǰ�����ݵĴ���
//	printf("yzs\n");
//#endif
//#if M==2
//	printf("ys\n");
//	printf("\n");
//	printf("ys\n");
//	printf("ys\n");
//
//#else
//	printf("\n");
//	printf("\n");
//	printf("yj\n");
//
//#endif
//	return 0;
//
//}


//#define WIN 1


//int main()
//{
////#if defined(WIN)
////#if !defined(WIN)
//#ifdef WIN
////#ifndef WIN
//	printf("windows");
//#endif
//	return 0;
//}


//#include "xxx.h"
//����xxx.c�ļ��ĵ�ǰ�ļ�Ŀ¼����xxx.h���Ҳ�����ȥ��Ŀ¼�����ң�
//���Ҳ����ͱ���
//#include <xxx.h>
//ֱ��ȥ����׼��Ŀ¼ȥ��
//�Ҳ����ͱ���

//#include <stdio.h>
//#include <stdlib.h>
//
////malloc   ��������void �����ʼ��
//int main()
//{
//	int arr[10];
//	int* p = (int*)malloc(40);
//	if(p==NULL)
//	{ 
//		perror("malloc");
//		return 1;
//	}
//	//���ٳɹ�
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//  free(p);
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//
//calloc
//���ʼ��
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if(p==NULL)
//	{ 
//		perror("malloc");
//		return 1;
//	}
//	//���ٳɹ�
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	free(p);
//  p = NULL;
//	return 0;
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//
////realloc
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	//��ʼ��Ϊ1��10
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p[i] = i + 1;
//	}
//	//����һ�¿ռ�
//	int* ptr = (int*)realloc(p, 80);//�����ʼ��
//	if (ptr != NULL)
//	{
//		p = ptr;
//		ptr = NULL;
//	}
//	else
//	{
//		perror("realloc");
//		return 1;
//	}
//	//��ӡ����
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d\n", p[i]);
//	}
//	//�ͷ�
//	free(p);
//	p = NULL;
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//#include <ctype.h>
////3.1 ��NULLָ��Ľ����ò���
// 
//void test()
//{
//	int* p = (int*)malloc(INT_MAX / 4);
//	*p = 20;
//	
//}
//int main()
//{
//	test();
//	return 0;
//}
// 
// 
////3.2 �Զ�̬�ڴ濪�ٿռ��Խ�����
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d\n", p[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
//
//
////3.3 �ԷǶ�̬�����ڴ�ʹ��free�ͷ�
// 
//int main()
//{
//	int a = 0;
//	int* p = &a;
//	free(p);
//	p = NULL;
//	return 0;
//}
//
////3.4ʹ��free�ͷ�һ�鶯̬�ڴ��һ����
//
//int main()
//{
//	int* p = (int*)malloc(40);
//	//int* ptr = p; ����
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p = i;
//		p++;
//	}
//	//p = ptr;����
//	//�ͷ�
//	free(p);
//	p = NULL;
//	return 0;
//}
//
////3.5 ��ͬһ��ռ�Ķ���ͷ�
//
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	//ʹ��
//
//	//�ͷ�
//	free(p);
//	//p = NULL;����
//	//����ͷ�
//	free(p);
//	return 0;
//}
//
////3.6 ��̬�ڴ濪�������ͷ�(�ڴ�й©)
//
//void test()
//{
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		perror("malloc");
//	}
//	else
//	{
//		*p = 20;
//	}
//	//free(p);����
//	//p = NULL;
//}
//
//int main()
//{
//	test();
//
//	while (1);
//
//	return 0;
//
//}

////�ļ��Ĵ򿪺͹ر�
//
//int main()
//{
//	//���ļ�
//	
//	//���·��
//	//FILE* pf = fopen("..\\x64\\data.txt", "w");
//	
//	
//	//����·��C:\Users\sss\Desktop\data.txt
//	//FILE* pf = fopen("C:\\Users\\sss\\Desktop\\data.txt","w");
//	
//	//��ǰ·��
//	FILE* pf = fopen("data.txt", "r");
//
//
//
//
//	if (pf == NULL)
//	{
//		perror("fopen->pf");
//		return 1;
//	}
//
//	//���ļ�
//	int ch = fgetc(stdin);
//	printf("%c", ch);
//	//˳���д
//	//int i = 0;
//	//for (i = 0; i < 26; i++)
//	//{
//	//	fputc('a' + i, pf);//��׼������stdin
//	//	                   //��׼�����stdout
//	//	                   //��׼������stderr
//	//}                                           
//	
//	//�����д
//	 
//	
//	//�ر��ļ�
//	fclose(pf);
//	pf == NULL;
//
//	return 0;
//}



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
	meum();
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
			break;
		case QSORT:
			QsortContact(&con);
			break;
		case EXIT:
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