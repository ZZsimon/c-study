# include <stdio.h>
# include <mm_malloc.h>


/**
 * 【多级指针】
 * 
*/
int main(void)
{
    int i = 10;
    int * p = &i;
    int ** q = &p; // q只能存放 int * 类型变量的内存地址，不能存放int类型变量的内存地址
    int *** r = &q;
    // *p可以拿到i变量中的值
    // *q可以拿到p变量中的值
    int j = 12;
    printf("%p\n",p);
    *q = &j;
    printf("%p\n",p); // 地址发生改变了！


    // r = &p; &p取出来的是p指针，它是int *类型，但是r是int ***类型，所以会发生错误！

    return 0;
}
