#include<stdio.h>

int isPrime(int number);

int main(){
    int num;
    scanf("%d",&num);
    if(isPrime(num)) printf("Prime");
    else printf("Not Prime");
    return 0;
}

int isPrime(int number){
    for(int i=2;i<=number/2;i++){
        if(number%i==0) return 0;
    }
    return 1;
}