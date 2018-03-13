#define LOCAL

#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	#ifdef LOCAL
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	char c;
	cin>>c;
	cout<<char(c+32);
	
	
	return 0;
} 
