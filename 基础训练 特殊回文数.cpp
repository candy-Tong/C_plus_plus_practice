#define LOCAL

#include <stdlib.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	#ifdef  LOCAL
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	int sum;
	cin>>sum;
	
	char num[7];
	int length;
	int is_result;
	int this_sum;
	for(int i=10000;i<1000000;i++){
		this_sum=0;
		sprintf(num,"%d",i);
		string s(num);
		length=i<100000?5:6;
		is_result=1;
		for(int j=0;j<=(length-1)/2;j++){		
			if(s.at(j)!=s.at(length-1-j)){
				is_result=0;
				break;
			}else{
				if(length-1-j!=j){
					this_sum=this_sum+(s.at(j)-'0')+(s.at(length-1-j)-'0');
				}else{
					this_sum=this_sum+(s.at(j)-'0');
				}
				if(this_sum>sum){
					is_result=0;
					break;
				}
			}
		}
		if(is_result==1&&this_sum==sum){
			cout<<i<<endl;
		}
	}
	
	
	
	
	return 0;
}
