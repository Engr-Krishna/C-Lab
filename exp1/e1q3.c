//3.	Write a program that prompts the user to enter their name and age.
#include<stdio.h>
int main(){
    char name[50];
    int age;
    printf(" Enter your name ");
    scanf("%49s", name);
    printf(" Enter your age");
    scanf("%d", &age);
    printf("name= %s\n", name);
    printf("age= %d", age);
    return 0;

}