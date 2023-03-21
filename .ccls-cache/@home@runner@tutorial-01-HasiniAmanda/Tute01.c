/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */


#include <stdio.h>

int main() {
    float mark1, mark2, average;
     
    // Input marks of two subjects
    printf("Enter marks of subject 1: ");
    scanf("%f", &mark1);
    printf("Enter marks of subject 2: ");
    scanf("%f", &mark2);
    
    // Calculate the average of the two marks
    average = (mark1 + mark2) / 2;
    
    // Print the average of the two marks
    printf("The average of the two marks is: %.2f", average);
    
    return 0;
}