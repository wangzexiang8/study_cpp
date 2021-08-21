#include<iostream>
#define N m
using namespace std;

int main()
{
	// 1 2 3 2 4 5
	int m;
	cin>>m;
	int wendu[N]={0};
	
	for(int i=0;i<N;i++)
	{
		cin>>wendu[i];
	}
	int tianshu = 1;
	int shangyicitianshu = 0;
	for(int num2=1;num2<=N-1;num2++) 
	{
		if(wendu[num2]-wendu[num2-1]>0)//ÉýÎÂ
		{
			tianshu++;	
		} 
		else
		{
			if(tianshu>shangyicitianshu)
				shangyicitianshu=tianshu;
			tianshu = 1;
		}
		
	}
	cout<<shangyicitianshu<<endl;

	
	return 0;
}
