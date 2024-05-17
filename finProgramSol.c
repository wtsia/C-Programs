#include <stdio.h>
#include <stdlib.h>

void PrintArray(int* array, int size) {
    for (int j = 0; j < size; ++j) {
        printf("%d ", array[j]);
    }
}

// Return the first n Fibonacci numbers
// fibonacci(0) = 0, fibonacci(1) = 1, fibonacci(2) = 1
// Ex: n = 5, seq = 0 1 1 2 3
int* Fibonacci(int n) {
    int* seq;
    int j;

   /* Type your code here. */
    seq = malloc(n * sizeof(int)); // Allocate memory for n integers
    if (n > 0) seq[0] = 0; // First Fibonacci number
    if (n > 1) seq[1] = 1; // Second Fibonacci number

    for (int j = 2; j < n; ++j) {
        seq[j] = seq[j - 1] + seq[j - 2];
    }

    return seq;
}

// Return sequence of squares for 1..n (inclusive)
// Ex: sqrn = 3, seq = 1 4 9
int* Squares(int n) {
    int* seq; // Allocate memory for n integers

   /* Type your code here. */
    seq = malloc(n * sizeof(int));
    for (int j = 0; j < n; ++j) {
        seq[j] = (j + 1) * (j + 1); // Square of (j + 1)
    }
    return seq;
}

// Return an array that is a copy of array1 followed by the elements of array2
int* Concatenate(int* array1, int size1, int* array2, int size2) {
    int j;
    int* seq;

   /* Type your code here. */
    seq = malloc((size1 + size2) * sizeof(int)); // Allocate memory for size1 + size2 integers

    for (int j = 0; j < size1; ++j) {
        seq[j] = array1[j]; // Copy elements of array1
    }
    for (int j = 0; j < size2; ++j) {
        seq[size1 + j] = array2[j]; // Copy elements of array2
    }

    return seq;
}

int main(void) {

    int fibn; // Number of Fibonacci numbers
    int sqrn; // Number of squares
    scanf("%d %d", &fibn, &sqrn);

    int* fibs;
    int* sqrs;
    int* conc;

    fibs = Fibonacci(fibn);
    PrintArray(fibs, fibn);
    printf("\n");

    sqrs = Squares(sqrn);
    PrintArray(sqrs, sqrn);
    printf("\n");

    conc = Concatenate(fibs, fibn, sqrs, sqrn);
    PrintArray(conc, fibn + sqrn);
    printf("\n");

    // Free the dynamically allocated memory
    //    free(fibs);
    //    free(sqrs);
    //    free(conc);

   return 0;
}