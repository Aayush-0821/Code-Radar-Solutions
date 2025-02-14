#include<stdio.h>

int main(){
    int num1,num2;
    char sign;
    scanf("%d %d %c",&num1,&num2,&sign);
    if(sign=='+') printf("%d",num1+num2);
    else if(sign=='-') printf("%d",num1-num2);
    else if(sign=='*') printf("%d",(int)num1*num2);
    else if(sign=='/') printf("%d",num1/num2);
    else printf("%d",num1%num2);
    return 0;
}