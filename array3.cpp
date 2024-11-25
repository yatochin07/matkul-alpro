#include <iostream>
using namespace std;

int main() {
    const int jB = 5;
    string nB[jB] = {"Pensil", "Bolpoin", "Penghapus", "Penggaris", "Buku"};
    int hB[jB] = {2000, 5000, 3500, 2500, 5000};
    int sB[jB] = {10, 15, 20, 5, 8};
    char ulang;
    int k;

    do {
        int jBl[jB] = {0};  // Jumlah beli per barang
        int tH = 0;         // Total harga
        int uB = 0;         // Uang yang dibayar

        cout << "==== TOKO PERALATAN SEKOLAH ====" << endl << endl;
        
        // Menampilkan daftar barang dan stok
        for (int i = 0; i < jB; i++) {
            cout << i + 1 << ". " << nB[i] << "\tRp. " << hB[i] << " (" << sB[i] << " Tersedia)" << endl;
        }
        cout << endl;

        // Input jumlah beli untuk setiap barang
        for (int i = 0; i < jB; i++) {
            do {
                cout << "Masukkan jumlah beli untuk " << nB[i] << ": "; 
                cin >> jBl[i];

                // Jika jumlah beli melebihi stok
                if (jBl[i] > sB[i]) {
                    cout << "Maaf, stok " << nB[i] << " hanya " << sB[i] << ". ";
                    cout << "Ingin mengulang? (y/n) : "; 
                    cin >> ulang;
                    if (ulang == 'n') break;
                }
                // Jika jumlah beli valid
                else if (jBl[i] <= sB[i] && jBl[i] > 0) {
                    tH += jBl[i] * hB[i]; // Menghitung total harga
                    sB[i] -= jBl[i]; // Mengurangi stok
                    break;
                } 
                // Jika input tidak valid
                else {
                    cout << "Jumlah beli tidak valid. Harap masukkan jumlah yang positif!" << endl;
                }
            } while (jBl[i] > sB[i] || jBl[i] <= 0);

        }

        // Menampilkan total harga
        cout << "Total harga: Rp. " << tH << endl;
        
        // Input uang yang dibayar
        cout << "Masukkan jumlah uang yang dibayarkan: Rp. "; 
        cin >> uB;
        
        // Menghitung kembalian
        if (uB >= tH) {
            k = uB - tH;
            cout << "Kembalian: Rp. " << k << endl;
        } else {
            cout << "Maaf, uang Anda kurang!" << endl;
        }

        // Menampilkan sisa stok barang
        cout << endl << "===== SISA STOK BARANG =====" << endl;
        for (int i = 0; i < jB; i++) {
            cout << i + 1 << ". " << nB[i] << ": " << sB[i] << " Tersisa" << endl;
        }

        // Menanyakan apakah ingin membeli lagi
        cout << endl << "Apakah ingin membeli lagi? (y/n): ";
        cin >> ulang;

    } while (ulang == 'y');

    cout << "Terima kasih telah berbelanja di toko kami!" << endl;

    return 0;
}