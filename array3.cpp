#include <iostream>
#include <string>
using namespace std;

struct Barang {
    string nama;
    int harga;
    int stok;
};

void tampilkanBarang(Barang barang[], int n) {
    cout << "TOKO PERALATAN SEKOLAH =====\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << barang[i].nama << " Rp. " << barang[i].harga << " (" << barang[i].stok << " Tersedia)\n";
    }
}

int main() {
    Barang barang[] = {
        {"Pensil", 2000, 10},
        {"Bolpoin", 5000, 15},
        {"Penghapus", 3500, 20},
        {"Penggaris", 2500, 5},
        {"Buku", 5000, 8}
    };
    int n = sizeof(barang) / sizeof(barang[0]);
    char lagi;
    
    do {
        tampilkanBarang(barang, n);
        
        int totalHarga = 0;
        int jumlahBeli[5];
        
        // Input jumlah beli untuk setiap barang
        for (int i = 0; i < n; i++) {
            cout << "Masukkan jumlah beli untuk " << barang[i].nama << ": ";
            cin >> jumlahBeli[i];
            
            // Jika jumlah beli lebih dari stok, sesuaikan
            if (jumlahBeli[i] > barang[i].stok) {
                cout << "Maaf, stok " << barang[i].nama << " hanya " << barang[i].stok << ". Masukkan ulang jumlah beli: ";
                cin >> jumlahBeli[i];
            }
            
            // Hitung total harga
            totalHarga += barang[i].harga * jumlahBeli[i];
            // Kurangi stok barang sesuai jumlah beli
            barang[i].stok -= jumlahBeli[i];
        }
        
        // Tampilkan total harga
        cout << "Total harga: Rp. " << totalHarga << endl;
        
        int uangDibayar;
        cout << "Masukkan jumlah uang yang dibayarkan: Rp. ";
        cin >> uangDibayar;
        
        // Hitung kembalian
        int kembalian = uangDibayar - totalHarga;
        cout << "Kembalian: Rp. " << kembalian << endl;
        
        // Tampilkan sisa stok barang
        cout << "=====SISA STOK BARANG=====\n";
        for (int i = 0; i < n; i++) {
            cout << i + 1 << ". " << barang[i].nama << ": " << barang[i].stok << " Tersisa\n";
        }
        
        // Tanyakan apakah ingin membeli lagi
        cout << "Apakah ingin membeli lagi? (y/n): ";
        cin >> lagi;
        
    } while (lagi == 'y' || lagi == 'Y');
    
    cout << "Terima kasih telah berbelanja di toko kami!" << endl;
    
    return 0;
}