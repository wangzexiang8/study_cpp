#include <cstdio>
using namespace std;
int main()
{
    int n,c,level = 1;//levelΪ�ܴ�ӡ��ɳ©������������ʼ��Ϊ1
    int need_num = 1;//need_numΪ��ӡɳ©��Ҫ�ķ��Ÿ���
    scanf("%d",&n);//�����ַ�����
    getchar();//���յ��ո�
    c = getchar();//�����ַ�
    while(n / need_num){//����n���������ܴ�ӡ�ġ����ɳ©�����õ��ķ��ž����ܶ࣬�������
        level += 2;
        need_num += 2 * level;
    }
    need_num -= 2 * level;//�˳�ѭ��ʱ�����Ҫ�ķ��Ÿ��������һ��
    level -= 2;//�˳�ѭ��ʱ���������һ�Σ�ע������һ�е�˳�򣬲��ɵߵ���
    for(int i = level; i >= level / 2 + 1; i--){//�ȴ�ӡɳ©���ϰ벿�ּ����Ĳ���
        for(int k = 0; k < level - i; k++){//��ӡ�ո�
            printf(" ");
        }
        for(int j = 0; j < 2 * i - level; j++){//��ӡ����
            printf("%c",c);
        }
        printf("\n");
    }
    for(int i = level / 2; i >= 1; i--){//�ٴ�ӡɳ©���°벿��
        for(int k = 0; k < i - 1; k++){//��ӡ�ո�
            printf(" ");
        }
        for(int j = 0; j < level - 2 * (i - 1); j++){//��ӡ����
            printf("%c",c);
        }
        printf("\n");
    }
    printf("%d",n - need_num);//���ʣ��û�õ��ķ�����
    return 0;
}

