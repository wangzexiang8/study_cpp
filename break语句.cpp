#include<iostream>

using namespace std;

int main()
{
	int sum=0,i=0,num;
	while(1)
	{
		cin>>num;
		
		if(num==-1)
		{
			break;
		}
		sum = sum+num;
		i++;
	}
	cout<<sum/i<<endl;
	return 0;
} 
