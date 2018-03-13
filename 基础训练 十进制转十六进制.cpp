#define LOCAL


#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	#ifdef LOCAL
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	long long n;
	cin>>n;
	cout<<hex<<uppercase<<n;


    return 0;
}
