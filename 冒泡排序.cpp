#include<iostream>

using namespace std;

int main()
{
	int num[10]={0,3,2,4,5,6,1,8,9,7};
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9-i;j++)
		{
			if(num[j]<num[j+1])
			{
				swap(num[j],num[j+1]);
			}
		}
	}
	for(int a=0;a<10;a++)
	{
		cout<<num[a]<<" ";
	}
	
	return 0;
}
