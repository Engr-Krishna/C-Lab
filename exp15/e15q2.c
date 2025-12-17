//2. Write a program to use shared library in other program.

#ifndef ARITH_H
#define ARITH_H

int add(int a, int b);
int sub(int a, int b);

#endif


// arith.c
#include "arith.h"
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }


// main.c
#include <stdio.h>
#include "arith.h"

int main() {
    int a = 10, b = 5;
    printf("Addition = %d\n", add(a, b));
    printf("Subtraction = %d\n", sub(a, b));
    return 0;
}