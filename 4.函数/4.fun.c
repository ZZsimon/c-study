# include <stdio.h>

int i = 10;

void f(void)
{
    int i = 20;
    printf("%d\n",i);
}

int main(void)
{
   f();
   return 0;
}
