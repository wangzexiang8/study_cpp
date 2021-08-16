#include <cstdio>
using namespace std;
int main()
{
    int n,c,level = 1;//level为能打印的沙漏的最大层数，初始化为1
    int need_num = 1;//need_num为打印沙漏需要的符号个数
    scanf("%d",&n);//输入字符个数
    getchar();//吸收掉空格
    c = getchar();//输入字符
    while(n / need_num){//计算n个符号所能打印的“最大沙漏”（用掉的符号尽可能多，层数最大）
        level += 2;
        need_num += 2 * level;
    }
    need_num -= 2 * level;//退出循环时最多需要的符号个数多加了一次
    level -= 2;//退出循环时层数多加了一次（注意与上一行的顺序，不可颠倒）
    for(int i = level; i >= level / 2 + 1; i--){//先打印沙漏的上半部分及中心部分
        for(int k = 0; k < level - i; k++){//打印空格
            printf(" ");
        }
        for(int j = 0; j < 2 * i - level; j++){//打印符号
            printf("%c",c);
        }
        printf("\n");
    }
    for(int i = level / 2; i >= 1; i--){//再打印沙漏的下半部分
        for(int k = 0; k < i - 1; k++){//打印空格
            printf(" ");
        }
        for(int j = 0; j < level - 2 * (i - 1); j++){//打印符号
            printf("%c",c);
        }
        printf("\n");
    }
    printf("%d",n - need_num);//输出剩下没用掉的符号数
    return 0;
}

