#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n;
	int num;
	cin>>n;
	for(int num=2;num<n;num++)
	{
		
	bool shizhishu=true;
	
	if(num==1)
	{
		shizhishu=false;
	}

	for(int i=2;i<=sqrt(num);i++)
	{
		if(num%i==0)
			{	
			shizhishu=false;
			break;
			}
	
	}
	if(shizhishu)
		cout<<num<<endl;	
	} 

	
	return 0;
 } 
