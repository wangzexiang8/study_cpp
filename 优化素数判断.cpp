/*
题目描述
程序细节：如何不超时！ 合理使用break； 尽量让循环少运算； 输出 从2 到n 之间 所有的素数。 如果n也是，也输出n。

输入格式
一个整数n n<=1000000

输出格式
多行数据，每行一个素数，从小到大顺序输出。

样例
input

10
output

2
3
5
7
*/

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int num;
	bool shizhishu=true;
	cin>>num;
	if(num==1)
	{
		shizhishu=false;
	}

	for(int i=2;i<=sqrt(num);i++)
	{
		if(num%i==0)
			{	
			shizhishu=false;
			break;
			}
	
	}
	if(shizhishu)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	
	return 0;
 } 
