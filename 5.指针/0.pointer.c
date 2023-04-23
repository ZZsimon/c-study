# include <stdio.h>


/**
 * 内存和内存地址介绍
 * 
*/

int main(void)
{
    /**
    内存条以字节为单位，就像酒店里的每一个房间，会划分成很多份。
    每一个房间都有编号，对应的每一个字节也有一个编号。
    这个编号就是所谓的内存地址，我们可以根据内存地址找到对应的内存单元

    这个编号是怎么来的呢？

    -----------  cpu将数据放入内存需要确定到底要放到内存中的哪一个单元？ ------------
    而地址总线负责将内存划分区域，根据地址总线的数量。
    地址总线有32根，一根线可以代表两种状态，32根线可以代表2^32种状态。
    第一个状态 0000...000 （32个0）
    第二个状态 0000...001
    ......
    ......
    ......
    最后一个状态 1111...111 （32个1）。

   ------------  这样子，通过32根地址总线不同的状态，就可以确定当前的数据要放到内存中的哪个单元 -----------
    每一个单元都有不同的编号，而这个编号就是根据地址总线的状态来制定的。

    总结：
        【内存地址】就是内存中每一个单元的编号
    */

    return 0;
}