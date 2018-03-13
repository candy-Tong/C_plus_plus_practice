#define LOCAL

#include<iostream>
#include<stdio.h>
using namespace std;


const int MAX=200;
int a[MAX][MAX]={{0}};

void draw(int p,int length){
	int begin=p;
	int line=0;
	for(int i=2;i<length-2;i++){
		a[p+line][begin+i]=1;
	}
	line++;
	
	a[p+line][begin+2]=1;  	
	a[p+line][begin+length-3]=1; 
	line++;
	
	a[p+line][begin]=1; a[p+line][begin+1]=1; a[p+line][begin+2]=1; 
	a[p+line][begin+length-1]=1; a[p+line][begin+length-2]=1; a[p+line][begin+length-3]=1;
	line++;
	
	
	for(;line<length-3;line++){
		a[p+line][begin]=1; a[p+line][begin+length-1]=1;
	}
	
	
	a[p+line][begin]=1; a[p+line][begin+1]=1; a[p+line][begin+2]=1; 
	a[p+line][begin+length-1]=1; a[p+line][begin+length-2]=1; a[p+line][begin+length-3]=1;
	line++;
	
	a[p+line][begin+2]=1;  	
	a[p+line][begin+length-3]=1; 
	line++;
	
	for(int i=2;i<length-2;i++){
		a[p+line][begin+i]=1;
	}
	line++;
	
	
}

int main(){
	#ifdef LOCAL
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	/* for(int i=0;i<MAX;i++){
		for(int j=0;j<MAX;j++){
			cout<<a[i][j]<<' ';
		}
		cout<<endl;
	}
	*/
	
	int n,time=0;
	cin>>n;
	int length=5+n*4;
	int center=length/2;
	while(n>time){
		draw(time*2,length-4*time);
		time++;
	}
	
	a[center][center-1]=1;
	a[center][center+1]=1;
	a[center][center-2]=1;
	a[center][center+2]=1;
	a[center][center]=1;
	
	a[center-1][center]=1;
	a[center+1][center]=1;
	a[center-2][center]=1;
	a[center+2][center]=1;

	
	for(int i=0;i<length;i++){
		for(int j=0;j<length;j++){
			if(a[i][j]==1){
				cout<<'$';
			}else{
				cout<<'.';
			}
		
		}
		cout<<endl;
	}
		
	return 0;
	
}
