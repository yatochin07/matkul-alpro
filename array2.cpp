#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int jB = 5; // Jumlah barang
    string nB[jB] = {"Pensil", "Bolpoin", "Penghapus", "Penggaris", "Buku"};
    int hB[jB] = {2000, 5000, 3500, 2500, 5000};  // Harga barang
    int sB[jB] = {10, 15, 20, 5, 8};  // Stok barang
    char ulang;
    int k;  // Kembalian
    int jBl[jB];  // Jumlah beli

    do {
        int tH = 0;  // Total harga
        int uB = 0;  // Uang yang dibayarkan

        cout << endl;
        cout << "==== TOKO PERALATAN SEKOLAH ====\n"<< endl;
        for (int i = 0; i < jB; i++) {
            cout << i+1 << ". " << nB[i] << "\tRp. " << hB[i] << " (" << sB[i] << " Tersedia)" << endl;
        }
        cout << endl;

        // Proses pembelian barang
        for (int i = 0; i < jB; i++) {
            cout << "Masukkan jumlah beli untuk " << nB[i] << "\t: ";
            cin >> jBl[i];

            // Validasi jumlah beli
            while (jBl[i] < 0) {
                cout << "Jumlah beli salah. Masukkan ulang jumlah beli untuk " << nB[i] << "\t: ";
                cin >> jBl[i];
            }

            if (jBl[i] > sB[i]) {
                cout << "Maaf, stok " << nB[i] << " hanya " << sB[i] << ". Masukkan ulang jumlah beli\t: ";
                cin >> jBl[i];
            }

            tH += hB[i] * jBl[i];  // Tambahkan total harga
            sB[i] -= jBl[i];  // Kurangi stok barang yang dibeli
        }

        cout << endl;
        cout << "Total harga\t: Rp. " << tH << endl;
        cout << "Masukkan jumlah uang yang dibayarkan\t: Rp. ";
        cin >> uB;
        cout << endl;

        // Hitung kembalian
        k = uB - tH;
        cout << "Kembalian\t: Rp. " << k << endl;

        // Tampilkan sisa stok barang
        cout << endl;
        cout << "==== SISA STOK BARANG ====\n";
        for (int i = 0; i < jB; i++) {
            cout << i+1 << ". " << nB[i] << "\tRp. " << hB[i] << " (" << sB[i] << " Tersedia)" << endl;
        }

        // Tanyakan apakah ingin membeli lagi
        cout << endl;
        cout << "Apakah Anda ingin membeli lagi? (y/n)\t: ";
        cin >> ulang;

    } while (ulang == 'y');
        cout << endl;
        cout << "Terima kasih telah berbelanja di toko kami!" << endl;

    return 0;
}
