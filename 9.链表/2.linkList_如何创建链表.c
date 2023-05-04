# include <stdio.h>

/**
 * 【创建一个链表】
*/

struct Node 
{
    int data;
    struct Node * pNext;
};

struct Node * CreateList();
void TravserseList(struct Node *);

int main()
{
    struct Node * pHead; // pHead用来存放链表头结点的地址。
    
    // CreateList函数的作用：创建了一个链表，并返回创建的链表的头指针。
    pHead = CreateList();

    // TravserseList函数的作用：输出链表中的每一个元素
    TravserseList(pHead);

    return 0;
}


// 该函数中的代码就是一个普通链表的实现
struct Node * CreateList()
{
    int len; // 链表的长度
    struct Node node; // 链表的元素

    printf("请输入链表的个数");
    scanf("%d", &len);

    for (int i = 0; i < len; i++)
    {
    }
    
};