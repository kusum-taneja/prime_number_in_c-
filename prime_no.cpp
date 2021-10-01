#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int num;
	cin>>num;
	for(int i=2;i<num;i++){
		if(num%i==0){
			cout<<"non-prime";
			break;
		}
	}
	if(num==i){
	cout<<num;
		
	}
	
	
	return 0;
}
