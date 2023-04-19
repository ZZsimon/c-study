# include <stdio.h>

void f(void); // 函数声明的方式
// 告诉编译器，f代表了一个函数。
// 否则，编译器就会找不到f这个变量。

// 对库函数声明，是通过 # include <库函数所在的文件名称.h>实现的
// 例如为什么可以直接调用printf函数，因为# include <stdio.h>这个语句已经声明了printf这个函数

int main(void)
{
    f();

    return 0;
}

void f(void){
    printf("哈哈\n");
}