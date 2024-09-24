#include <stdio.h>
void arithmeticOperations()
{
    int counter = 0;
    int a = 5, b = 10, c;
    counter++; // Assignment

    c = a + b; // Arithmetic operation
    counter++;

    printf("Sum: %d\n", c);
    counter++;

    printf("Counter: %d\n", counter);
}

int main()
{
    arithmeticOperations();
    return 0;
}

#include <stdio.h>
void compareValues(int x, int y)
{
    int counter = 0;
    if (x > y) {
        counter++; // Comparison
        printf("%d is greater than %d\n", x, y);
        counter++;
    } else {
        counter++;
        printf("%d is not greater than %d\n", x, y);
        counter++;
    }
    printf("Counter: %d\n", counter);
}

int main()
{
    compareValues(15, 10);
    return 0;
}

#include <stdio.h>

void printNumbers(int n)
{
    int counter = 0;
    for (int i = 1; i <= n; i++) {
        counter++; // Loop check
        printf("%d ", i); // Printing statement
        counter++;
    }
    counter++; // Final loop check
    printf("\nCounter: %d\n", counter);
}

int main()
{
    printNumbers(5); // Try with 5 numbers
    return 0;
}

#include <stdio.h>

void printMultiplicationTable(int n)
{
    int counter = 0;
    for (int i = 1; i <= n; i++) {
        counter++; // Outer loop check
        for (int j = 1; j <= n; j++) {
            counter++; // Inner loop check
            printf("%d x %d = %d\n", i, j, i * j);
            counter++;
        }
        counter++; // Final inner loop check
    }
    counter++; // Final outer loop check
    printf("Counter: %d\n", counter);
}

int main()
{
    printMultiplicationTable(3); // 3x3 multiplication table
    return 0;
}

#include <stdio.h>

int fib(int n, int *counter)
{
    (*counter)++; // Function call count
    if (n <= 1) {
        (*counter)++;
        return n;
    }
    return fib(n - 1, counter) + fib(n - 2, counter);
}

int main()
{
    int n = 5, counter = 0;
    int result = fib(n, &counter);
    printf("Fibonacci of %d is %d\n", n, result);
    printf("Counter: %d\n", counter);
    return 0;
}

#include <stdio.h>

void accessArrayElements(int arr[], int n)
{
    int counter = 0;
    for (int i = 0; i < n; i++) {
        counter++; // Loop check
        printf("Element %d: %d\n", i + 1, arr[i]); // Array access
        counter++;
    }
    counter++; // Final loop check
    printf("Counter: %d\n", counter);
}

int main()
{
    int arr[] = {10, 20, 30, 40};
    accessArrayElements(arr, 4);
    return 0;
}
