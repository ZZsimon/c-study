# include <stdio.h>


/**
 * 数组、下标、指针的关系
*/
int main(void)
{
    int a[5] = {11,22,33,44,55};

     printf("%p\n",a); // 0x16f62af60
     printf("%p\n",a+1); // 0x16f62af64


     // 0x16f62af60 转换成十进制是 3865127552
     // 0x16f62af64 转换成十进制是 3865127556

    // a+1 完成了地址向后移动一个单元，int是4个字节，所以

    return 0;
}