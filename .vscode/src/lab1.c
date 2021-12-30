//二维数组矩阵计算加

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a[3][4] = {{3, 0, 4, 5}, {6, 2, 1, 7}, {4, 1, 5, 8}};
    int b[5][4] = {{1, 4, 0, 3}, {2, 5, 1, 6}, {9, 3, 6, 0}};
    int i, j;
    printf("a:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
    printf("b:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%4d", b[i][j]);
        }
        printf("\n");
    }
    printf("add:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%4d", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
    return 0;
}