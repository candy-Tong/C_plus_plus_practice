#define LOCAL
#include <stdio.h>

#include<iostream>
using namespace std;

int main(){
	#ifdef LOCAL
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	int n=0x10;
	char c[100];
	
	
	sscanf(n,"%x","A1");
	
	cout<<n<<endl;
	
	return 0; 
}
