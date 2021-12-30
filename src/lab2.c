//冒泡排序法

#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a[10], i, j;
    printf("Please put 10 numbers:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (j = 0; j < 10; j++)
    {
        for (i = 0; i < 9; i++)
        {
            if (a[i] > a[i + 1])
            {
                j = a[i];
                a[i] = a[i + 1];
                a[i + 1] = j;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%4d", a[i]);
    }
    return 0;
}