#include<iostream>

using namespace std;

int main()
{
	int x,y,sum;
	sum=0;
	cin>>x>>y;
	//p*q=x*y
	for(int p=x;p<=y;p++)
	{
		for(int q=x;q<=y;q++)
		{
			if((p*q==x*y)&&(p%x==0)&&(q%x==0)&&(y%p==0)&&(y%q==0))
			{
				sum++;
				cout<<p<<" "<<q<<endl;
			}
		}
	}
	cout<<sum;
	return 0;
}
