/*
    Project: Simple Calculator
    Author : Obalu Butuba DSE-01-0786/2021
    Date   : Oct 21, 2021
    Compiler : GCC
    Language : C99
    License  : MIT

    A program that accepts two numbers and computes the
    sum, difference, product, quotient and modulus of the
    two numbers.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declarations.
    int num1;
    int num2;
    int sum;
    int diff;
    int prod;
    int mod;
    float quot;

    //input of numbers to be computed.
    printf(" enter number:");
    scanf("%d", &num1);

    printf("\n enter number:");
    scanf("%d", &num2);


    //computations.
    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;
    quot = (float)num1 / num2;
    mod = num1 % num2;


    //output
    printf("\n");
    printf("the computations are:\n\n");
    printf("sum is: %d + %d = %d\n", num1, num2, sum);
    printf("difference is: %d - %d = %d\n", num1, num2, diff);
    printf("product is: %d * %d = %d\n", num1, num2, prod);
    printf("quotient is: %d / %d = %f\n", num1, num2, quot);
    printf("modulus is: %d mod %d = %d\n", num1, num2, mod);


    return 0;
}
