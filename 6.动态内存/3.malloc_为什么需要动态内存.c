# include <stdio.h>
# include <mm_malloc.h>

/**
 * 【为什么需要动态内存、malloc简介】
 *      使用[动态内存]可以解决传统数组的缺陷，传统数组也叫静态数组。
 * 
 *      malloc是memory allocate（内存分配）的缩写
*/
int main(void)
{
    int i = 5; // 分配了4个字节内存 静态分配

    // 强制类型转换
    int sum = 17,count = 5;
    int mean1;
    double mean;
    mean = (double) sum / count;
    // mean = sum / count; // 不使用(double)强制类型转换的话，得到的是3（舍掉了小数部分）
    printf("Value of mean : %f\n", mean ); // 3.4

    // 动态分配
    int * p = (int *)malloc(4);
    /**
     * 1. 要使用malloc函数，必须引入包含这个函数声明的头文件
     * 2. malloc函数只有一个形参，并且是整数类型的形参
     * 3. 4表示请求系统为当前程序分配4个字节
     * 4. malloc函数只能返回第一个字节的地址
     * 5. 这一行代码分配了8个字节
     *      5.1. 首先是分配了4个字节的动态内存
     *      5.2. 然后是为p这个变量分配了一个4个字节的静态内存，用来存放那4个字节的动态内存中的第一个字节的地址
     *      5.3. 也就是说p代表的内存单元是静态的，但是这个内存单元中存放的内存地址是动态的
    */

    return 0;
}
