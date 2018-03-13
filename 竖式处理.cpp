#define LOCAL

#include<iostream>
#include<string.h>
#include<stdio.h>
#include <stdlib.h>
using namespace std;

string s;
int size;

int check(string checkString){

	for(int i=0;i<checkString.size();i++){
		int is_in=0;
		for(int j=0;j<s.size();j++){
			if(s.at(j)==checkString.at(i)){
				is_in=1;
				break;
			}
		}
		if(is_in==0){
			return 0;
		}
	}
	return 1;
}

int is_right(string x,string y){
	char temp[10];
	int ok[5];
	ok[0]=check(x);
	ok[1]=check(y);
	sprintf(temp,"%d",atoi(x.c_str())*(y.at(0)-'0'));
	ok[2]=check(string(temp));
	sprintf(temp,"%d",atoi(x.c_str())*(y.at(1)-'0'));
	ok[3]=check(string(temp));
	sprintf(temp,"%d",atoi(x.c_str())*atoi(y.c_str()));
	ok[4]=check(string(temp));
	//cout<<ok[0]<<' '<<ok[1]<<' '<<ok[2]<<' '<<ok[3]<<' '<<ok[4]<<endl;
	return ok[0]&&ok[1]&&ok[2]&&ok[3]&&ok[4];
}

int main(){
	#ifdef LOCAL
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	char num[10];
	cin>>num;
	s=string(num);
	
	char x[4];
	char y[4];
	for(int i=111;i<999;i++){
		sprintf(x,"%d",i);
		for(int j=11;j<99;j++){
			sprintf(y,"%d",j);
			
			if(is_right(string(x),string(y))){
				cout<<x<<' '<<y<<endl;
			}
		}
	}
	
		
	
}
