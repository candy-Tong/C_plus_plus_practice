#define LOCAL


#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	#ifdef LOCAL
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	char c='A';
	int n,m;
	cin>>n>>m;
	
	for(int i=0;i<n;i++){
		
		for(int j=0;j<i&&j<m;j++){
			cout<<char(c+(i-j));
		}
		
		for(int j=i;j<m;j++){
			cout<<char(c+(j-i));

		}
		cout<<endl; 
	}
	
	return 0;
} 
