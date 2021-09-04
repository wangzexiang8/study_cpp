#include<iostream>

using namespace std;

int main()
{
	int w;
	cin>>w;
	int month[12]={12,43,71,102,132,163,193,224,254,285,316,346}; 
	for(int i=0;i<12;i++)
	{
		int a = month[i];
		if((a%7+w-1)%7==4)
		cout<<i+1<<endl;
	}
	return 0;
}
