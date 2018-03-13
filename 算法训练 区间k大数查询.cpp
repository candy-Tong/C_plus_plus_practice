#define LOCAL

#include<iostream>
#include<stdio.h>
#include <string.h>
#include<algorithm>
using namespace std;

const int MAX=1100;

int main(){
	#ifdef LOCAL
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	int a[MAX];
	int b[MAX];
	int m,n,count=0;
	cin>>m;
	while(m>count){
		cin>>a[count++];
	}
	
	cin>>n;
	count=0;
	int l,r,k;
	while(n>count){
		cin>>l>>r>>k;
		
		memcpy(b,a+l-1,(r-l+1)*sizeof(int));
		
		sort(b,b+r-l+1);
		/*
		for(int i=0;i<r-l+1;i++){
			cout<<b[i]<<' ';
		}
		cout<<endl;
		*/
		//cout<<*(a+l);
		cout<<b[r-l+1-k]<<endl;
		
		count++;
	}
	
	return 0;
	
}
