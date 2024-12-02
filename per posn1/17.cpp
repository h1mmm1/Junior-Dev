#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
const int N=1e6+5,MOD=1e9+7;
ll a[N],b[N];

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	ll n,m,h,k;
	cin >> n >> m >> h >> k;
	for(int i=1;i<n;i++){
		cin >> a[i];
	}
	for(int i=1;i<m;i++){
		cin >> b[i];
	}
	ll l=1,r=1,sum1=0,sum2=0,cnt=0,num1=0,num2=0,x=0;
	while(l<=n){
		while(r<=n && cnt<=k){
			x+=cnt;
			cnt+=a[r++];
		}
		sum1+=x;
		num1+=r-l-1;
		x-=(r-l-1)*a[l];
		cnt-=a[l++];
		sum1%=MOD;
		num1%=MOD;
//		cout << l << ' ' << r << "\n";
	}
//	cout << "----\n";
	x=0,l=1,r=1,cnt=0;
	while(l<=m){
		while(r<=m && cnt<=k){
			x+=cnt;
			cnt+=b[r++];
		}
		sum2+=x;
		num2+=r-l-1;
		x-=(r-l-1)*b[l];
		cnt-=b[l++];
		sum2%=MOD;
		num2%=MOD;
//		cout << l << ' ' << r << "\n";
	}	
//	cout << num1 << ' ' << num2 << ' ' << sum1 << ' ' << sum2 << "\n";
	ll x1=num1*sum2,x2=num2*sum1;
	x1%=MOD,x2%=MOD;
	cout << h/2*(x1+x2)%MOD;
}
/*
3 4 10 10
1 1
1 1 1 
*/
