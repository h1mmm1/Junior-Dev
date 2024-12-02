#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5,MOD=1e9+7;
long long int dp[N];

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	dp[1]=1;
	dp[2]=2;
	dp[3]=3;
	for(int i=4;i<N;i++){
		dp[i]=4*dp[i-1]+3*dp[i-2]+2*dp[i-3]+1;
		dp[i]%=MOD;
	}
	int t;
	cin >> t;
	while(t--){
		int x;
		cin >> x;
		cout << dp[x] << "\n";
	}
}
