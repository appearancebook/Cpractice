#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
//int main(void)
//{
//    /*********Begin*********/
//    int a = 0;
//    int b = 0;
//    int max = 0;
//    int min = 0;
//    int arr[10][10] = { 0 };
//    scanf("%d %d", &a, &b);
//    int i = 0;
//    int j = 0;
//    int k = 0;
//    for (i = 0; i < a; i++)
//    {
//        int j = 0;
//        for (j = 0; j < b; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//        printf("\n");
//    }
//
//
//
//    for (i = 0; i < a; i++)
//    {
//        max = arr[i][0];
//
//
//        for (j = 0; j < b; j++)
//        {
//            //�ҳ�ÿ������
//            if (arr[i][j] > max)
//            {
//                max = arr[i][j];
//            }
//
//        }
//
//        for (j = 0; j < b; j++)
//        {
//            if (arr[i][j] == max)
//            {
//                k = j;
//            }
//        }
//
//        min = arr[0][k];
//        for (j = 0; j < a; j++)
//        {
//            //�ҳ�ÿ�����
//            if (arr[j][k] < min)
//            {
//                min = arr[j][k];
//            }
//        }
//        if (max == min)//����ǰ���
//        {
//            int x = 0;
//            int y = 0;
//            for (x = 0; x < a; x++)//�Ҵ򰰵��±�
//            {
//                for (y = 0; y < b; y++)
//                {
//                    if (arr[x][y] == max)
//                    {
//                        break;
//                    }
//                }
//                if (arr[x][y] == max)
//                {
//                    break;
//                }
//            }
//            printf("Array[%d][%d]=%d", x, y, max);
//            break;
//        }
//
//    }
//
//
//    /*********End**********/
//    return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//    /*********Begin*********/
//    int arr[10] = { 0 };//��ʼ��
//    int i = 0;
//    int max = 0;
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d", &arr[i]);//��ֵ
//    }
//    
//    //�ҵ����ֵ�±�
//    for (i = 0; i < 10; i++)
//    {
//        if (arr[i] > arr[max])
//        {
//            max = i;
//        }
//    }
//
//    //ɾ��
//    while (max < 9)
//    {
//        arr[max] = arr[max + 1];
//        max++;
//    }
//
//    //��ӡ
//    for (i = 0; i < 9; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    /*********End**********/
//    return 0;
//}



//#include<stdio.h>
//int main(void)
//{
//    /*********Begin*********/
//    //��ʼ��
//    int arr[10][10] = { 0 };
//    
//    //������Ǹ�ֵ
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < 10; i++)
//    {
//        for (j = 0; j <= i; j++)
//        {
//          
//            arr[i][0] = 1;
//
//            if (i == j)
//            {
//                arr[i][j] = 1;
//            }
//            if (i > 1 && j > 0 && j < i)
//            {
//                arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//            }
//
//        }
//    }
//
//    //��ӡ
//    for (i = 0; i < 10; i++)
//    {
//        for (j = 0; j <= i; j++)
//        {
//
//            printf("%d ", arr[i][j]);
//
//        }
//        printf("\n");
//    }
//
//    /*********End**********/
//    return 0;
//}

//#include <stdio.h>
//struct S
//{
//	int a : 8;
//	int b : 8;
//	int c : 8;
//	int d : 9;
//};
//
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//}* p,s;
//
//int main()
//{
//	struct S s = { 0 };
//	
//	printf("%zd\n", sizeof(struct S1));
//	printf("%zd\n", sizeof(struct S2));
//	printf("%zd", sizeof(*p));
//
//	//printf("%zd", sizeof(struct S));
//
//
//	return 0;
//}

