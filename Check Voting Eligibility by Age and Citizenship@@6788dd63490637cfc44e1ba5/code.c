#include<stdio.h>

int main(){
    int age,citizen;
    scanf("%d %d",&age,&citizen);
    (age>=18 && citizen==1)?printf("Eligible"):printf("Not Eligible");
    return 0;
}