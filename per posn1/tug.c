#include<stdio.h>
#include<stdlib.h>
int a[500005],b[500005],chk[500005];

int com(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}

int cam(const void *a,const void *b){
    return *(int*)b-*(int*)a;
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    for(int i=1;i<=n;i++) scanf("%d",&b[i]);
    qsort(a+1,n,sizeof(int),com);
    qsort(b+1,n,sizeof(int),cam);
    long long int sum=0;
    for(int i=1;i<=n;i++){
        chk[i]=a[i]+b[i];
    }
    qsort(chk+1,n,sizeof(int),com);
    for(int i=2;i<=n;i++){
        sum+=chk[i]-chk[i-1];
    }
    printf("%lld",sum);
}
/*
139 158 168
104 132 140
 35  26  48
*/
