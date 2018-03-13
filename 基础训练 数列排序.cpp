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
	int a[200];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int min;
	int min_index;
	int temp;
	// sort
	for(int p=0;p<n;p++){
		min=1000000;
		min_index=p;
		for(int q=p;q<=n-1;q++){
			if(min>a[q]){
				min_index=q;
				min=a[q];
			}
		}
		temp=a[p];
		a[p]=a[min_index];
		a[min_index]=temp;
	} 
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}
