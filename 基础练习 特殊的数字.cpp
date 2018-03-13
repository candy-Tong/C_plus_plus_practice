#define LOCAL


#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	#ifdef LOCAL
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	char c[4];
	int bai,shi,ge;
	for(int i=100;i<1000;i++){
		sprintf(c,"%d",i);
		string s(c);
		bai=(s.at(0)-'0');
		shi=(s.at(1)-'0');
		ge=(s.at(2)-'0');
		if(i==bai*bai*bai+shi*shi*shi+ge*ge*ge){
			cout<<i<<endl;
		}
	}
	
	
	return 0;
}
