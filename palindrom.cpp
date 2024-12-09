#include <iostream>
#include <string>
#include <algorithm>

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
    string kata;

    // Loop untuk 2 kali input kata
    for (int i = 1; i <= 2; i++) {
        cout << "Masukkan kata ke-" << i << ": ";
        cin >> kata;
        
        // Cek apakah kata tersebut palindrom
        if (isPalindrom(kata)) {
            cout << kata << " adalah palindrom" << endl;
        } else {
            cout << kata << " bukan palindrom" << endl;
        }
    }

    return 0;
}