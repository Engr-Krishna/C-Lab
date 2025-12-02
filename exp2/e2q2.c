#include<stdio.h>
int main(){
    int C,F;
    printf(" Enter the temrature in celsius");
    scanf("%d", &C);
    F=(C * 9/5) + 32;
    printf("In Fahrenheit, the temprature is %d\n", F);
    return 0;

}