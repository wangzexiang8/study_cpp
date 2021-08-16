#include<iostream>

using namespace std;

int main()
{
	double y;
	cin>>y;
	double sum;
	int n=1;
	while(sum<=y)
	{
		sum = sum+1.0/n;
		n++;
	}
	cout<<n-1;
	return 0;
}
