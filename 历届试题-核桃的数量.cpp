#define LOCAL

#include<iostream>
#include<stdio.h>
using namespace std;

const int MA=100000+5;

int GCD(int a,int b){
	if(a%b==0){
		return b;
	}else{
		GCD(b,a%b);
	}
}

int main(){
	#ifdef LOCAL
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	int a,b;
	cin>>a;
	int gcd;
	int gbs;
	while(cin>>b){
		gcd=GCD(a,b);
		gbs=a*b/gcd;
		a=gbs;
	}
	cout<<a<<endl;
	return 0;
	
}
