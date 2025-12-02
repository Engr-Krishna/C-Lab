#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if ((a + b > c) && (b + c > a) && (a + c > b))
     {
        printf("The triangle is valid.\n");
        if (a == b && b == c) {
            printf("It is an Equilateral triangle.\n");
        } 
        else if (a == b || b == c || a == c) {
            printf("It is an Isosceles triangle.\n");
        } 
        else {
            printf("It is a Scalene triangle.\n");
        }
        if ((a*a == b*b + c*c) || 
            (b*b == a*a + c*c) || 
            (c*c == a*a + b*b)) {
            printf("It is also a Right-angled triangle.\n");
        }
    } 
    else {
        printf("The triangle is NOT valid.\n");
    }

    return 0;
}