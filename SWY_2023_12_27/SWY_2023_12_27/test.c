#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<string.h>
//#define N 5
//struct simulate
//{
//    char name[10];          //选手姓名
//    char number[10];        //选手编号
//    char nationality[10];   //选手国籍
//    float score;              //选手得分
//    float grade[7];           //各位评委评分
//} sim[5];           //选手数组
//int main()
//{
//    int i, j, f=0;
//    float x = 0;
//    float max, min;
//    struct simulate temp1;
//
//    /*********Begin*********/
//    //录入5位选手信息以及评委评分
//    for (i = 0; i < N; i++)
//    {
//        scanf("%s", &sim[i].name);
//        scanf("%s", &sim[i].number);
//        scanf("%s", &sim[i].nationality);
//        j = 0;
//        while (j < 7)
//        {
//            scanf("%f", &sim[i].grade[j]);
//            j++;
//        }
//    }
//
//
//
//
//
//    /*********End**********/
//
//    /*********Begin*********/
//    //按照题意计算每位选手最终得分，最后输出前三名选手信息
//    i = 0;
//    while (i < N)
//    {
//        max = sim[i].grade[0];
//        min = sim[i].grade[0];
//        float sum = 0;
//        j = 0;
//        while (j < 7)
//        {
//            if (max < sim[i].grade[j])
//                max = sim[i].grade[j];
//
//            if (min > sim[i].grade[j])
//                min = sim[i].grade[j];
//
//            sum += sim[i].grade[j];
//            j++;
//        }
//        sim[i].score = (sum - max - min);
//        i++;
//    }
//
//    i = 0;
//    for (i = 0; i < 7 - 1; i++)
//    {
//        j = 0;
//        for (j = 0; j < 7 - i - 1; j++)
//        {
//            if (sim[j].score < sim[j + 1].score)
//            {
//                strcpy(temp1.name, sim[j].name);
//                strcpy(temp1.number, sim[j].number);
//                strcpy(temp1.nationality, sim[j].nationality);
//                temp1.score = sim[j].score;
//                f = 0;
//                while (f < 7)
//                {
//                    temp1.grade[f] = sim[j].grade[f];
//                    f++;
//                }
//
//                strcpy(sim[j].name, sim[j + 1].name);
//                strcpy(sim[j].number, sim[j + 1].number);
//                strcpy(sim[j].nationality, sim[j + 1].nationality);
//                sim[j].score = sim[j + 1].score;
//                f = 0;
//                while (f < 7)
//                {
//                    sim[j].grade[f] = sim[j + 1].grade[f];
//                    f++;
//                }
//
//                strcpy(sim[j + 1].name, temp1.name);
//                strcpy(sim[j + 1].number, temp1.number);
//                strcpy(sim[j + 1].nationality, temp1.nationality);
//                sim[j + 1].score = temp1.score;
//                f = 0;
//                while (f < 7)
//                {
//                    sim[j + 1].grade[f] = temp1.grade[f];
//                    f++;
//                }
//            }
//        }
//    }
//
//    i = 0;
//    while (i < 3)
//    {
//        printf("%s,", sim[i].name);
//        printf("%s,", sim[i].number);
//        printf("%s,", sim[i].nationality);
//        printf("%.2f\n", sim[i].score);
//        i++;
//    }
//    
//
//
//
//
//
//    /*********End**********/
//    return 0;
//}

//#include<stdio.h>
///*********Begin*********/
//#define SDTsum  2 
//
//typedef struct student
//{
//    long long number;
//    char name[20];
//    int score;
//
//}student;
//
//int main()
//{
//    student s[SDTsum];
//    int i = 0;
//    while (i < SDTsum)
//    {
//        scanf("%lld", &s[i].number);
//        scanf("%s", &s[i].name);
//        scanf("%d", &s[i].score);
//        i++;
//    }
//    if (s[0].score > s[1].score)
//    {
//        printf("%lld ", s[0].number);
//        printf("%s ", s[0].name);
//        printf("%d", s[0].score);
//    }
//    else
//    {
//        printf("%lld ", s[1].number);
//        printf("%s ", s[1].name);
//        printf("%d", s[1].score);
//    }
//    return 0;
//}
//
///*********End*********/

