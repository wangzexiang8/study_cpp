#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	double n,m=4,PI;
	n = 4*sqrt(1.0/2.0);
	int i,num=4;
	cin>>i;
	while (num<=i)
	{
		PI = (m+n)/2;
		m = 2*m*n/(m+n);
		n = sqrt(n*m);
		num = num*2;
	}
	cout<<PI<<endl;
	return 0;	
} 
