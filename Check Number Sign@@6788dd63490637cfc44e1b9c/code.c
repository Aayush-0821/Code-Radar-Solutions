#include<stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    (num>0)?printf("Positive"):(num==0)?printf("Zero"):printf("Negative");
    return 0;
}