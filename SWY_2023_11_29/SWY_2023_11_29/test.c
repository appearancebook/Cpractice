#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//    /*********Begin*********/
//    int x = 0;
//    int arr[100] = {0};
//    int i = 0;
//    int count = 0;//������
//    scanf("%d", &x);
//    while (x/2)
//    {
//        arr[i] = x % 2;
//        i++;
//        count++;
//        x = x / 2;
//    }
//    arr[i] = x % 2;
//
//    //�����ʼ��ӡ
//    for(i=count;i>=0;i--)
//    {
//        printf("%d",arr[i]);
//    }
//
//        /*********End**********/
//
//        return 0;
//}


#include <stdio.h>
#define N 11
void main()
{
    int i, j, k, n = 0, a[N][N] = {0};
    
    while (n <= 0 || n >= 11)
    {
        printf("������Ҫ��ӡ��������\n");
        scanf("%d", &n);
    }
    printf("%d������������£�\n", n);
    /*********Begin*********/

    //��ʼ����ά����
    for (i = 0; i < N - 1; i++)
    {
        for (j = 0; j <= i; j++)//ÿ��
        {
            a[i][0] = 1;
            if (j == i)
            {
                a[i][j] = 1;
            }
        }
    }
    
    for (i = 0; i < N - 1; i++)
    {
        for (j = 0; j <= i; j++)//ÿ��
        {
            if (i>1&&j>0)
            {
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            }
        }
    }
    k = i;
    //��ӡ
    for (i = 0; i < n; i++)
    {
        for (k = n-1-i; k > 0; k--)
        {
            printf("   ");
        }


        for (j = 0; j <= i; j++)
        {
           
            printf("%6d", a[i][j]);
            
        }
        printf("\n");
    }

    
    /*********End**********/


    return 0;
}


//#include<stdio.h>
//
//void input(int a[3][3])
//{
//    /*********Begin*********/
//
//
//
//    /*********End**********/
//}
//void output(int a[3][3])
//{
//    /*********Begin*********/
//
//
//
//   /*********End**********/
//}
//
//void transpose(int a[3][3])
//{
//    /*********Begin*********/
//
//
//
//  /*********End**********/
//}