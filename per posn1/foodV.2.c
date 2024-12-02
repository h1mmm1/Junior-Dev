#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool a[10];
int vis[10];
bool chk[10];
int n,m;

void rec(int x){
    if(x==n+1){
        if(a[vis[1]]==false){
            for(int i=1;i<=n;i++){
                printf("%d ",vis[i]);
            }
            printf("\n");
            return;
        }

    }
    for(int i=1;i<=n;i++){
        if(chk[i]==false){
            chk[i]=true;
            vis[x]=i;
            rec(x+1);
            vis[x]=0;
            chk[i]=false;
        }
    }
}

int main(){
    scanf("%d%d",&n,&m);
    for(int i=1;i<=m;i++){
        int x;
        scanf("%d",&x);
        a[x]=true;
    }
    rec(1);
}
