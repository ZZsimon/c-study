```sh
# 使用gcc编译器可以将c文件编译为可直接运行的二进制文件
gcc hello.c 

# 会自动生成a.out文件，a表示all的意思
```

## gcc编译过程

- 预处理：xx.c生成xx.i
- 编译：xx.i生成xx.s
- 汇编：xx.s生成xx.o
- 链接：xx.o生成可执行文件


## gcc编译过程的每个阶段命令

- 预处理
```sh
# 生成hello.i文件，hello.i文件中的内容是经过预处理的c代码
gcc -E hello.c -o hello.i
```

- 编译
```sh
# 将预处理后的c文件编译成汇编语言，hello.s 
gcc -S hello.i -o hello.s 
```

- 汇编
```sh
# 将汇编语言生成目标文件hello.o，但是缺少c语言底层库的支持
gcc -c hello.s -o hello.o 
```

- 链接
```sh
# 目标生成可执行文件
gcc hello.o -o hello
```
