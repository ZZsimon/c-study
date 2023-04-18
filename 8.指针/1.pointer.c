# include <stdio.h>

int main(void)
{
    int * p; // p是变量的名称，前面说过，变量只是代表了内存中的一个存储空间
    // 这里就是在内存中寻找了一个空间的存储空间，并且，这个空间存放的是【int类型变量的地址】
    // 这种变量叫做指针变量，但是它本质上也是变量！
    // 普通的变量存放的是 整数、字符这种，这里存放的是一个地址！

    int i = 3;

    // 和p变量对应的存储空间只能放一个变量地址
    // 怎么获取地址呢，通过 & 这个符号来获取变量的地址
    // 这里我们将i的地址获取到，然后放到p这个变量对应的存储空间！
    p = &i;
    // p=i; // 错误！p只能存放地址！

    return 0;
}