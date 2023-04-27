# include <stdio.h>

/**
 * 【如何使用结构体】
 *      赋值和初始化
 * 
*/

struct Student
{   
    int age;
    float score;
    char sex;
};


int main(void)
{
    struct Student stu = {11, 60.5, 'F'}; // 定义结构体变量，并初始化变量

    // 先定义结构体
    struct Student stu2;
    // 然后再赋值
    stu2.age = 21;
    stu2.score = 88;
    stu2.sex = 'F';
    // 取出结构体的成员
    printf("%d %f %c\n",stu2.age,stu2.score,stu2.sex);
    

    return 0;
}
