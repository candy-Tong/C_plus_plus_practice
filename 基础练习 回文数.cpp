#define LOCAL

#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	#ifdef LOCAL
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	for(int i=1;i<=9;i++){
		for(int j=0;j<=9;j++){
			cout<<i<<j<<j<<i<<endl;
		}
	}
	
	
	return 0;
}
