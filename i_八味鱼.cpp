/*一些数字可能拥有以下的性质：

性质 1：是偶数； 性质 2：大于 4 且不大于 12。
 小A 喜欢这两个性质同时成立的数字；
Uim 喜欢这至少符合其中一种性质的数字；
八尾勇喜欢刚好有符合其中一个性质的数字；
正妹喜欢不符合这两个性质的数字。*/
#include<iostream>
#include<cstdio>

using namespace std;

int main(){
    int d,i,j;
    scanf("%d", &d);
    i = (d%2==0) ? 1 : 0;
    j = (d>4&&d<=12) ? 1 : 0;
    if((i+j)==2)
    {
        printf("1 ");
    }
    else
    {
        printf("0 ");
    }
    if((i+j)%2||(i+j)==2)
    {
        printf("1 ");
    }
    else
    {
        printf("0 ");
    }
    if((i+j)%2)
    {
        printf("1 ");
    }
    else
    {
        printf("0 ");
    }
    if((i+j)==0)
    {
        printf("1 ");
    }
    else
    {
        printf("0 ");
    }

    return 0;
}
