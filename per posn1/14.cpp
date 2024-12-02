#include<bits/stdc++.h>
using namespace std;
const int N=1e6+5;
int g[N];

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n;
	cin >> n;
	for(int i=1;i<=n-1;i++){
		int u,v;
		cin >> u >> v;
		g[u]++;
		g[v]++;
	}
	int ans=0;
	if(g[1]!=1) ans=1;
	for(int i=1;i<=n;i++){
		if(g[i]>2){
			ans+=g[i]-2;
		}
//		cout << g[i] << "\n";
	}
	cout << ans;
}
