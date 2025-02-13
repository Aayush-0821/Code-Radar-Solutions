#include<stdio.h>

int main(){
    int num,n;
    scanf("%d %d",&num,&n);
    if(n<0 || n>=sizeof(int)*8) printf(sizeof(int)*8-1);
    return 0;
}