#include<bits/stdc++.h>
using namespace std;
const int N=1e6+5;
int a[N],ans[N];

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n;
	cin >> n;
	for(int i=1;i<=n;i++) cin >> a[i];
	stack<int> s;
	for(int i=1;i<=n;i++){
		while(!s.empty() && a[s.top()]>a[i]){
			ans[s.top()]=i-s.top();
			s.pop();
		}
		s.push(i);
	}
	for(int i=1;i<=n;i++) cout << ans[i] << ' ';
}
