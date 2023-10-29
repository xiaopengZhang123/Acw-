#include<iostream>
using namespace std;

const int N=10;
int arr[N];
bool a[N];
int n;

void dfs(int u){
	if(n==u){
		for(int i=0;i<n;i++){
			printf("%5d",arr[i]);
		}cout<<endl;
		return;
	}
	for(int i=1;i<=n;i++){
		if(!a[i]){
			arr[u]=i;
			a[i]=true;
			dfs(u+1);
			a[i]=false;
		}
	}
}

int main(){
	
	cin>>n;
	dfs(0);
	
	return 0;
}