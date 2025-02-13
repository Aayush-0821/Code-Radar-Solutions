#include<stdio.h>

int main(){
    char ch;
    scanf("%c",&ch);
    (ch>=65 && ch<=90)?printf("Uppercase"):printf("Lowercase");
    return 0;
}