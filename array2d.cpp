#include <iostream>
using namespace std;

int main() {
    int a[3][2];  // Matriks 3x2
    // Input elemen-elemen matriks
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Masukkan elemen matrix ke-[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    // Output Matriks yang dimasukkan
    cout << "\nMatriks yang dimasukkan:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // Perhitungan rata-rata per baris
    cout << "\nRata-rata setiap baris:" << endl;
    for (int i = 0; i < 3; i++) {
        float sum = 0;
        for (int j = 0; j < 2; j++) {
            sum += a[i][j];
        }
        cout << "Baris " << i << ": " << sum / 2 << endl;  // 2 karena ada 2 kolom
    }

    // Perhitungan rata-rata per kolom
    cout << "\nRata-rata setiap kolom:" << endl;
    for (int j = 0; j < 2; j++) {
        float sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += a[i][j];
        }
        cout << "Kolom " << j << ": " << sum / 3 << endl;  // 3 karena ada 3 baris
    }

    return 0;
}