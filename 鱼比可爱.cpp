#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	const int m = n;
	int fish[m]={0};
	for(int i=0;i<n;i++)
	{
		cin>>fish[i];
	}
	int num;
	cin>>num;
	int self = fish[num-1];
	int sum=0;
	for(int j=0;j<num-1;j++)
	{
		if(self>fish[j])
			sum++;
	}
	cout<<sum;
	return 0;
 } 
