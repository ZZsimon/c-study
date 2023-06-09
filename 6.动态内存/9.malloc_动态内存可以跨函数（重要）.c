# include <stdio.h>
# include <mm_malloc.h>

void f();


/**
 * 【动态内存可以跨函数】
 *        静态内存会被释放，释放后，当前程序不能再使用这块内存！！！
 * 
*/
int main(void)
{
    int * p;

    f(&p); 
    printf("%d\n",*p); // 5

    return 0;
}

void f(int ** q)
{
    *q = (int *)malloc(sizeof(int)); // 创建4个字节的动态内存，并返回第一个字节的内存地址给*q
    // *q就相当于p
    // 所以p中存放了动态内存中的第一个字节地址

    // q中存放的是p的内存地址
    // 那么，*q拿到的是p中存放的数据
    // 通过上面的代码，p中存放了动态内存中的第一个字节地址
    // ------------------ 分割线 ----------------------
    // 也就是说， 现在p中存放了一个内存地址了
    // 那么，*p就拿到了p中存放的内存地址
    // **q可以理解为*(*q)，即 *p。
    // 那么就可以这么写
    **q = 5; // 这就相当于将5这个数据放入创建的4个动态内存中去。

};
