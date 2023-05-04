# include <stdio.h>

/**
 * 【定义一个链表】
*/

// 链表中的元素包含【下一个元素的内存地址】和【存储的数据】
// 所以肯定需要结构体
struct Node 
{
    int data;
    struct Node * pNext;
};

/**
 * 链表中还有一些专业术语
 *      首节点：存放第一个有效数据的节点
 *      尾节点：存放最后一个有效数据的节点
 *      头结点：
 *             头结点的数据类型和首节点的类型是一样的，
 *             头结点事首节点前面的那个节点，
 *             头节点并不存放有效数据，设置头结点的目的是为了方便对链表的操作
 *      头指针：一个存放头结点地址的指针变量
 * 
 * 
 * 确定一个链表只需要一个参数：头指针。
 *  
*/  

int main()
{
    struct Node * pHead; // pHead用来存放链表头结点的地址。
    
    // CreateList函数的作用：创建了一个链表，并返回创建的链表的头指针。
    pHead = CreateList();

    // TravserseList函数的作用：输出链表中的每一个元素
    TravserseList(pHead);

    return 0;
}