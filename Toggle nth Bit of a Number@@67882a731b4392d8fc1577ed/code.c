#include<stdio.h>

int main(){
    int num,n;
    scanf("%d %d",&num,&n);
    int bitmask=1<<n;
    printf("%d",num^bitmask);
    return 0;
}