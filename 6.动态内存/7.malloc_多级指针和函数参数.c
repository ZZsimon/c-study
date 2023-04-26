# include <stdio.h>
# include <mm_malloc.h>

void f(int ** );


/**
 * 【多级指针和函数参数】
 * 
*/
int main(void)
{
    int i = 10;
    int * p = &i;
    int ** q = &p; // q只能存放 int * 类型变量的内存地址，不能存放int类型变量的内存地址
    int *** r = &q;

    printf("%p\n",p);
    f(&p); // &p拿到的是p变量的内存地址，p变量的类型是int *
    printf("%p\n",p);

    return 0;
}

void f(int ** q)
{
    // q变量中存放了p变量的内存地址
    // 那么，*q就相当于p这个变量本身。
    int j = 12;
    *q = &j;
}
