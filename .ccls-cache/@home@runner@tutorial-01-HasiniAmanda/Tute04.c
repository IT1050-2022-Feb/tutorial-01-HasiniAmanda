/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

// Function to find the minimum of two numbers
int minimum(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

// Function to find the maximum of two numbers
int maximum(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

// Function to multiply two numbers
int multiply(int a, int b) {
    return a * b;
}

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}
