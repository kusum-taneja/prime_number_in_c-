#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int i=2;
	for(int j=n;j<=m;j++){
		for(i=2;i<=j-1;i++){
			if(j%i==0){
				break;
			}
		}
		cout<<j;
		
	}
	
	
	return 0;
}
