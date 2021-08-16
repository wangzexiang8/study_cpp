#include<iostream>

using namespace std;

int main()
{
	int n,b,y;
	
	while(1==1)
	{
	cin>>n;
	b = n;
	y=0;
	while(n>0)
	{
		y=y*10+n%10;
		n = n/10;
	}
	if(b==789)
		break;
	if(b==y)
		cout<<"Yes"<<endl;
	
	else
		cout<<"No"<<endl;
	}
	return 0;	
} 
