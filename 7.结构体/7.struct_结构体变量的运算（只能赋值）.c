# include <stdio.h>

/**
 * 【结构体变量的运算】
 * 
*/

struct Student
{   
    int age;
    float score;
};


int main(void)
{
    // 普通类型的赋值本质
    int a1 = 1;
    int a2 = 3;
    a1 = a2;// 将a2中的数据放到a1中

    
    // 结构体变量的赋值本质
    struct Student stu1 = {11, 99.5};
    struct Student stu2 = {13, 59.5};
    printf("%d\n", stu1.age); // 11
    // stu1+stu2，stu1/stu2，stu1-stu2，stu1*stu2 都是错误的


    stu1 = stu2; // 将stu2中的数据也就是{13,59.5}，放入stu1中
    printf("%d\n", stu1.age); // 此时，打印stu1.age，就是13了



    return 0;
}
