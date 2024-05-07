#include <iostream>

using namespace std;

int hitungSubTotal(int jumlah_barang,int harga_barang){
    int sub_total = jumlah_barang * harga_barang;
    return sub_total;
}

int main()
{
    int jumlah_barang,harga_barang;
    int grand_total = 0;
    string input_lagi = "Y";
    while (input_lagi == "Y")
    {
        cout << "input jumlah barang :";
        cin >> jumlah_barang;

        cout << "input harga barang : ";
        cin >> harga_barang;
        int sub_total = hitungSubTotal(jumlah_barang,harga_barang);
        grand_total = grand_total + sub_total;
        cout << "Sub total dari barang adalah :" << sub_total << "\r\n";
        cout << "Input Barang Lagi (Y/N) :";
        cin >> input_lagi;
    }

    cout << "Grand Total dari Belanja adalah : " << grand_total;
}