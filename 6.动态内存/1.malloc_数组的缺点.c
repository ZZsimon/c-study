# include <stdio.h>

/**
 * 【数组的缺点】
 *      数组的长度只能是一个长整数，不能是一个变量
*/
int main(void)
{
    int a[2] = {111,222}; // success
    int len = 2;
    // int b[len]={11,233}; // error

    return 0;
}