#include<bits/stdc++.h>
using namespace std;
const int N=1e7+7;
bool a[N];
//int mp[N];
vector<int> p;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n,k,t;
	cin >> n >> k >> t;
	for(int i=2;i*i<N;i++){
		if(a[i]) continue;
		for(int j=i*i;j<N;j+=i){
			a[j]=true;
		}
	}
	a[0]=a[1]=true;
	int id=0;
	p.push_back(2);
//	mp[2]=id;
//	id++;
	for(int i=3;i<N;i+=2){
		if(a[i]==false){
			p.push_back(i);
//			mp[i]=id,id++;
		}
//		cout << mp[i] << "\n";
	}
//	cout << p.size();
//	for(auto e:p) cout << e << ' ';
	auto v=upper_bound(p.begin(),p.end(),n)-p.begin();
	auto w=lower_bound(p.begin(),p.end(),k)-p.begin();
	while(t--){
		int x;
		cin >> x;
		if(a[x]==true) cout << "-1\n";
		else{
			auto u=lower_bound(p.begin(),p.end(),x)-p.begin();
			if(u<w) cout << v-w+u+1 << '\n';
			else cout << u-w+1 << "\n";
		}
//		cout << mp[x] << ' ' << mp[k] << "\n";
	}
}
