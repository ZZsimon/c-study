# include <stdio.h>
# include <mm_malloc.h>


/**
 * 【利用动态内存来构造数组】
 * 
*/
int main(void)
{
    double a[5];

    double * pArr;
    int len;

    printf("请输入元素的个数：\n");
    scanf("%d",&len);

    // 并且malloc会返回第一个字节的内存地址
    // 并且使用(double *)将这个内存地址强制转换成double类型
    // 然后放到pArr这个变量中去，pArr这个变量本身所占据的内存大小是4个字节。
    // pArr变量代表的内存空间了存储的数据是一个内存地址，并且是malloc返回的第一个字节的内存地址

    // 又因为pArr是double类型的指针，所以pArr代表了前面的8个字节
    // 如果pArr是int类型的指针，那么pArr代表了前面的4个字节
    pArr = (double *)malloc(len * sizeof(double));

    // a数组和pArr的用法和表现都是类似的
    // 这就证明了pArr就是一个动态数组，他可以输入动态的长度

    // 动态构造了一个一维数组
    
    
    for (int i = 0; i < len; i++)
    {
        printf("请输入数组的第%d个元素：\n",i+1);
        scanf("%lf",&pArr[i]);
    }

    printf("输出数组的每一个元素：\n");
    for (int i = 0; i < len; i++)
    {
       printf("%lf\n",pArr[i]);
    }

    // 释放掉动态数组的内存
    free(pArr);

    return 0;
}
