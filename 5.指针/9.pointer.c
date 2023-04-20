# include <stdio.h>

int main(void)
{
    int aa = 1;
    int bb = 2;
    int cc = 3;

    int * p = &aa;
    int* a = &bb;
    int *b = &cc;

    // char ch = A; // 不用单引号就会当成变量来看待
    char ch2 = 'A'; // c语言规定表示单个字符必须用 '' 括起来

    int * m;
    // m = &ch2; // 会报错，因为m只能保存int类型变量关联的地址，但是 &ch2 拿到的是char类型变量关联的地址
    
    
    // 因此，需要定义一个char类型的指针变量
    char * n;
    n = &ch2;

    return 0;
}