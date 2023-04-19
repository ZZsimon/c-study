# include <stdio.h>


// 定义了一个p的形参，它是int类型的指针
void huhuan_2(int * p,int * q)
{
    int * t;
    t = p;
    p = q; // 这里只是修改了p关联的那个存储空间中存储的值，无法修改外面的&a这个实参！！！
    q = t;

}


/**
 * 要求互换x和y的值
*/
int main(void)
{
    // 找到一个空间和a做了关联，这个空间是死的，无法被替换。
    // 没有任何一个语言可以把静态变量的空间换一个地址
    // 除非程序被关闭，释放内存。
    int a = 3; 

    int b = 5;

    huhuan_2(&a, &b);

    
    printf("互换之后: x = %d,y=%d\n", a, b);

    return 0;
}