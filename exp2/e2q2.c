/*2.	WAP a C program to Convert temperature from Celsius to Fahrenheit using the formula:
 F = (C * 9/5) + 32.*/


 #include<stdio.h>
int main(){
    int C,F;
    printf(" Enter the temrature in celsius");
    scanf("%d", &C);
    F=(C * 9/5) + 32;
    printf("In Fahrenheit, the temprature is %d\n", F);
    return 0;

}