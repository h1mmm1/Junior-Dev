#include<bits/stdc++.h>
using namespace std;
char a[10];

int main(){
	//ios::sync_with_stdio(0); cin.tie(0);
	int t=3,e=0,y=4;
	string s;
	cin >> s;
	while(t--){
		int x=(s[e]-'0')*10+s[e+1]-'0';
		for(int i=0;i<=y;i++){
			if(x%2==0) a[i]='1';
			else a[i]='0';
//			i++;
			x/=2;
		}
		for(int i=y;i>=0;i--) cout << a[i];
		if(t!=0) cout << ":";
		if(t==2) y++;
		e+=3;		
	}

	
}
