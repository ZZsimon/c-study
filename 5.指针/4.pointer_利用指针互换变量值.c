# include <stdio.h>

void f(int * ,int *);

int main(void)
{
    int a = 1;
    int b = 2;

    f(&a, &b);

    return 0;
}

// 调用f函数的时候，传入了a和b的内存地址
// p、q是指针变量，p、q代表的内存单元中只能存放[内存地址]

// 这里 p代表的内存单元中存放了a变量代表的内存单元的内存地址
// 那么，通过*p操作符，就可以查找到a变量代表的内存单元。

// 因此，将a变量代表的内存单元中的数据赋值给 t 这个变量
void f(int * p, int * q)
{
    int t = *p; // 1

    *q = *p;
    *p = t;
}