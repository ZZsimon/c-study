# include <stdio.h>

/**
 * 【枚举简介】
 *      什么是枚举：枚举就是把事物所有的可能性都罗列出来。
 *  
 *      枚举的优点：让代码更加安全
 * 
 *      枚举的缺点：书写很麻烦，用的不多。
 * 
*/


// 枚举本身是一个数据类型，
enum WeekDay
{
    Mon,
    Tues,
    Wedn,
    Thurs,
    Fri,
    Satu,
    Sun,
};

int main()
{
    // 罗列所有的星期：星期一、星期二、星期三...

    int day1;
    int day2;
    int day3;
    // ...
    // 使用int类型来表示星期几不适合
    // 一个是需要定义很多个变量
    // 第二个是int类型的范围是很大的，表示星期几只需要 1-7 的数字

    // 有需求才有创造，这个时候枚举这个数据类型就被创建出来了
    enum WeekDay day = Wedn;
    printf("%d\n",  day);

    return 0;
}