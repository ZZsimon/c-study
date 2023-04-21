# include <stdio.h>

// f函数可以输出任意一个一维数组的内容
void f(int * pArr, int len )
{
    for ( int i = 0; i < len; i++)
    {
        printf("%d\n",*(pArr+i));
    }

    pArr[2] = 33; 
    // pArr 的值和a的值是同一个，因为获取a的值就是一个指针常量，也就是一个地址
    // 那么 pArr 也代表了这个地址常量
    // 
    
};

int main(void)
{
    int a[5]={1,2,3,4,5};
    int b[3]={-1,-200,66};
    int c[10]={77,2};

    f(a,5);
    // f(b,3);

    // f(c,100) // 下标超出了数组的长度，这种做法称为下标越界，容易出问题！


    return 0;
}