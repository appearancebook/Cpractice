#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//int Max(int a, int b)
//{
//	int c = (a > b ? a : b);
//	return c;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int ret=Max(a, b);
//	printf("%d\n", ret);
//
//}
//
////int main()
////{
////
////	return 0;
////}


//#include <stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//}

//int main()
//{
//	3.14;
//	9;
//	return 0;
//}

//int main()
//{
//	const int a = 10;
//	a = 9;
//	return 0;
//}

//#include <stdio.h>
//
//#define ABC "abc"
//#define BCD 100
//#define CDE 3.14f
//int main()
//{
//	printf("%s\n", ABC);
//	printf("%d\n", BCD);
//	printf("%f\n", CDE);
//	return 0;
//}

//#include <stdio.h>
//
//enum Sex
//{
//	NAN,//����
//	NV,//Ů��
//	MIMI//����
//};
//
//
//int main()
//{      
//	                     //ö�ٳ��� Ĭ���Ǵ�0��ʼ ���µ���1
//	printf("%d\n", NAN); //0
//	printf("%d\n", NV);  //1
//	printf("%d\n", MIMI);//2
//	
//	return 0;
//}

//#include <stdio.h>
//
//int a = 1;//ȫ�ֱ���
//
//
//int main()
//{
//	int a = 9;//�ֲ�����
//	printf("%d", a);//��ȫ�ֱ����;ֲ������ı�����һ��ʱ
//	                //��ֵ���Ϊ�ֲ�������ֵ�Ľ��
//	                //Ҳ���Ǵ�ӡ���Ϊ 9
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr1[] = "yzs";          //���ֳ�ʼ��ĩβ�Զ��� '\0'
//	char arr2[] = { 'y','z','s' };//����ĩβ����
//	printf("%d\n", (int)strlen(arr1));//���Ϊ3
//	printf("%d\n", (int)strlen(arr2));//���Ϊ���ֵ Ҳ���ǴӸ��ַ�����ʼһֱ�ҵ�  '\0'
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    printf("%d\n", strlen("abcdef"));//���Ϊ6
//    // \62��������һ��ת���ַ�
//    printf("%d\n", strlen("c:\test\628\test.c"));//���Ϊ14
//    return 0;
//}
//
//
//int main()
//{
//    //int a = 0;
//    /*int b = 0;*/
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 9;
//	if (i < 9)
//	{
//		printf("С��9");
//	}
//	else if (i > 9)
//	{
//		printf("����9");
//	}
//	else
//	{
//		printf("����9");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 9;
//	switch(i)
//	{
//		case 1:
//		case 2:
//		case 3:
//		default:
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int Add(int x, int y)//��������
//{
//
//	return x + y;
//}
//
//int main()
//{
//	int a = 213;
//	int b = 72;
//	int ret = Add(a, b);//��������
//	printf("%d\n", ret);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char arr1[] = "abcdef";
//	int arr2[] = {1,2,3,4,5,6,7};
//	printf("%c\n", arr1[1]);
//	printf("%d\n", arr2[1]);
//
//	return 0;
//}

//#include <stdio.h>
//
//
//typedef int it;
//
//int main()
//{
//	it a = 10;
//	it c = 9;
//
//	printf("%d\n", a);
//	printf("%d\n", c);
//
//	return 0;
//}
// 
// 

//#include <stdio.h>
//
////���峣��
//#define A 9
//
////�����
//#define B(x,y) ((x)+(y))
//
//int main()
//{
//	printf("%d\n", B(A, A));
//	return 0;
//}


//int main()
//{
//	int a = 9;
//	int* p = a;//p��һ��ָ�� ��ָ�����һ�����͵ĵ�ַ
//	return 0;
//}

//#include <stdio.h>
//
//struct Student       //�ṹ�����͵Ķ���
//{
//	char name[20];//����
//	char sex[10];//�Ա�
//	int  age;     //����
//	char  tele[18];//�绰����
//};
//
//
//
//int main()
//{
//	struct Student s = { "appearancebook","��",18,"112233445566" };
//	printf("%s\n", s.name);
//	printf("%s\n", s.sex);
//	printf("%d\n", s.age);
//	printf("%s\n", s.tele);
//
//	return 0;
//}

