# include <stdio.h>

/**
 * 【结构体简介】
 *      为什么需要结构体
*/

// 定义了一个数据类型，注意定义的是数据类型！！！
struct Student
{   
    int age;
    float score;
    char sex
};

int main(void)
{
    int age;
    float score;
    char name[100];

    int age2;
    float score2;
    char name2[100];

    // 如果一个事物很复杂，有很多特性，每一个特性都可以用基本类型来表示。
    // 比如一个学生，他有年龄、性别、成绩、姓名等等的特性
    // 如果都用基本类型来表示学生，就需要定义一堆基本类型的数据，就像上面这样子。
    // 如果有很多学生，要定义的基本类型变量就更加多了
    

    // 结构体就是为了解决这个问题，结构体可以表示一个复杂的数据
    struct Student stu = 
    {
        80,
        98.5,
        'F'
    };

    return 0;
}
