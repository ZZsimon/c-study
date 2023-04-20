# include <stdio.h>

int main(void)
{
    int * p;
    int i = 3;

    // 此时，p中存储的地址，这个地址关联的变量是一个垃圾变量，所以这个地址中存储的数据是一个垃圾数据
    printf("%d\n",*p); 

    return 0;
}