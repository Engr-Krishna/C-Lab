//4.	Write a C program to add two numbers, take number from user.
#include <stdio.h>

int main() {
    int Number1, Number2, Sum;
    
    printf("Enter number 1");
    scanf("%d", &Number1);

    printf("Enter number 2");
    scanf("%d", &Number2);

    Sum=Number1+Number2;

    printf(" Sum=%d", Sum);

    return 0;
}