//#include<stdio.h>
///*********Begin*********/
//typedef struct student
//{
//    char number[18];
//    char name[9];
//    int  score;
//}student;
//
///*********End**********/
//int main(void)
//{
//    /*********Begin*********/
//    student s[200];
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    while (i < n)
//    {
//        scanf("%s", &s[i].number);
//        scanf("%s", &s[i].name);
//        scanf("%d", &s[i].score);
//        i++;
//    }
//    i = 0;
//    while (i < n)
//    {
//        printf("%s ", s[i].number);
//        printf("%s ", s[i].name);
//        printf("%d\n", s[i].score);
//        i++;
//    }
//
//    /*********End**********/
//    return 0;
//}

//#include<stdio.h>
//#include<string.h>
///*********Begin*********/
//typedef struct Candidates
//{
//    int Li;
//    int Zhang;
//    int Sun;
//
//}Candidates;
//
///*********End**********/
//int main(void)
//{
//    /*********Begin*********/
//    Candidates s;
//    s.Li = 0;
//    s.Zhang = 0;
//    s.Sun = 0;
//    char a[10] = "Li";
//    char b[10] = "Zhang";
//    char c[10] = "Sun";
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    while (i < n)
//    {
//        char name[10] = { 0 };
//        scanf("%s", name);
//        if (strcmp(name, a) == 0)
//            s.Li++;
//        if (strcmp(name, b) == 0)
//            s.Zhang++;
//        if (strcmp(name, c) == 0)
//            s.Sun++;
//        i++;
//    }
//    printf("Li:%d\n", s.Li);
//    printf("Zhang:%d\n", s.Zhang);
//    printf("Sun:%d\n", s.Sun);
//    /*********End**********/
//    return 0;
//}

#include<stdio.h>
#include<string.h>
int Count;
struct student {
    char sno[20], name[20];
    int math, english, chinese, sum;
};

void print(struct student stu) {
    printf("%s %s %d %d %d %d\n", stu.sno, stu.name, stu.math, stu.english, stu.chinese, stu.sum);
}

void query_stu(struct student s[], char* name) {
    /*********Begin*********/
    int i = 0;
    while (i < Count)
    {
        if (strcmp(s[i].name, name) == 0)
            print(s[i]);
        i++;
    }

    /*********End**********/
}

void delete_stu(struct student s[], char* sno) {
    /*********Begin*********/
    int i = 0;
    for (i = 0; i < Count - 1; i++)
    {
        if (strcmp(s[i].sno,sno)==0)
        {
            for (i = i; i < Count - 1; i++)
            memmove(&s[i], &s[i + 1], sizeof(struct student));
            return;
        }
    }

    /*********End**********/
}

void update_stu(struct student s[], char* sno, int math, int english, int chinese) {
    /*********Begin*********/
    int i = 0;
    while (i < Count)
    {
        if (strcmp(s[i].sno, sno) == 0)
        {
            s[i].math = math;
            s[i].english = english;
            s[i].chinese = chinese;
            s[i].sum = s[i].math + s[i].english + s[i].chinese;
        }
        i++;
    }

    /*********End**********/
}

int main(void)
{
    int n, q;
    struct student students[50] = { 0 };
    scanf("%d%d", &n, &q);
    Count = n;
    for (int i = 0; i < n; i++) {
        /*********Begin*********/
        scanf("%s", students[i].sno);
        scanf("%s", students[i].name);
        scanf("%d", &students[i].math);
        scanf("%d", &students[i].english);
        scanf("%d", &students[i].chinese);
        students[i].sum = students[i].math + students[i].english + students[i].chinese;
        /*********End**********/
    }
    while (q--) {
        int op;
        scanf("%d", &op);
        char sno[20], name[20];
        if (op == 1) {
            scanf("%s", name);
            query_stu(students, name);
        }
        else if (op == 2) {
            int a, b, c;
            scanf("%s%d%d%d", sno, &a, &b, &c);
            update_stu(students, sno, a, b, c);
            for (int i = 0; i < Count; i++)
                print(students[i]);
        }
        else {
            scanf("%s", sno);
            delete_stu(students, sno);
            for (int i = 0; i < Count - 1; i++)
                print(students[i]);
        }
    }
    return 0;
}