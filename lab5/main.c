//指针的使用练习

#include <stdio.h>
int main()
{
    char ch1 = 'I', ch2 = 'Q';
    int n1 = 1, n2 = 6;
    double d1 = 1.25, d2 = 20.5;

    char *pch_1=&ch1, *pch_2 = &ch2;

    int *pn_1 = &n1, *pn_2 = &n2;

    double *pd_1 = &d1, *pd_2 = &d2;

    printf("ch1的地址：%X，ch2的地址：%X\n", pch_1, pch_2);
    printf("n1的地址：%X，n2的地址：%X\n", pn_1, pn_2);
    printf("d1的地址：%X，d2的地址：%X\n\n", pd_1, pd_2);

    printf("ch1的值：%c, ch2的值：%c\n", *pch_1, *pch_2);
    printf("n1值：%d, n2的值：%d\n", *pn_1, *pn_2);
    printf("d1的值：%f, d2的值：%f\n\n", *pd_1, *pd_2);

    *pch_1 += 32;
    *pch_2 += 32;
    *pn_1 -= 5;
    *pn_2 -= 5;
    *pd_1 += 10.0;
    *pd_2 += 10.0;

    printf("ch1的值：%c, ch2的值：%c\n", *pch_1, *pch_2);
    printf("n1值：%d, n2的值：%d\n", *pn_1, *pn_2);
    printf("d1的值：%f, d2的值：%f\n\n", *pd_1, *pd_2);



return 0;
}
