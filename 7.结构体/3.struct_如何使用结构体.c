# include <stdio.h>

/**
 * 【如何使用结构体】
 *      赋值和初始化
 *      如何去除结构体变量中的成员
 *      结构体变量的运算
 * 
*/

struct Student
{   
    int age;
    float score;
    char sex
};


int main(void)
{
    struct Student stu = {11, 60.5, 'F'};

    return 0;
}
