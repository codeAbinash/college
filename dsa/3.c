// Task3: Generating fibonacci series

#include <stdio.h>

#define MAX_SIZE 100

void fibonacci(int n, int *fib) {
  int a = 0, b = 1;
  for (int i = 0; i < n; i++) {
    fib[i] = a;
    int tmp = a;
    a = b;
    b = tmp + b;
  }
}

int main() {
  int fib[MAX_SIZE], length = 10;
  fibonacci(length, fib);
  printf("Fibonacci series: ");
  for (int i = 0; i < length; i++) {
    printf("%d ", fib[i]);
  }
  return 0;
}