#include<iostream>
using namespace std;

const int N=100;
int arr[N];
bool a[N];
char b[N][N];
int cnt=0;

int rd[N];
int d[N];
int col[N];

void dfs(int u){
	if(u==8){
		cnt++;
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				cout<<b[i][j];
			}cout<<endl;
		}cout<<endl;
		return;
	}
	for(int i=0;i<8;i++){
		if(!col[i]&&!d[u-i+8]&&!rd[u+i]){
			b[u][i]='Q';
			col[i]=d[u-i+8]=rd[u+i]=1;
			dfs(u+1);
			col[i]=d[u-i+8]=rd[u+i]=0;
			b[u][i]='.';
		}
	}
}

int main(){
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			b[i][j]='.';
		}
	}
	dfs(0);
	cout<<cnt<<endl;
}