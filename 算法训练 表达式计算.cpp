#define LOCAL

#include<stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
int count(string s,int begin,int end);


int rank(char a){
	int rank;
	if(a=='('||a==')'){
		rank=0;
	}else if(a=='+'||a=='-'){
		rank=1;
	}else if(a=='*'||a=='/'){
		rank=2;
	}
	return rank;
}

int main(){
	#ifdef LOCAL
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	string s;
	cin>>s;
	string s1,s2;
	
	char pre_is_num=0;
	char next;
	cout<<s<<endl;
	for(int i=0;i<s.length();i++){
		next=s.at(i);
		if(next>=48&&next<=57){
			s2.insert(s2.length(),string(1,next));
			pre_is_num=1;
		}else{
			if(pre_is_num){
				s2.insert(s2.length(),"#");
			}
			pre_is_num=0;
			if(s1.length()==0){
				s1.insert(s1.length(),string(1,next));
			}else{
				char pre_sign=s1.at(s1.length()-1);
				cout<<next<<endl;
				cout<<rank(next)<<"\t"<<rank(pre_sign)<<endl;
				if(next=='('){
					s1.insert(s1.length(),string(1,next));
					cout<<"s1\t"<<s1<<endl;
					cout<<"s2\t"<<s2<<endl;
				}else if(next==')'){
					cout<<"next=)"<<endl;
					cout<<rank(next)<<"\t"<<rank(s1.at(s1.length()-1))<<endl;
					while(s1.at(s1.length()-1)!='('){
						s2.insert(s2.length(),1,s1.at(s1.length()-1));
						s1.erase(s1.length()-1,1); 
						cout<<"s1\t"<<s1<<endl;
						cout<<"s2\t"<<s2<<endl;
					}
				}if(rank(next)>rank(pre_sign)){
					cout<<"next in  "<<endl;
					s1.insert(s1.length(),string(1,next));
				}else{
					cout<<"next other"<<endl;
					cout<<rank(next)<<"\t"<<rank(s1.at(s1.length()-1))<<endl;
					// ³öÕ»µ½S2
					while(rank(next)<=rank(s1.at(s1.length()-1))){
						cout<<rank(next)<<"\t"<<rank(s1.at(s1.length()-1))<<endl;
						s2.insert(s2.length(),1,s1.at(s1.length()-1));
						s1.erase(s1.length()-1,1); 
						 cout<<"s1\t"<<s1<<endl;
						cout<<"s2\t"<<s2<<endl;
					}
					s1.insert(s1.length(),string(1,next));	 
				}
			}
		}
		
	}
	cout<<s1<<endl;
	cout<<s2<<endl;
	return 0;
} 


