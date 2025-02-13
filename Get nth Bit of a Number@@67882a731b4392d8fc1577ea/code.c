#include<stdio.h>

int main(){
    int num,n;
    scanf("%d %d",&num,&n);
    if(n<0 || n>=sizeof(int)*8) printf(1);
    else printf(0);
    return 0;
}