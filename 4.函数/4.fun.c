# include <stdio.h>

int i = 10;

void f(void)
{
    // int i = 20;
    printf("%d\n",i);
}

int main(void)
// i也是局部变量
{
   f();
   return 0;
}
