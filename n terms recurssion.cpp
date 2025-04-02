#include <stdio.h>
int sum(int n) {
    if (n == 1)
        return 1;
    else
        return n + sum(n - 1); 
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    printf("The sum of first %d terms is: %d\n",
    return 0;
}
