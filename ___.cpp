#include<bits/stdc++.h>
using namespace std;
const int N=105,M=1e4+5;
int a[N][M],dp[N][M];
deque<pair<int,int>> dq;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n,m,k;
	cin >> n >> m >> k;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin >> a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=k+1;j++){
			dq.push_back({dp[i-1][j],j});
		}
		for(int j=1;j<=m;j++){
			while(!dq.empty() && abs(dq.front().second-j)>k) dq.pop_front();
			while(!dq.empty() && dp[i-1][dq.back().second]>=dp[i-1][j]) dq.pop_back();
			dp[i][j]=dq.front().first+a[i][j];
			if(j+k+1<=m) dq.push_back({dp[i-1][j+k+1],j+k+1});
		}
		while(!dq.empty()) dq.pop_back();
	}
	int mx=0;
	for(int i=1;i<=m;i++) mx=max(mx,dp[n][i]);
	cout << mx;
}
