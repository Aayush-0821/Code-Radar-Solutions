#include<stdio.h>

int main(){
    char ch;
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') printf("Vowel");
    else if((int)ch>=30 && (int)ch<=39) printf("Digit");
    else if(ch>=97 && ch<=122) printf("Consonant");
    else printf("Special Character");
    return 0;
}