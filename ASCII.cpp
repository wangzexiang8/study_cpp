#include <iostream>

using namespace std;

int main()
{
	int m,n;
	cin>>m>>n;
	for(int i=0;i<m;i++)
	{
		for(int i=0;i<n-1;i++)
		{
			cout<<"*";
			cout<<" ";
		}
		cout<<"*";
		cout<<endl;
	}
	return 0;
}