//1.
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//
//	//�Ȳ���1--100֮�����
//	for (i = 1; i <= 100; i++)
//	{
//		//�ҵ�3������������ӡ
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//2.

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	//��3��ʼֱ�Ӵ�ӡ����3�ٴ�ӡ ֱ������100
//	for (i = 3; i <= 100; i += 3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		int j = 0;
//		int flag = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i += 4)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	//��ʼ��
//	int arr[10] = { 0 };
//	int i = 0;
//	int pos = 0;
//
//	//��ֵ
//	for (i = 0; i < 10; i++)
//	{
// 		scanf("%d", &arr[i]);
//	}
//
//	//���ֵ�±�
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[pos] < arr[i])
//		{
//			pos = i;
//		}
//	}
//	printf("%d", arr[pos]);
//}

//#include <stdio.h>
//
//int main()
//{
//	double s = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		s = s + 1.0 / i;
//	}
//	printf("%lf\n", s);
//	return 0;
//}

//
////
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//char* my_strncat(char* dest, const char* src, int sz)
//{
//	assert(dest && src);
//	int i = 1;
//	char* ret = dest;
//
//	//�ҵ�Ŀ���ַ�����'\0'
//	while (*dest++)
//		;
//
//	//�����ҵ�֮����++��һ�Σ������˻�'\0'��λ��
//	dest--;
//
//	 while (*dest++ = *src++)   //��*srcΪ'\0 'ʱ����ѭ��
//		   if (!--sz)           //��sz=0ʱ����ѭ��   
//				break;
//	
//	
//	 *dest = '\0';	            //׷�����ֱ��׷��'\0' ���׷��һ��������Դ�ַ���
//		return ret;
//}
//
//int main()
//{
//	char arr1[30] = "abcdef\0yyyyyyyy";
//	char arr3[30] = "abcdef\0yyyyyyyyy";
//	char arr2[30] = "xxxx";
//	//strncat(arr1, arr2, 7);
//	///my_strncat(arr3, arr2, 7);
//	//my_strncat(arr2, arr2,4);
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr3);
//	printf("%s\n", arr2);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//
//char* my_strncpy(char* dest, const char* src, int sz)
//{
//	assert(dest && src);
//	char* ret = dest;
//
//
//	while (*dest++ = *src++) //��*srcΪ'\0 'ʱ����ѭ��
//		if (!--sz)           //��sz==0ʱ����ѭ��   
//			break;
//
//
//	                         //������󲻼�\0 ����������Դ�ַ�����'\0 '
//	return ret;
//}
//
//
//int main()
//{
//	char arr1[30] = "abcdefyyyyyyyyy";
//	char arr3[30] = "abcdefyyyyyyyyy";
//	char* arr2 = "xxxx";
//	strncpy(arr1, arr2, 7);
//	my_strncpy(arr3, arr2, 7);
//	//strncpy(arr2 + 2, arr2, 7);
//	printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	printf("%s\n", arr3);
//
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[30] = "appearancebook";
//	strncat(arr, arr + 1, 3);
//	printf("%s\n", arr);
//	return 0;
//}


////ģ��memcpy
//
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//void* my_memcpy(void* dest, const void* src, int sz)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (sz--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src  = (char*)src  + 1;
//
//	}
//  return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
//	int arr2[20] = { 0 };
//	int arr3[20] = { 0 };
//	memcpy(arr2, arr1, 36);
//	my_memcpy(arr3, arr1,36);
//	return 0;
//}


////ģ��ʵ��memmove
//
//#include <assert.h>
//#include <string.h>
//
//void* my_memmove(void* dest, const void* src, int sz)
//{
//	void* ret = dest;
//	if (dest < src)
//	{
//		int i = 0;
//		while (i < sz)
//		{
//			*((char*)dest + i) = *((char*)src + i);
//			i++;
//		}
//
//	}
//
//	else
//	{
//		while (sz--)
//		{
//			*((char*)dest + sz) = *((char*)src + sz);
//		}
//	}
//
//	return ret;
//}
//
//
//int main()
//{
//
//	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
//	int arr2[] = { 1,2,3,4,5,6,7,8,9 };
//	int arr3[20] = { 0 };
//	memmove(arr1 , arr1+2, 20);
//	my_memmove(arr2 , arr2+2, 20);
//
//	return 0;
//}