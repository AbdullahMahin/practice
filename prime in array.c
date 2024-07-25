#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; // If divisible by any number other than 1 and itself, it is not prime
        }
    }
    return true; // If not divisible by any number other than 1 and itself, it is prime
}

int main() {
    int N;

    // Read the size of the array
    scanf("%d", &N);

    int ara[N];

    // Read the elements of the array
    for (int i = 0; i < N; i++) {
        scanf("%d", &ara[i]);
    }

    int primeCount = 0;
    int primes[N]; // Array to store prime numbers

    // Check for prime numbers and store them
    for (int i = 0; i < N; i++) {
        if (isPrime(ara[i])) {
            primes[primeCount++] = ara[i];
        }
    }

    // Print the count of prime numbers
    printf("%d\n", primeCount);

    // Print the prime numbers
    for (int i = 0; i < primeCount; i++) {
        printf("%d ", primes[i]);
    }
    printf("\n");

    return 0;
}
