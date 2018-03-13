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
	int a[40][40];
	a[0][0]=1;
	cout<<a[0][0]<<endl;
	for(int i=1;i<n;i++){
		for(int j=0;j<=i;j++){
			if(j==0||j==i){
				a[i][j]=a[i-1][0];

			}else{
				a[i][j]=a[i-1][j]+a[i-1][j-1];
			}
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	return 0;
}
