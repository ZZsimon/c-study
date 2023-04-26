# include <stdio.h>

/**
 * 【创建结构体的方式】
 * 
*/

// 这种比较推荐（推荐）
struct Student
{   
    int age;
    float score;
    char sex
};

// 直接定义了结构体类型的变量名字（不推荐）
struct Student2
{   
    int age;
    float score;
    char sex
} stu2;


// 不仅定义了结构体类型的变量名字，还省略了结构体的名字（不推荐）
struct 
{   
    int age;
    float score;
    char sex
} stu3;


int main(void)
{
    struct Student stu;

    return 0;
}
