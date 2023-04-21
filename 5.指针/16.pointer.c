# include <stdio.h>


// 指针变量的运算，不能+、*、/，只能-。
// 如果两个指针变量指向的是同一个连续空间中的不同存储单元，才可以相减
int main(void)
{
    int i = 5;
    int j = 10;

    int * m = &i;
    int * n = &j;
    // m - n // 没有实际意义

    int arr[5];
    int * a = &arr[1];
    int * b = &arr[4];

    printf("a和b距离%ld个单元\n",b-a);

}