#include<bits/stdc++.h>
using namespace std;
const int N=50,M=135;
char a[N][M];

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		memset(a,'.',sizeof a);
		int n;
		cin >> n;
		for(int i=1;i<=(n+1)/2;i++){
			for(int j=1;j<=n;j++){
				if(i+j==(n+1)/2+1) a[i][j]='#';
				if(j-i==n/2) a[i][j]='#';
				if(i+j>(n+1)/2+1 && j-i<n/2) a[i][j]='=';
			}
			for(int j=n;j<=n+n/2-1;j++){
				if(i+j==(n+1)/2+n) a[i][j]='#';
				else if(j==n+n/2-1) a[i][j]='#';
				else if(i+j>(n+1)/2+n) a[i][j]='=';
			}
		}
		a[1][n+n/2-1]='.';
		if(n%2==1){
			for(int i=1;i<=(n+1)/2;i++){
				for(int j=1;j<=n+n/2-1;j++){
					cout << a[i][j];
				}
				cout << "\n";
			}
			for(int i=(n+1)/2-1;i>=1;i--){
				for(int j=1;j<=n+n/2-1;j++){
					cout << a[i][j];
				}
				cout << "\n";
			}			
		}	
		else{
			for(int i=1;i<=(n+1)/2;i++){
				for(int j=1;j<=n+n/2-1;j++){
					if(j==n) cout << a[i][j];
					if(j==n+n/2-2) continue;
					cout << a[i][j];
					
				}
				cout << "\n";
			}
			for(int i=(n+1)/2;i>=1;i--){
				for(int j=1;j<=n+n/2-1;j++){
					if(j==n) cout << a[i][j];
					if(j==n+n/2-2) continue;
					cout << a[i][j];
					
				}
				cout << "\n";
			}
		}
	}
}
