# include <stdio.h>

/**
 * 【发送地址还是发送变量】
 * 
 *      发送地址可以节省内存！还可以提升程序的运行速度！
 *      发送地址更加推荐！
 * 
*/

struct Student
{   
    int age;
    float score;
    char sex;
    char name[100];
};

void InputStudent(struct Student * );
void OutputStudent(struct Student * );

int main(void)
{
    struct Student stu;

    printf("%lu\n",  sizeof(stu)); // 112个字节大小
    /**
     * 如果发送变量的话，在函数中也会开辟一个空间存储112个字节大小的数据
     * 非常浪费内存！
     * 所以说内存的好处就是可以节省内存！
    */

    InputStudent(&stu);
    OutputStudent(&stu);

    return 0;
}

void InputStudent(struct Student * pstu)
{
    // stu.age <====> pstu->age <====> (*pstu).age

    // 对stu的成员进行赋值，可以通过stu.age
    // 也可以 (stu的内存地址) -> age
    // pstu这个变量中存储了stu的内存地址，所以 pstu->age 可以使用

    // (*pstu).age=33;
    pstu->age = 22;
};

void OutputStudent(struct Student * pstu)
{   
    printf("%d\n",  pstu->age);
    printf("%d\n",  (*pstu).age);
};
