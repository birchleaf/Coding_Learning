#include <stdio.h>

int main(void)
{
    //学生选修课程系统
    int i, j, k, n, m, a[10][10], b[10], c[10];
    printf("请输入学生人数和课程数：");
    scanf("%d%d", &n, &m);
    printf("请输入学生选课情况：\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("请输入课程人数：\n");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("请输入课程容量：\n");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &c[i]);
    }
    printf("学生选课情况：\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("课程人数：\n");
    for (i = 0; i < m; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");
    printf("课程容量：\n");
    for (i = 0; i < m; i++)
    {
        printf("%d ", c[i]);
    }
    printf("\n");
    printf("选课人数超过容量的课程编号：\n");
    for (i = 0; i < m; i++)
    {
        if (b[i] > c[i])
        {
            printf("%d ", i + 1);
        }
    }
    printf("\n");
    printf("选课人数未超过容量的课程编号：\n");
    for (i = 0; i < m; i++)
    {
        if (b[i] <= c[i])
        {
            printf("%d ", i + 1);
        }
    }
    printf("\n");
    printf("选课人数未超过容量的学生学号：\n");
    for (i = 0; i < n; i++)
    {
        k = 0;
        for (j = 0; j < m; j++)
        {
            if (a[i][j] == 1)
            {
                if (b[j] <= c[j])
                {
                    k++;
                }
            }
        }
        if (k == m)
        {
            printf("%d ", i + 1);
        }
    }
    printf("\n");
    printf("选课人数超过容量的学生学号：\n");
    for (i = 0; i < n; i++)
    {
        k = 0;
        for (j = 0; j < m; j++)
        {
            if (a[i][j] == 1)
            {
                if (b[j] > c[j])
                {
                    k++;
                }
            }
        }
        if (k > 0)
        {
            printf("%d ", i + 1);
        }
    }
    
    return 0;
}