/**
 * 对7.pointer.c中的内容 练习！！！
*/
# include <stdio.h>

void huhuan(int *, int *);

int main(void)
{
    int x = 1;
    int y = 2;

    huhuan(&x, &y);
    printf("%d %d\n", x , y);

    return 0;

}

void huhuan(int * m, int * n){
    // 想要在这个函数修改主函数中变量的值，必须拿到变量关联的存储空间
    // int * z = &x; 再通过*这个操作符，*z就代表了x关联的存储空间
    // 同理，这里我们通过传递 &x，把&x赋值给m这个指针变量，我们就可以通过 *m 拿到x关联的存储空间

    int t = *m; // 临时保存x的值

    // *n就相当于拿到了y变量关联的存储空间中的数据，也就是2
    // 此时 x y都变成了2 ，所以需要通过再定义一个变量，临时保存
    *m = *n;
    *n = t;

}