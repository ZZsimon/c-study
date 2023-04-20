# include <stdio.h>


/**
 *  一维数组名的含义
*/
int main(void)
{
    // 数组名是一个指针常量
    // 这个指针存放的是一维数组第一个元素的地址
    int a[5];
    // 什么叫做指针常量？
    // 指针变量就是指这个变量关联的存储空间中放的数据是一个地址
    // 那么，指针常量同理，这个a这个常量关联的存储空间中也是放的一个地址，这个关联的存储空间中的放的数据不能被更改！
    
    printf("%p\n",&a[0]);  // 输出a数组第一个元素的地址
    printf("%p\n",&a);  // 输出a数组本身的地址
    // 也就是说，a和a[0]各自关联的地址其实是同一个！

    int b[5];
    // a = b // error 因为前面说了，数组名其实是个常量，常量不能被更改！

    return 0;
}