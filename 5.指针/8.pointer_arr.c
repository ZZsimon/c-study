# include <stdio.h>


void f(int * pArr, int len )
{
    pArr[2] = 33; 
    // 下标和指针的关系
    // a[i]永远等价于 *[a+i]
    // 也就是说  pArr[2] 相当于 *(pArr+2)
    
};

/**
 * 数组、下标、指针的关系
*/
int main(void)
{
    int a[5] = {1,2,3,4,5};

    f(a,5);



    //  printf("%p\n",a); // 0x16f62af60
    //  printf("%p\n",a+1); // 0x16f62af64

    //  // 0x16f62af60 转换成十进制是 3865127552
    //  // 0x16f62af64 转换成十进制是 3865127556

    // // a+1 完成了地址向后移动一个单元，int是4个字节，所以

    return 0;
}