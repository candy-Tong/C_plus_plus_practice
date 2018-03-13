#define LOCAL


#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	#ifdef LOCAL
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	int a[1000];
	int n;
	int find_num;
	int count=0;
	int find=0;
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>find_num;
	
	for(int i=0;i<n;i++){
		count++;
		if(a[i]==find_num){
			find=1;
			cout<<count<<endl;
			break;
		}
	} 
	if(find==0){
		cout<<-1<<endl;
	}
	
	
	
	return 0;
} 
