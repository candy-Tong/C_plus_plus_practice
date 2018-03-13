#define LOCAL

#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

const double pi=atan(1.0)*4;
int main(){
	#ifdef LOCAL
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int r;
	cin>>r;
	cout.setf(ios::fixed);
	cout.precision(7);
	cout<<r*r*pi<<endl;
	
	
	return 0;
}
