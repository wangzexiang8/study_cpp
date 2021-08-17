#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	for(int i=a;i<=b;i++)
	{
		// »ØÎÄÊý 
		int n=i;
		int z = i;
		int y=0;
		while(n>0)
		{
			y=y*10+n%10;
			n = n/10;
		}
		if(z==y)
		{
			int num=i;
			bool shizhishu=true;
		for(int j=2;j<=sqrt(num);j++)
		{
			if(num%j==0)
				{	
				shizhishu=false;
				break;
				}
	
		}
		if(shizhishu)
			cout<<i<<endl;
		}

	}
		
	return 0;
} 
