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
int isPrime(int n) {
    if(n <= 1) return 0;
    for(int i = 2; i*i <= n; i++)
        if(n % i == 0) return 0;
    return 1;
}
// ei file e kichu jinins cnge korlam1
int nthPrime(int n) {
    int count = 0, num = 2;
    while(1) {
        if(isPrime(num)) count++;
        if(count == n) return num;
        num++;
    }
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
    result = nthPrime(num);
    printf("The %d-th prime number is %d\n", num, result);
    

    return 0;
}
