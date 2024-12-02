#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	long long int n,ans;
	cin >> n;
	for(long long int i=0;i<64;i++){
		if(n<(1ll<<i)){
			ans=1ll<<(i-1);
			break;
		}
//		cout << (1ll<<i) << "\n";
	}
	ans=(n-ans)*2+1;
	cout << ans;
}
