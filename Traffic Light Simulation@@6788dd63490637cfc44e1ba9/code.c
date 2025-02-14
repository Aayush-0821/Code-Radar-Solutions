#include<stdio.h>

int main(){
    char input;
    scanf("%c",&input);
    if(input=='R') printf("Stop");
    else if(input=='G') printf("Go");
    else if(input=='Y') printf("Slow Down");
    else printf("Invalid input");
    return 0;
}