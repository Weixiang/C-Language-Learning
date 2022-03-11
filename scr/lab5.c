//指针的应用

#include <stdio.h>
int main()
{
    int* p1, * p2, * p, a, b;
    printf("请输入两个整数：");
    scanf("%d %d",&a,&b);
    p1 = &a;
    p2 = &b;
    if (a < b) {
        p = p1; p1 = p2; p2 = p;
    }
    printf("a=%d, b=%d\n", a, b);

return 0;

}
