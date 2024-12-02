#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n;
	string chk,s;
	cin >> n >> s >> chk;
	stack<char> c1,c2;
	if(n%2==1){
		cout << "NO";
		return 0;
	}
	for(int i=0;i<n;i++){
		if(chk[i]=='1') c2.push(s[i]);
		else if(s[i]=='(') c1.push(s[i]);
		else if(s[i]==')' && !c1.empty()) c1.pop();
		else if(s[i]==')' && c1.empty()){
			if(c2.empty()){
				cout << "NO";
				return 0;
			}
			else c2.pop();
		}
	}
	while(!c1.empty()) c1.pop();
	while(!c2.empty()) c2.pop();
	for(int i=n-1;i>=0;i--){
		if(chk[i]=='1') c2.push(s[i]);
		else if(s[i]==')') c1.push(s[i]);
		else if(s[i]=='(' && !c1.empty()) c1.pop();
		else if(s[i]=='(' && c1.empty()){
			if(c2.empty()){
				cout << "NO";
				return 0;
			}
			else c2.pop();
		}
	}		
	cout << "YES";

	
}

