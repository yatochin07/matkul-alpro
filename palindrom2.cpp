#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Fungsi untuk memeriksa dan langsung mencetak apakah kata adalah palindrom atau bukan
void cekPalindrom(string kata) {
    string original = kata;
    // Membalik kata
    reverse(kata.begin(), kata.end());

    // Memeriksa dan langsung mencetak hasilnya
    if (original == kata) {
        cout << original << " adalah palindrom" << endl;
    } else {
        cout << original << " bukan palindrom" << endl;
    }
}

int main() {
    string kata[2]; // Array untuk menyimpan 2 kata

    // Input kata terlebih dahulu
    for (int i = 0; i < 2; i++) {
        cout << "Masukkan kata ke-" << i + 1 << ": ";
        cin >> kata[i];
    }

    // Menampilkan output hasil cek palindrom
    for (int i = 0; i < 2; i++) {
        // Memanggil fungsi cekPalindrom untuk memeriksa dan mencetak hasilnya
        cekPalindrom(kata[i]);
    }

    return 0;
}