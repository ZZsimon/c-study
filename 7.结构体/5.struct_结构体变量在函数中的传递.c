# include <stdio.h>
/**
 * 【结构体变量在函数中的传递】
 * 
*/

struct Student
{   
    int age;
    float score;
    char sex;
};

void InputStudent(struct Student * );
void OutputStudent(struct Student);

int main(void)
{
    struct Student stu;

    InputStudent(&stu);

    // stu变量代表的是一个内存地址
    OutputStudent(stu);
    printf("%d\n",  stu.age);

    // 传入地址的话，函数内部拿到的就是一个指针。
    // OutputStudent(&stu);

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

// 会为_stu变量开辟一个空间，这个空间中也存储了【stu变量代表的内存地址中的数据】。
// 所以此时，输出 _stu.age也可以拿到正确的值
/**
 * 只不过_stu变量和stu变量代表的是两个空间
 * 所以如果改变了_stu变量的值，不会影响stu变量的值
*/
void OutputStudent(struct Student _stu)
{   
    printf("%d\n",  _stu.age);
    _stu.age = 11;
    printf("%d\n",  _stu.age);
    // printf("%d\n",  pstu->age);
    // printf("%d\n",  (*pstu).age);
};
