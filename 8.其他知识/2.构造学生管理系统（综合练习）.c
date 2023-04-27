/**
 * 动态构造学生管理系统
 * 
 *      首先需要学生的个数，然后是每一个学生的信息
 *      每一个学生有年龄、分数、性别等信息。
 *      
 *      输入进去后，可以根据分数进行排名，也就是对数组中的数据进行排序
 * 
 *      另外还可以增加学生，减少学生。
 *       
*/

# include <stdio.h>
# include <mm_malloc.h>

struct Student
{
    int age;
    float score;
    char sex;
};

void CreateStudent(struct Student * pstu)
{
    
    scanf("%d %f %c", &(pstu->age), &(pstu->score), &(pstu->sex));
    // printf("%d %f %c\n",pstu->age,pstu->score,pstu->sex);
}


void OutputStudent(struct Student * stuArr, int len)
{
    for (int i = 0; i < len; i++)
    {
        // 输出每一个学生的成绩
        printf("第%d学生的成绩：%f\n",i+1, stuArr[i].score );
    }
}

void InputStudent(struct Student * stuArr, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("请输入第%d个学生的信息\n",i+1);
        scanf("%d %f %c", &(stuArr[i].age), &(stuArr[i].score), &(stuArr[i].sex));
    }
}

int main()
{
    printf("请输入学生的个数\n");
    int len;
    scanf("%d",&len);

    // 创建学生
    // 创建好学生后需要将学生放入学生管理系统，学生管理系统使用动态数组来实现
    // 开始创建动态数组（使用malloc函数）
    // 需要的字节数就是：长度*(struct Student占用的字节)
    struct Student * stuArr = (struct Student * )malloc(len * sizeof(struct Student));

    // 输入每一个学生的信息
    InputStudent(stuArr,len);

    // 输出每一个学生的成绩
    OutputStudent(stuArr,len);

    // 对数组进行排序

    // 增加，删除一个学生
    // 略，因为需要使用修改动态数组相关的函数！
    

    return 0;
}