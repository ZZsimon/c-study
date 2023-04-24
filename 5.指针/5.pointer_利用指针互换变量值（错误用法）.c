# include <stdio.h>

// 虽然p这个变量看起来代表了a变量的内存地址
// 但是实际上内存中是为p这个变量单独开辟了一个空间，这个空间中存放了a变量的地址
// 现在只是更改了p代表的空间中的数据，而不是直接更改a变量代表的空间中的数据
void huhuan_2(int * p,int * q)
{
    int * t;
    t = p;
    p = q;
    q = t;
}


/**
 * 要求互换x和y的值
*/
int main(void)
{
    int a = 3; 

    int b = 5;

    huhuan_2(&a, &b);

    
    printf("互换之后: x = %d,y=%d\n", a, b);

    return 0;
}