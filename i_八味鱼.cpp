/*һЩ���ֿ���ӵ�����µ����ʣ�

���� 1����ż���� ���� 2������ 4 �Ҳ����� 12��
 СA ϲ������������ͬʱ���������֣�
Uim ϲ�������ٷ�������һ�����ʵ����֣�
��β��ϲ���պ��з�������һ�����ʵ����֣�
����ϲ�����������������ʵ����֡�*/
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
