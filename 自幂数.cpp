#include<bits/stdc++.h>

using namespace std;

int main()
{
	int num;
	cin>>num;
	int num1 = num;
	int weishu=0;
	while(num1!=0)
	{
		weishu+=1;
		num1 = num1 / 10;
	}
	int sum = 0;
	int num2 = num;
	int mywsdsz;
	for(;num2>0;)
	{
		mywsdsz = num2%10;
		sum = sum + pow(mywsdsz,weishu);
		num2 = num2 / 10;
	}
	if(sum==num)
		cout<<"Yes"<<endl;
	else
	 	cout<<"No"<<endl;
	return 0;
}
