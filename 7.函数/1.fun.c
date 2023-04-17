# include <stdio.h>

// 函数中的变量叫做形参
void max(int i,int j){
    if(i > j){
        printf("%d\n",i);
    }else{
        printf("%d\n",j);
    }
}

int add(int a,int b)
{
    int res = a +b;
    return res;
}

void g(void){ 

}

int main(void)
{
    int a,b,c,d,e,f;

    a = 1,b = 2,c = 3,d = 9,e = -5,f = 100;

    max(a, b);

    max(c, d);
    max(e, f);

    int res=add(1,2);
    printf("%d\n",res);

    // g函数没有返回值  
    // int v = g();

    return 0;
}