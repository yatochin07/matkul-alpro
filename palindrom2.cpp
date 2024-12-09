#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib> // Untuk system("clear")

using namespace std;

// Fungsi untuk memeriksa dan langsung mencetak apakah kata adalah palindrom atau bukan
void cekPalindrom(string kata) {
    string original = kata;
    // Membalik kata
    reverse(kata.begin(), kata.end());

    // Memeriksa dan langsung mencetak hasilnya
    if (original == kata) {
        cout << kata << " adalah palindrom" << endl;
    } else {
        cout << kata << " bukan palindrom" << endl;
    }
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
        // Memanggil fungsi cekPalindrom untuk memeriksa dan mencetak hasilnya
        cekPalindrom(kata[i]);
    }

    return 0;
}