/*
题目描述
已知正整数nn是两个不同的质数的乘积，试求出两者中较大的那个质数。

输入格式
一个正整数nn。

输出格式
一个正整数pp，即较大的那个质数。*/

#include<iostream>
#include<cmath>
using namespace std;

bool shi(int n)
{
	bool shi=true;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			shi=false;
			break;
		} 
		 
	}
	return shi;
}

int main()
{
	bool ting = false;
	int num,m,n;
	cin>>num;
	for(int m=2;m<num-1;m++)
	{
		if(shi(m))
		{
			for(int n=2;n<num-1;n++)
			{
				
				
				if(shi(n))
				{
					if(m*n==num)
					{
						if(m>n)
						{
							cout<<m;
							ting = true;
							break;
						}
						
					}
				}
			}
		}
	if(ting)
	{
		break;
	}
	}
	
	return 0;
}
