#define LOCAL

#include<stdio.h> 
#include <iostream>  
using namespace std;  

int main(){
	#ifdef LOCAL
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	long long n;
	cin>>n;
	long long sum=(1+n)*n/2;
	cout<<sum<<endl;
	return 0; 
}
