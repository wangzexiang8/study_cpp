#include<iostream>

using namespace std;

int main()
{
	int i;
	cin>>i;
	int num,b_num;
	b_num=-1;
	int x_num=1001;
	for(int a=0;a<i;a++)
	{
		
		cin>>num;
		if(b_num<num)
			b_num=num;
		if(x_num>num)
			x_num=num;
		
		
	}
	cout<<b_num-x_num<<endl;
	return 0;
}
