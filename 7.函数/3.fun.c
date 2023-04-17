# include <stdio.h>


void f(void){
    printf("哈哈\n");
}

int main(void)
{
    // 就是将代码尽可能细粒度的封装成函数
    f();

    return 0;
}
