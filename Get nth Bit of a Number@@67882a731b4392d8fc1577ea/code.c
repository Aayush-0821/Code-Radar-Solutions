#include<stdio.h>

int main(){
    int num,n;
    scanf("%d %d",&num,&n);
    if(n>=sizeof(int)*8) printf("0");
    else printf("1");
    return 0;
}