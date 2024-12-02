#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool a[8000005];

int main(){
    int n;
    scanf("%d",&n);
    for(int i=2;i*i<8000005;i++){
        if(a[i]==false){
            for(int j=i*i;j<8000005;j+=i){
                a[j]=true;
            }
        }
    }
    n--;
    if(n==0) printf("2");
    else{
        for(int i=3;i<8000005;i+=2){
            if(a[i]==false){
                n--;
                if(n==0){
                    printf("%d",i);
                    return 0;
                }
            }
        }
    }
}
