#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	ll t;
	cin >> t;
	while(t--){
		ll n,x;
		cin >> n >> x;
		n--;
		while(n--){
			string s;
			cin >> s;
			ll cnt=0;
			for(auto e:s){
				cnt=cnt*10+e-'0';
				cnt%=x;
			} 
			cout << cnt << "\n";
		}
	}
}
