#include <iostream>

using namespace std;

int main(){
    int kode;
    cout << "Masukan kode barang :";
    cin >> kode;

    switch (kode)
    {
    case 1:
        cout << "Barang Elextronik \r\n";
        cout << "Produk Teknologi Canggih \r\n";
    break;
    case 2:
        cout << "Fashion \r\n";
        cout << "Produk Mode & Gaya";
    break;
    case 3:
        cout << "Peralatan Rumah Tangga \r\n";
        cout << "Produk untuk kebutuhan sehari-hari di rumah.";
    break;
    default:
        cout << "Kode tidak valid atau tidak ditemukan";
    break;
    }
}