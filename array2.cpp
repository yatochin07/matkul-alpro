#include <iostream>
using namespace std;

int main()
{
const int jB = 5;
string nB [jB] = {"Pensil", "Bolpoin", "Penghapus", "Penggaris", "Buku"};
int hB[jB]= {2000, 5000, 3500, 2500, 5000};
int sB[jB] = {10, 15, 20, 5, 8};
char ulang;
int k;

do 
{
int jBl[jB] = {0};
int tH = 0;
int uB = 0;

    cout << "==== TOKO PERALATAN SEKOLAH ====" << endl << endl;
    for (int i = 0; i < jB; i++) {
        cout << i+1 << ". " << nB[i] << "\tRp. " << hB[i] << " (" << sB[i] << " Tersedia)" << endl;
    }
    cout << endl;
    for(int i = 0; i < jB; i++) {
        do {
            cout << "Masukkan jumlah beli untuk " << nB[i] << "\t: "; cin >> jBl[i];
            if (jBl[i] > sB[i]) {
                cout << "Maaf, stok" << nB[i] << " hanya " << sB[i] << " hanya " << sB
                << "Ingin  mengulang? (y/n) : "; cin >> ulang;
            } else if (jBl[i] < sB[i]) {
                tH = jBl[i] * sB[i];
                cout << "Total harga : Rp. " << tH << endl;
                cout << "Masukkan jumlah uang yang dibayarkan : Rp. "; cin >> uB;
                k = uB - tH;
                cout << endl;
                cout << "Kembalian : " << "Rp. " << "Rp. " << k << endl;
            } else {
                cout << "Maaf uang Anda kurang" << endl;
            }
        } while (jBl[i] > sB[i]);
    }

} while (ulang == 'y');

return 0;

}