//#include <stdio.h>
//
//struct S
//{
//	//member - list;//��Ա�б�
//
//	int i;
//	char c;                             //�����ǲ�ͬ���͵ı���
//}/*variable - list*/s = {.i=1,.c='a'};  //�ṹ������б�Ҳ����������ṹ�����ʹ����ı���
//                     
//                                        //'*' + ������ ���Ա�ʾ�ýṹ�������ָ��
//
//struct Point
//{
//	int x;
//	int y;
//}p1; //�������͵�ͬʱ�������p1
//
//struct Point p2; //����ṹ�����p2
//
//struct Node
//{
//	int data;
//	struct Point p;
//	struct Node* next;
//}n1 = { 10, {4,5}, NULL }; //�ṹ��Ƕ�׳�ʼ��
//struct Node n2 = { .p={1,2}, .data=20, NULL};//�ṹ��Ƕ�׳�ʼ��
//
////���磺
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//
//void print1(struct S2 s)
//{
//	printf("%d", s.c1);
//}
//
//void print2(struct S2* s)
//{
//	printf("%d", s->c1);
//}
//
//struct S9
//{
//	char i1;
//	int i;
//};
//
//int main()
//{
//	printf("%zd", sizeof(struct S9));
//	return 0;
//}

//#include <stdio.h>
//#include <assert.h>
//#include <stdlib.h>

//enum 
//{
//	abc,
//	bcd
//}pd=bcd;
//
//
//int my_atoi(const char* str)
//{
//	assert(str);
//	long long ret = 0;
//	int flag = 1;
//	//�������ַ���
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	//�����հ��ַ�
//	while (*str == ' ')
//	{
//		str++;
//	}
//		//����������
//		if (*str == '-' || *str == '+')
//		{
//			flag = -1;
//			str++;
//		}
//		
//		while (*str)
//		{
//			//�ж��Ƿ��������ַ�
//			if (isdigit(*str))
//			{
//				ret = ret * 10 + flag * (*str - '0');
//
//				//�ж��Ƿ񳬳���Χ
//				if (ret > INT_MAX || ret < INT_MIN)
//				{
//					return (int)ret;
//				}
//			}
//
//			//����������ַ����������ַ�
//			else
//			{
//
//				return (int)ret;
//			}
//			str++;
//		}
//		
//
//	pd = abc;
//	return (int)ret;
//}
//
//int main()
//{
//	int ret = my_atoi("    050702");
//	if (pd == abc)
//	{
//		printf("%d\n", ret);
//	}
//	else
//	{
//		printf("�Ƿ�ת��\n");
//		printf("%d\n", ret);
//
//	}
//	return 0;
//}

//#include <stdio.h>
//#define TMP(a) (((a)&0xaaaaaaaa)>>1)+(((a)&0x55555555)<<1)
////               ż��λ����             ����λ����
//
//int main()
//{
//	int a = 5;
//	printf("%d\n", TMP(a));
//	a = TMP(a);
//	printf("%d\n", TMP(a));
//
//	return 0;
//}

//#include<stdio.h>
//
//#define OFFSETOF(type,dest) (size_t)&(((type*)0)->dest)
//
//
//struct S
//{
//	short s;//0
//	int i;  //4
//	char c1;//8
//	char c2;//9
//};
//
//int main()
//{
//	printf("%d\n", OFFSETOF(struct S, s));
//	printf("%d\n", OFFSETOF(struct S, i));
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, c2));
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//
//
//void dog(int* a, int sz,int* p1,int* p2)
//{
//	int i = 0;
//	int ret = 0;
//	//1.�������������һ��
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ a[i];
//	}
//	//2.����ret�ĵڼ�λ��1
//	int pos = 0;
//	for (i = 0;i<32; i++)
//	{
//		if (((ret >> i) & 1) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	//3.����������Ԫ�صĵ�posλΪ1�����
//	for (i = 0; i < sz; i++)
//	{
//		if (((a[i] >> pos) & 1) == 1)
//		{
//			*p1 = *p1 ^ a[i];
//		}
//	}
//	//4.ret^dog1==dog2;
//	*p2 = ret ^ *p1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int dog1 = 0;
//	int dog2 = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	dog(arr, sz,&dog1,&dog2);
//	printf("%d\n%d\n", dog1, dog2);
//	return 0;
//}