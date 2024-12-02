#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	long long int n,cnt=0,sum=0,ans=0;
	cin >> n;
	long long int m=n;
	while(n>0){
		if(n==1){
			ans+=m*m;
			break;
		}
		sum=cnt+n+n-1+n+cnt;
		ans+=sum*2;
		cnt+=2*n+2*(n-2);
		n-=2;
		ans%=MOD;
		cnt%=MOD;
//		cout << sum*2 << "\n";
	}
	ans%=MOD;
	cout << ans;
}
//1 2 3
//8 9 4
//7 6 5
