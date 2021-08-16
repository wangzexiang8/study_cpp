#include<iostream>

using namespace std;

int main()
{
	int n,num;
	int j=0;
	int sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num;
		if(num<100)
		{
			continue;
		}
		else
		{
			j++;
			sum=sum+num;
		}
	}
	cout<<sum;
	return 0;
	
}
