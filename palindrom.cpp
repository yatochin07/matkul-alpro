#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib> // Untuk system("clear")

using namespace std;

// Fungsi untuk memeriksa apakah sebuah kata adalah palindrom
bool isPalindrom(string kata) {
    string original = kata;
    // Membalik kata
    reverse(kata.begin(), kata.end());

    // Memeriksa apakah kata asli sama dengan kata yang dibalik
    return (original == kata);
}

int main() {
    string kata[2]; // Array untuk menyimpan 2 kata

    // Input kata terlebih dahulu
    for (int i = 0; i < 2; i++) {
        cout << "Masukkan kata ke-" << i + 1 << ": ";
        cin >> kata[i];
    }

    // Menggunakan system("clear") untuk membersihkan layar
    system("clear"); // Untuk Unix/Linux, gunakan system("cls") untuk Windows

    // Menampilkan output setelah layar dibersihkan
    for (int i = 0; i < 2; i++) {
        // Cek apakah kata tersebut palindrom
        if (isPalindrom(kata[i])) {
            cout << kata[i] << " adalah palindrom" << endl;
        } else {
            cout << kata[i] << " bukan palindrom" << endl;
        }
    }

    return 0;
}