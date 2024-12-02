#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
const int N=15;
int a[N],b[N],n;
ll mn=LLONG_MAX;

inline void rec(int i,int k,ll cnt,ll sum){
//	cout << i << ' ' << k << ' ' << cnt << " " << sum << '\n';
	if(i==n+1){
		if(cnt!=0 && sum!=0){
//			cout <<  << abs(cnt-sum) << "\n";
			mn=min(mn,abs(cnt-sum));
		}
		return;
	}
	if(k>0){
		int x=0;
		if(b[i]%2==1) x=1;
		int y=b[i]/2+x;
		rec(i+1,k-1,cnt-a[i],sum*y);
	}
	rec(i+1,k,cnt+a[i],sum*b[i]);
	rec(i+1,k,cnt,sum);
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int k;
	cin >> n >> k;
	for(int i=1;i<=n;i++){
		cin >> a[i] >>b[i];
	}
	rec(1,k,0,1);
	cout << mn;
}
