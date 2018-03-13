#define LOCAL


#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	#ifdef LOCAL
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	int i[5];
	for(int a=0;a<=1;a++){
		for(int a1=0;a1<=1;a1++){
			for(int a2=0;a2<=1;a2++){
				for(int a3=0;a3<=1;a3++){
					for(int a4=0;a4<=1;a4++){
						cout<<a<<a1<<a2<<a3<<a4<<endl;
					}
				}
			}
		}
	}
	
	
	return 0;
}
