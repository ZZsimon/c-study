# include <stdio.h>

void f(int i)
{
    i = 99;
}

int main(void)
{
    int i =6;
    printf("调用f之前的i = %d\n",i);
    f(i);
    printf("%d\n",i);

    return 0;
}