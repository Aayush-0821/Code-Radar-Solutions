#include<stdio.h>

int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    (num1>num2)?printf("First"):(num1==num2)?printf("Equal"):printf("Second");
    return 0;
}