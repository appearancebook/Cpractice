#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
//int main(void)
//{
//    /*********Begin*********/
//    int arr[10] = { 0 };
//    int i = 0;
//    //输入
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    //排序
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
//    //打印
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
//    int ret = 0;//存放第一次出现的下标
//    int arr[1000] = { 0 };
//    scanf("%d", &n);//输入n的值
//
//    for (i = 0; i < n; i++)//给数组中的n个元素赋值
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &a);//输入a的值
//
//    for (i = 0; i < n; i++)//寻找大小为a的元素的下标
//    {
//        ret = -1;//如果没找到ret==-1
//        if (arr[i] == a)
//        {
//            ret = i + 1;//找到了ret==下标+1
//            break;
//        }
//    }
//    printf("%d", ret);//打印结果
//    /*********End**********/
//    return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//    /*********Begin*********/
//    int a = 0;
//    int b = 0;
//    int row = 0;//存放行
//    int col = 0;//存放列
//    int max = 0;//存放数组最大值
//    int arr[10][10] = { 0 };//数组初始化
//    scanf("%d,%d", &a, &b);//确定行列数
//
//    int i = 0;
//    for (i = 0; i < a; i++)
//    {
//        int j = 0;
//        for (j = 0; j < b; j++)
//        {
//            scanf("%d", &arr[i][j]);//给数组赋值
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
//                max = arr[i][j];//找到最小值
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
//                col = j + 1;    //找到最小值下标
//            }
//        }
//    }
//
//    //打印
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
//    scanf("%d", &n);//一共有几个数
//    int arr[20] = { 0 };//初始化
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);//赋值
//    }
//    scanf("%d", &m);//要查找的数
//    int left = 0;
//    int right = n - 1;
//    while ((right-left)>1)//当left和right相邻时
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
            //找出每行最大的
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
            
            
        }
        min = arr[0][j];
        for (j = 0; j < a; j++)
        {
            //找出每列最大
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