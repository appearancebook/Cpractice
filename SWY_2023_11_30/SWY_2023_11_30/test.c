#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
//int main(void)
//{
//    /*********Begin*********/
//    int arr[10] = { 0 };
//    int i = 0;
//    //����
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    //����
//    for (i = 0; i < 9; i++)
//    {
//        int j = 0;
//        for (j = 0; j < 9-i; j++)
//        {
//            if (arr[j] < arr[j + 1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//
//            }
//        }
//    }
//    //��ӡ
//    for (i = 0; i < 10; i++)
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
//    int n = 0;
//    int i = 0;
//    int a = 0;
//    int ret = 0;//��ŵ�һ�γ��ֵ��±�
//    int arr[1000] = { 0 };
//    scanf("%d", &n);//����n��ֵ
//
//    for (i = 0; i < n; i++)//�������е�n��Ԫ�ظ�ֵ
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &a);//����a��ֵ
//
//    for (i = 0; i < n; i++)//Ѱ�Ҵ�СΪa��Ԫ�ص��±�
//    {
//        ret = -1;//���û�ҵ�ret==-1
//        if (arr[i] == a)
//        {
//            ret = i + 1;//�ҵ���ret==�±�+1
//            break;
//        }
//    }
//    printf("%d", ret);//��ӡ���
//    /*********End**********/
//    return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//    /*********Begin*********/
//    int a = 0;
//    int b = 0;
//    int row = 0;//�����
//    int col = 0;//�����
//    int max = 0;//����������ֵ
//    int arr[10][10] = { 0 };//�����ʼ��
//    scanf("%d,%d", &a, &b);//ȷ��������
//
//    int i = 0;
//    for (i = 0; i < a; i++)
//    {
//        int j = 0;
//        for (j = 0; j < b; j++)
//        {
//            scanf("%d", &arr[i][j]);//�����鸳ֵ
//        }
//        printf("\n");
//    }
//   
//    for (i = 0; i < a; i++)
//    {
//        int j = 0;
//        for (j = 0; j < b; j++)
//        {
//            if (arr[i][j] > max)
//            {
//                max = arr[i][j];//�ҵ���Сֵ
//            }
//        }
//    }
//
//    for (i = 0; i < a; i++)
//    {
//        int j = 0;
//        for (j = 0; j < b; j++)
//        {
//            if (arr[i][j] == max)
//            {
//                row = i + 1;
//                col = j + 1;    //�ҵ���Сֵ�±�
//            }
//        }
//    }
//
//    //��ӡ
//    printf("Input m, n:Input %d*%d array:\n",a,b);
//    printf("max=%d, row=%d, col=%d", max, row, col);
//
//    /*********End**********/
//    return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//    /*********Begin*********/
//    int n = 0;
//    int m = 0;
//    int a = 0;
//    
//    
//    scanf("%d", &n);//һ���м�����
//    int arr[20] = { 0 };//��ʼ��
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);//��ֵ
//    }
//    scanf("%d", &m);//Ҫ���ҵ���
//    int left = 0;
//    int right = n - 1;
//    while ((right-left)>1)//��left��right����ʱ
//    {
//        if (arr[(left + right) / 2] ==m )
//        {
//            a = (left + right) / 2;
//            break;
//        }
//        else if (arr[(left + right) / 2] > m)
//        {
//            right = (left + right) / 2;
//        }
//        else
//        {
//            left = (left + right) / 2;
//        }
//    }
//    if (arr[a] == m)
//        printf("%d", a + 1);
//    else
//        printf("None");
//    /*********End**********/
//    return 0;
//}


#include<stdio.h>
int main(void)
{
    /*********Begin*********/
    int a = 0;
    int b = 0;
    int max = 0;
    int min = 0;
    int arr[10][10] = { 0 };
    scanf("%d %d", &a, &b);
    int i = 0;
    for (i = 0; i < a; i++)
    {
        int j = 0;
        for (j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }


    
    for (i = 0; i < a; i++)
    {
        max = arr[i][0];
     
        int j = 0;
        for (j = 0; j < b; j++)
        {
            //�ҳ�ÿ������
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
            
            
        }
        min = arr[0][j];
        for (j = 0; j < a; j++)
        {
            //�ҳ�ÿ�����
            if (arr[j][i] < min)
            {
                min = arr[j][i];
            }
        }
        if (max == min)
        {
            printf("Array[%d][%d]=%d", j, i, max);
            break;
        }
        
    }


    /*********End**********/
    return 0;
}