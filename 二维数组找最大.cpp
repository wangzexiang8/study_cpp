#include<iostream>
#include<ctime>
#include<cstdlib>
 
using namespace std;

int main()
{
	srand(time(0));
	int all[5][5];
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			int num = rand()%1000+1;
			all[i][j]=num;
		}	
	}	
	
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<all[i][j]<<" ";
		}
		cout<<endl;
	}
	
	int num1=all[0][0];
	int ii=0,jj=0;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(all[i][j]>num1)
			{
				ii=i;
				jj=j;
				num1=all[ii][jj];
			}
		}
	}
	
	cout<<"MAX"<<all[ii][jj]<<endl;
	cout<<ii+1<<" "<<jj+1<<endl;
	return 0;
}
