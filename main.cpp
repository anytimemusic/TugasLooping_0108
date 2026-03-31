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

// Prosedur input
void input() {
    cout << "Masukkan bilangan: ";
    cin >> n;
} 

// Prosedur output hasil prima
void outputPrima() {
    if (cekPrima(n))
        cout << n << " adalah bilangan PRIMA" << endl;
    else
        cout << n << " bukan bilangan PRIMA" << endl;
}

// Prosedur output hasil Fibonacci
void outputFibonacci() {
    if (cekFibonacci(n))
        cout << n << " adalah bilangan FIBONACCI" << endl;
    else
        cout << n << " bukan bilangan FIBONACCI" << endl;
}

// Function menu
void menu() {
    cout << "\n=== MENU PROGRAM ===" << endl;
    cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "0. Keluar" << endl;
    cout << "Pilih menu: ";
    cin >> pilihan;
}

// Prosedur output hasil Fibonacci
void outputFibonacci() {
    if (cekFibonacci(n))
        cout << n << " adalah bilangan FIBONACCI" << endl;
    else
        cout << n << " bukan bilangan FIBONACCI" << endl;
}

// Function menu
void menu() {
    cout << "\n=== MENU PROGRAM ===" << endl;
    cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "0. Keluar" << endl;
    cout << "Pilih menu: ";
    cin >> pilihan;
}

// Main program
int main() {
    while (true) {
        menu();

        switch (pilihan) {
            case 1:
                input();
                outputPrima();
                break;

            case 2:
                input();
                outputFibonacci();
                break;

            case 0:
                cout << "Program selesai. Terima kasih!" << endl;
                return 0;

            default:
                cout << "Pilihan tidak valid!" << endl;
        }
    }
} 