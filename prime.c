#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i*i<= n; i++) {
        if (n % i == 0) {
            return false; // If divisible by any number other than 1 and itself, it is not prime
        }
    }
    return true; // If not divisible by any number other than 1 and itself, it is prime
}

int main() {
    int n;

    // Reading an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Checking if the number is prime and printing the result
    if (isPrime(n)) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}

