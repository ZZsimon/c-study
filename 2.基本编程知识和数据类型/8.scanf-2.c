# include <stdio.h>

int main(void)
{   
    int i;

    // 有非输出控制符，那就输入的时候也输入非输出控制字符，比如输入m123，输出123。
    scanf("m%d",&i);
    printf("%d\n",i);
    
    return 0;
}