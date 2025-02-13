#include<stdio.h>

int main(){
    int cost,sell;
    scanf("%d %d",&cost,&sell);
    (sell>cost)?printf("Profit"):(sell==cost)?printf("No Profit No Loss"):printf("Loss");
    return 0;
}