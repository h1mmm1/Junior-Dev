#include<bits/stdc++.h>
using namespace std;
const int N=105,M=40005;
int a[N];
bool chk[M];

bool chkp(int n){
	string s=to_string(n);
	int x=s.size();
	for(int i=0;i<x/2;i++){
		if(s[i]!=s[x-i-1]) return false;
	}
	return true;
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	for(int i=2;i*i<M;i++){
		if(chk[i]==false){
//			cout << i << "\n";
			for(int j=i*i;j<M;j+=i){
				chk[j]=true;
			}
		}
	}
	chk[1]=chk[0]=true;
	long long int sum=0,cnt=0;
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			for(int k=j+1;k<=n;k++){
				for(int e=k+1;e<=n;e++){
					int x1=a[i]+a[j]+a[k];
					int x2=a[i]+a[j]+a[e];
					int x3=a[i]+a[e]+a[k];
					int x4=a[e]+a[j]+a[k];
					
					if(chk[x1] || chk[x2] || chk[x3] || chk[x4]) continue;
//					cout << x1 << ' ' << x2 << ' ' << x3 << ' ' << x4 << "\n";
					if(chkp(x1+x2)==false && chkp(x1+x3)==false && chkp(x1+x4)==false && chkp(x2+x3)==false && chkp(x2+x4)==false && chkp(x3+x4)==false) continue;
					cnt++;
					sum+=x1+x2+x3+x4;
					
				}
			}
		}
	}
	cout << sum/3 << ' ' << cnt;
}
