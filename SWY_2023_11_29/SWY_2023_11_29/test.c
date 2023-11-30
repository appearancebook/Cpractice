#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//    /*********Begin*********/
//    int x = 0;
//    int arr[100] = {0};
//    int i = 0;
//    int count = 0;//计数器
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
//    //从最后开始打印
//    for(i=count;i>=0;i--)
//    {
//        printf("%d",arr[i]);
//    }
//
//        /*********End**********/
//
//        return 0;
//}


//#include <stdio.h>
//#define N 11
//void main()
//{
//    int i, j, k, n = 0, a[N][N] = {0};
//    
//    while (n <= 0 || n >= 11)
//    {
//        printf("请输入要打印的行数：\n");
//        scanf("%d", &n);
//    }
//    printf("%d行杨辉三角如下：\n", n);
//    /*********Begin*********/
//
//    //初始化二维数组
//    for (i = 0; i < N - 1; i++)
//    {
//        for (j = 0; j <= i; j++)//每行
//        {
//            a[i][0] = 1;
//            if (j == i)
//            {
//                a[i][j] = 1;
//            }
//        }
//    }
//    
//    for (i = 0; i < N - 1; i++)
//    {
//        for (j = 0; j <= i; j++)//每行
//        {
//            if (i>1&&j>0)
//            {
//                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//            }
//        }
//    }
//    k = i;
//    //打印
//    for (i = 0; i < n; i++)
//    {
//        for (k = n-1-i; k > 0; k--)
//        {
//            printf("   ");
//        }
//
//
//        for (j = 0; j <= i; j++)
//        {
//           
//            printf("%6d", a[i][j]);
//            
//        }
//        printf("\n");
//    }

    
    /*********End**********/


//    return 0;
//}


#include<stdio.h>

void input(int a[3][3])
{
    /*********Begin*********/
    int i = 0;
    int j = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }


    /*********End**********/
}
void output(int a[3][3])
{
    /*********Begin*********/
    int i = 0;
    int j = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }



   /*********End**********/
}

void transpose(int a[3][3])
{
    /*********Begin*********/
        int tmp = a[0][1];
        a[0][1] = a[1][0];
        a[1][0] = tmp;
        tmp = a[0][2];
        a[0][2] = a[2][0];
        a[2][0] = tmp;

        tmp = a[1][2];
        a[1][2] = a[2][1];
        a[2][1] = tmp;
        printf("transposed:\n");
        int i = 0;
        int j = 0;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%5d", a[i][j]);
            }
            printf("\n");
        }


      


  /*********End**********/
}
int main()
{
    int a[3][3] = { 0 };
    input(a);
    output(a);
    transpose(a);
    return 0;
}