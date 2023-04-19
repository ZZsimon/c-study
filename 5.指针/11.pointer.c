# include <stdio.h>

void huhuan_1(int x,int y)
{
    int t;
    t = x;
    x = y;
    y = t;

    printf("huhuan函数中的x和y: x = %d,y=%d\n",x,y);
}


/**
 * 要求互换x和y的值
*/
int main(void)
{
    int a = 3; 
    int b = 5;

    huhuan_1(a, b);

    printf("互换之后: x = %d,y=%d\n", a, b);

    return 0;
}