# include <stdio.h>

// m和n都是函数内部定义的变量，它们都接受一个地址 
void swap(int * m, int * n)
{
    int t = *m; // 通过 *操作符可以获取a变量关联的存储空间中的值，也就是3
    *m = *n;
    *n = t;
}

int main(void)
{
    int a = 3;
    int b = 5;

    swap(&a, &b);
    printf("a= %d, b = %d\n", a, b);

    return 0;
}