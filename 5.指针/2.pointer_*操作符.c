# include <stdio.h>


/**
 * 【*】操作符介绍
 *      
 * 
*/
int main(void)
{
    int * p;
    int i = 3;
    int j;

    p = &i;
    
    // 获取i的时候就会到i关联的地址上拿这个地址中存放的数据，也就是3
    // 获取*p的时候，同理。也就是拿到了3这个数据
    // 然后把3放到j代表的的内存单元中。
    j = *p;

    printf("i = %d\n",i);
    printf("*p = %d\n",*p);
    printf("j = %d\n",j);

    return 0;
}