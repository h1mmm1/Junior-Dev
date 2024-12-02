#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct{
    char name[35];
    int sum,g,s,c;
} pii;
pii a[100005];

int com(const void *a,const void *b){
    const pii *num1=a;
    const pii *num2=b;
    if(num1->sum < num2-> sum) return 1;
    else if(num1->sum == num2-> sum){
        if(num1->g < num2-> g) return 1;
        else if(num1->g == num2-> g){
            if(num1->s < num2-> s) return 1;
            else if(num1->s == num2-> s){
                if(num1->c < num2-> c) return 1;
                else if(num1->c == num2-> c){
                    return strcmp(num1->name,num2->name);
                }
                else return -1;
            }
            else return -1;
        }
        else return -1;
    }
    else return -1;
}

int main(){
    int n,a1,a2,a3;
    scanf("%d%d%d%d",&n,&a1,&a2,&a3);
    for(int i=1;i<=n;i++){
        scanf("%s",&a[i].name);
        scanf("%d%d%d",&a[i].g,&a[i].s,&a[i].c);
        a[i].sum=a[i].g*a1+a[i].s*a2+a[i].c*a3;
        //printf("%d\n",a[i].sum);
    }
    qsort(a+1,n,sizeof(pii),com);
    for(int i=1;i<=n;i++){
        printf("%s %d\n",a[i].name,a[i].sum);
    }
}

