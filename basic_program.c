#include <stdio.h>
int factorial(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}
int fibonacci(int n)
{
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    printf("Hello World\n");
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = factorial(num);
    printf("Factorial of %d is %d\n", num, result);
    result = fibonacci(num);
    printf("Fibonacci of %d is %d\n", num, result);

    return 0;
}
