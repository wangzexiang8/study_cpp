#include<iostream>
#include<cstdlib>
#include<ctime>

//[ )
#define random(a,b) (rand()%(b-a)+a)
using namespace std;

int main()
{	
	
	srand((int)time(0));
	cout<<random(1,10);
	return 0;
} 
