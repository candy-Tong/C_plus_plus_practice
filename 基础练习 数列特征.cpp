#define LOCAL


#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	#ifdef LOCAL
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	int n;
	cin>>n;
	
	int a[10000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	} 
	int max=-20000,min=20000,sum=0;
	
	for(int i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}
		if(min>a[i]){
			min=a[i];
		}
		sum+=a[i];
	} 
	cout<<max<<endl;
	cout<<min<<endl;
	cout<<sum<<endl;
	
	
	
	return 0;
} 
