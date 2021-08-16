#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	int a;
	cin>>a;
	while(a!=1)
	{
		if(a%2==0)
		{
			printf("%d/2=%d\n",a,a/2);
			a = a/2;
		}
		else
		{
			printf("%d*3+1=%d\n",a,a*3+1);
			a = a*3+1;
		}
	}
	cout<<"End"; 
	return 0;
}
