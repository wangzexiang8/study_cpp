#include<iostream>

using namespace std;

int main()
{
	int c,k;
	cin>>k>>c;
	int kk = k-1;
	for(int i=0;i<k;i++)
	{
		for(int i=0;i<kk;i++)
		{
			cout<<" ";
		}
		kk--;
		for(int i=0;i<c-1;i++)
		{
			cout<<"*"<<" ";
		}
		cout<<"*";
		cout<<endl;
	 } 
	return 0;
}
