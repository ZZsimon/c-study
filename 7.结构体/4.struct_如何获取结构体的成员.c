# include <stdio.h>

/**
 * 【如何获取结构体的成员】
 *      通过 -> 的方式来获取
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
    struct Student stu = {11, 60.5, 'F'};
    struct Student * pstu = &stu;

    stu.age = 12;

    pstu->age = 13;
    pstu->score = 66.6;
    //  pstu->age在计算机中会转换为 (*pstu).age
    //  (*pst)就相当于 stu这个结构体变量。
    // 所以 stu.age <====> pstu->age <====> (*pstu).age


    /**
     * pstu->age的含义：
     *      pstu所指向的结构体变量中的age这个成员
     *      也就是说，pstu->age相当于age这个成员所在的内存单元
     * 
    */

    printf("%d\n", stu.age);
    printf("%lf\n", pstu->score);

    return 0;
}
