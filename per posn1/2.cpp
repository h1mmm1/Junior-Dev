#include<bits/stdc++.h>
using namespace std;
const int N=2005;
int a[N];

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		int x,y;
		cin >> x >> y;
		a[abs(x)+abs(y)]++;
	}
	int mx=0;
	for(int i=0;i<N;i++){
		if(a[mx]<a[i]) mx=i;
	}
	cout << mx*2 << ' ' << a[mx];
}
