#include<stdio.h>

int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    ((num1<0 && num2<0) || (num1>0 && num2>0))?printf("Same Sign"):printf("Different Sign");
    return 0;
}