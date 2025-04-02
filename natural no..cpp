#include <stdio.h>
int sumOfSquares(int n) {
    if (n == 1) {
        return 1;
    } else {
        return (n * n) + sumOfSquares(n - 1); 
    }
}
int main() {
    int n;
    printf("Enter a number n: ")
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    printf("The sum of squares of first %d natural numbers is: %d\n", n, sumOfSquares(n));

    return 0;
}
