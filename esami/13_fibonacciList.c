#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
Exercise 3 (10 points).
 Implement a C function ​FibonacciList(n) that, given in input an integer n, generates a Fibonacci list,
 where the i-th number of the Fibonacci sequence is stored in the Fib(i)-th element of the list, with 2 <= i <= n.
  All other elements of the list contain the value -1.
  Write a C program that:
      1. Asks the user to input a number ​n​ greater than 100;
      2. Calls ​FibonacciList(n)
      3. Prints the content of the list generated by the function, with the elements separated by a single  space

  Example ​ : n: 13,  1 → 2 → 3 → -1 → 5 → -1 → -1 → 8 → -1 → -1 → -1 → -1 → 13
  */




int* FibonacciList(n){
    int fibonacci [n];
    int* fibo = malloc(sizeof(int) * n);
    int i;
    int j = 0;
    fibonacci[0] = 1;
    fibonacci[1] = 2;
    int last = 2;
    for(i = 2; last < n; i++){
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
        last = fibonacci[i];
    }
    for(i = 0; i < n; i++){
        if (fibonacci[j] == i + 1){
            fibo[i] = fibonacci[j];
            j++;
        }
        else{
            fibo[i] = -1;
        }
    }
    return fibo;
}



void main(){
    printf("Insert a number greater than 99 pls... \n");
    int n;
    int i;
    scanf("%d", &n);
    int* fibo = FibonacciList(n);
    for (i = 0; i < n; i++){
        printf("%d ", fibo[i]);
    }
}