# include <stdio.h>

// 一个指针变量到底占多少字节
int main(void)
{
    // char类型变量占1个字节
    // int类型变量占4个字节
    // double类型变量占8个字节

    char ch = 'A';
    int i = 100;
    double x = 3.14;

    // p q r本身所占的字节各自是多少呢？
    // 它们是否一样呢？
    char * p = &ch;
    int * q = &i;
    double * r = &x;

    // 可以通过sizeof(变量名)方法，它返回的数据就是该变量所占的字节数
    // 4个字节，也就是说，指针变量关联的存储空间占了4个字节大小
    // 注意，这个是32位操作系统。现在很多都是64位操作系统了，那就是8个字节了！
    printf("p的空间大小：%lu字节\n", sizeof(p));
    printf("i的空间大小：%lu字节\n", sizeof(q));
    printf("x的空间大小：%lu字节\n", sizeof(r));

    printf("char类型的空间大小：%lu字节\n", sizeof(char));
    printf("int类型的空间大小：%lu字节\n", sizeof(int));
    printf("double类型的空间大小：%lu字节\n", sizeof(double));

    // 内存中一个字节就是一个单元
    // double 类型占据8个字节，x这个变量关联着一个地址单元。
    // 但是double有8个字节大小，也就是说有8个单元。
    // 那么，x关联的是哪个单元呢？其实是第一个。
    // 同理，ch和a变量都是关联的第一个地址单元。

    // 然后r是获取了x这个变量的地址，这个地址根据上面的理论，我们现在知道这个地址就是第一个地址单元的地址。
    // 那么r

    // q是i的地址，q这个变量指向了i的第一个地址单元，也就是第1个字节。
    // 但是[*q]就代表了i本身，获取到的是i这个完整的变量关联的地址，也就是4个字节。
    // 但是q只存放了i的第1个字节，为什么[*q]可以获取到完整的i地址呢？

    // p、q、r存放的都是某个变量的地址
    // 但是p、q、r存放的都是这个变量地址中的第一个字节。
    // 那么，为什么[*q]可以获取到完整的i地址呢？

    // 因为q是int类型的，所以操作系统就知道从这个保存的第一个字节开始算，往后4个字节的存储地址都是属于i这个变量的
    // 这样就找到了i变量的存储地址。
    
    // 同理，r是double类型的，所以x变量实际的存储空间就是x变量关联的那个字节地址往后8个字节。
    // p变量也一个意思。

    // 但是p、q、r存放的都是这个变量地址中的第一个字节，那为什么输出它们sizeof是4呢？难道不应该是1吗？
    // 为什么p、q、r只存放了一个字节的地址，但是p、q、r却占据4个字节？

    // 我们控制内存有32根线，一根线2个状态。那么就会有2^32种组合。
    // 也就是说，每次通过这32根总线传输的数据，都需要放到内存中的某一个位置。
    // 那么，放到哪里呢？怎么编号呢？
    // 正是因为有2^32种组合，我们可以根据这个组合，给内存的地址编号。
    // 传输过来的数据是哪种组合，我们就把这一次的数据放到对应这个组合的地址中去。
    // 这样子，我们的内存中就有2^32个地址，也就是4G大小。

    // 那么，每一个地址是多大呢？
    // 刚才说过了，每次传递过来的数据都是通过32根线传递过来的。
    // 一根线1bit，那么32根线就是32bit，也就是4byte。
    // 也就是说，每一次传输过来的数据都是4个字节

    // 如果是64位操作系统，那么这个电脑就有64根地址总线。
    // 那么，每一次传输过来的数据就是8个字节了（64bit / 8 = 8byte）。

    // 回到上面的问题，为什么p、q、r只存放了一个字节的地址，但是p、q、r却占据4个字节？
    // 因为不管传输的数据是多大的，我们每一次传输数据，这个数据最终给他准备的存储空间都是4个字节
    // 因为p、q、r代表了内存中某个地址，而这个地址占据的大小始终是4个字节的
    // 不管这个地址中保存的数据是多大的，地址本身始终是4个字节大小！
    // 也就是说，如果某个变量代表的是内存地址。那么这个变量所占的字节数就是固定的，它只和操作系统中的地址总线数量有关系！！！

    // 总结：
    // 一个指针变量到底占多少字节？
    // 它和地址总线数量有关系，32位操作系统就是4个字节，64位操作系统就是8个字节。

}   