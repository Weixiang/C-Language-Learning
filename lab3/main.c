//指针的认识

#include <stdio.h>
int main()
{
    int a = 10;
    int* p_a;
    p_a = &a;            //取地址
    printf("变量a的地址: %X\n", p_a);
    printf("修改前：直接访问 a=%d, 间接访问 a=%d\n", a, *p_a);
    *p_a = 1000;        //通过间接访问，修改a值
    printf("修改后：直接访问 a=%d, 间接访问 a=%d\n\n", a, *p_a);
    return 0;
}
