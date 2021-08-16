#include<iostream>
using namespace std;
int main(){
	int k,day=0,sum=0;
	cin>>k;
	for(int i=1;;i++){
		for(int j=1;j<=i;j++){
			day++;
			sum+=i;
			if(day==k){
				cout<<sum;
				return 0;
			}
		} 
	}
}
