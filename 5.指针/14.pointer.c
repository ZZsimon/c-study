# include <stdio.h>

// f函数可以输出任意一个一维数组的内容
void f(int * arrName, int count )
{
    for ( int i = 0; i < count; i++)
    {
        printf("%d\n",*(arrName+i));
    }
    
};

int main(void)
{
    int a[5]={1,2,3,4,5};
    int b[3]={1,200,66};
    int c[100]={77,2};

    // f(a,5);
    f(c,20);


    return 0;
}