#define LOCAL


#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	#ifdef LOCAL
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	int sum=0,before=1,after=1,n;
	
	cin>>n;
	if(n==1||n==2){
		cout<<1<<endl;
	}else{
		for(int i=3;i<=n;i++){
			sum=(before+after)%10007;
			before=after;
			after=sum;
			
		}
		cout<<sum<<endl;
	}

	
	return 0;
}
