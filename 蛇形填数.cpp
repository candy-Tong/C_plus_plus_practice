#define LOCAL
#include<iostream> 
#include<string.h>
using namespace std;
#define MAX 9
int a[MAX][MAX];
int main(){
	int n;
	cin>>n;
	memset(a,0,sizeof(a));
	int x=-1,y=n-1;
	int num=1;
	while(num<=n*n){
		while(x+1<n&&a[x+1][y]==0){
			x++;
			a[x][y]=num++;
		}
		while(y-1>=0&&a[x][y-1]==0){
			y--;
			a[x][y]=num++;
		}
		while(x-1>=0&&a[x-1][y]==0){
			x--;
			a[x][y]=num++;
		}
		while(y+1<n&&a[x][y+1]==0){
			y++;
			a[x][y]=num++;
		}
	}
	
	
	
	
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<' ';
		}
		cout<<endl;
	}
}
