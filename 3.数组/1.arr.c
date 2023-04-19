# include <stdio.h>

int main(void)
{
    int a[5]={1,2,3,4,5};
    int i;
    for ( i = 0; i < 5; i++)
        printf("%d\n",a[i]);

    
    int b[3]={1,2,3}; // 完全初始化
     for ( i = 0; i < 3; i++)
        printf("%d\n",b[i]);

    int c[3]={1,2}; // 不完全初始化，没有被初始化的成员的值是0
     for ( i = 0; i < 3; i++)
        printf("%d\n",c[i]);

    int d[3]; // 不初始化 所有元素的值都是垃圾值
    for ( i = 0; i < 3; i++)
        printf("%d\n",d[i]);

     printf("-------------这里是分割线-------------\n");

    int f[5]={1,2,3,4,5};
    // f[5]=100;  // 无效
    for ( i = 0; i < 5; i++)
        printf("%d\n",f[i]);

    return 0;
}