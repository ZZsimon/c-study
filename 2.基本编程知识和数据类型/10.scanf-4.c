# include <stdio.h>

int main(void)
{   
    int i, j;

    printf("请输入2个值，中间以逗号分隔\n");
    scanf("%d,%d",&i,&j);
    printf("你输入的两个值是：%d,%d\n",i,j);
    
    return 0;
}