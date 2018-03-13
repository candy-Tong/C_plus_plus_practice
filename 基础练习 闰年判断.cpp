#define LOCAL


#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	#ifdef LOCAL
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	int year;
	cin>>year;
	
	if(year%4==0&&year%100!=0){
		cout<<"yes"<<endl;
	}else if(year%400==0){
		cout<<"yes"<<endl;
	}else{
		cout<<"no"<<endl;
	}
	
	
	return 0;
}
