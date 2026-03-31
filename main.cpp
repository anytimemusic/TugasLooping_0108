#include <iostream>
using namespace std;

// Variabel global
int n, pilihan;

// Function cek bilangan prima
bool cekPrima(int x) {
    if (x <= 1) return false;

    int i = 2;
    while (i <= x / 2) {
        if (x % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}

// Function cek bilangan Fibonacci
bool cekFibonacci(int x) {
    int a = 0, b = 1, c;

    while (a <= x) {
        if (a == x) {
            return true;
        }
        c = a + b;
        a = b;
        b = c;
    }
    return false;
} 