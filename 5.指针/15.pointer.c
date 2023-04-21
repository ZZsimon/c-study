# include <stdio.h>


// pArr是一个指针变量，它关联的存储空间中放的数据是 a这个指针常量关联的存储空间中放的数据，也就是a数组的第一个值的地址
// 所以pArr存储的是一个地址。
void f(int * pArr, int len)
{
    pArr[3] = 88;
}

int main(void)
{
    int a[6] = {1,2,3,4,5,6};
    printf("%d\n",a[3]);
    f(a,6);
}