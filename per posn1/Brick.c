#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
char a[30][30];
char s[30];

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%s",s);
        for(int j=1;j<=m;j++){
            a[i][j]=s[j-1];
        }
    }
    for(int k=1;k<=m;k++){
        int x,id=n;
        scanf("%d",&x);
        for(int i=1;i<=n;i++){
            if(a[i][k]!='.'){
                id=i-1;
                break;
            }
        }
        for(int i=1;i<=x;i++){
            a[id][k]='#';
            id--;
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }

}
