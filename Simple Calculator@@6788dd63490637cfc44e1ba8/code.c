#include <stdio.h>

int main() {
    int num1, num2;
    char sign;
    scanf("%d %d %c", &num1, &num2, &sign);
    if (sign == '+') printf("%d", num1 + num2);
    else if (sign == '-') printf("%d", num1 - num2);
    else if (sign == '*') printf("%d", num1 * num2);
    else if (sign == '/') {
        if (num2 != 0) printf("%d", num1 / num2);
        else printf("error");
    }
    else if (sign == '%') {
        if (num2 != 0) printf("%d", num1 % num2);
        else printf("error");
    }
    else {
        printf("Error: Invalid operator!");
    }

    return 0;
}