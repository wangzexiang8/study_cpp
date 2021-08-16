#include <iostream>		
using namespace std;
int main()			
{
	int a , b;
	int s=1;
	cin >> a >> b;	
	while(b--)		
	{
		s*=a;		
		s%=7;		
	}	
	switch(s)
	{	
	case 1: cout<<"Monday";break;
	case 2:	cout<<"Tuesday"	;break;
	case 3: cout<<"Wednesday";break;
	case 4: cout<<"Thursday";break;
	case 5: cout<<"Friday";break;
	case 6: cout<<"Saturday";break;
	case 0:	cout<<"Sunday";	break;	
	}
	return 0;	
} 

