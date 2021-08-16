#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int num;
	bool shizhishu=true;
	cin>>num;
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
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	
	return 0;
 } 
