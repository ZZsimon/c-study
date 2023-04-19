# include <stdio.h>

int main(void)
{   
    int i;

    scanf("%d",&i); // &是一个获取i对应的内存地址的操作符，通过它，可以获取i对应的内存空间地址
    // scanf将输入的值转化成十进制，然后存入这个内存空间中去

    printf("%d\n",i);

    return 0;
}