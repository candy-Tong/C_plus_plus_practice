#define LOCAL


#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	#ifdef LOCAL
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	long long num;
	cin>>hex>>num;
	cout<<num; 
	cout<<hex<<num<<endl;
	return 0;
} 
