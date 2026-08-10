// Problem Statement

// Given an integer N, write a recursive function to find the Nth Fibonacci number.
// The Fibonacci sequence is defined as:
// F(0) = 0
// F(1) = 1
// For N ≥ 2,
// F(N) = F(N-1) + F(N-2)
// Your task is to return the Nth Fibonacci number using recursion.

// Input
// A single integer N.

// Output
// Print the Nth Fibonacci number.


#include <iostream>
using namespace std ;

int fibonacci(int n){
    if (n<=1)
    return n;

    int last = fibonacci(n-1);
    int secondlast = fibonacci(n-2);

    return last + secondlast;
}

int main(){
    int n;
    cout << "enter n";
    cin >> n;

    cout << fibonacci(n);

    return 0;
}