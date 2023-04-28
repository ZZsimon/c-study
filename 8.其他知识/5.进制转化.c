# include <stdio.h>

/**
 * 【进制转化2】
 *      二进制/十六进制转换为： 十进制
 * 
*/

int main()
{
    int b = 0B1100;
    // b转换成十进制
    // 0*(1) + 0*(2) +  1*(2*2) +  1*(2*2*2) = 12

    // 2进制的数字，每一个位上都是2个状态
    // 16进制的数字，每一个位上都是16个状态
    // 2位的16进制数字的状态那就是：16的平方个状态，因为有16+16个状态。那么它们的组合就是16*16个组合。

    // 所以如果一个数字是二进制位，需要几位的二进制数字才能表示16个状态
    // 根据上面的推断：2*2*2*2。那就是4位的二进制数字可以表示16个状态

    // 【16进制的1】转化成二进制，也是需要4个位的二进制数字：【0001】。
    // 这是为什么呢？因为十六进制的1它也可能会变成十六进制的7，这个时候如果单纯用二进制的1就无法表现十六进制的7了
    // 所以需要4位的二进制数字来表示十六进制的1。

    return 0;
}