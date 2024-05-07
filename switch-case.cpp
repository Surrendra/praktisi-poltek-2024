#include <iostream>

using namespace std;

int main(){
    int code;

    cout << "Masukan kode barang :";
    cin >> code;

    switch (code)
    {
    case 1:
        cout << "Code: 1, Elektronik \r\n";
        cout << "Produk Teknologi untuk kebutuhan sehari";
        break;
    case 2:
        cout << "Code: 2, Fashion \r\n";
        cout << "Produk Mode dan Gaya Terkini";
    case 3:
        cout << "Code 3, Peralatan Rumah Tangga \r\n";
        cout << "Produk untuk kebutuhan sehari-hari di rumah.";
    default:
        cout << "Opps code tidak terdaptar pada sistem !";
        break;
    }
}