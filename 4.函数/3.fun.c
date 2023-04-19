# include <stdio.h>

void g(void)
{
    printf("k = %d\n",k);
}

// k在所有函数的外面，它就是全局变量
// 但是只有在它定义的位置后面的代码，才能使用这个变量
int k = 30;

// i、j都是局部变量
void f(int i){
    g();
    printf("k = %d\n",k);
}

int main(void)
// i也是局部变量
{
   f(88);

    return 0;
}
