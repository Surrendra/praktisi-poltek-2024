#include <iostream>

using namespace std;


int hitungTotalHarga(int qty,int harga){
    int sub_total = qty * harga;
    return sub_total;
}



int main()
{
    int qty1, harga1;
    int qty2, harga2;
    int grand_total = 0;
    int subtotal1,subtotal2 = 0;

    cout << "Harga Barang 1 :";
    cin >> harga1;
    cout << "Jumlah Dibeli barang 1 :";
    cin >> qty1;

    cout << "Harga Barang 2 :";
    cin >> harga2;
    cout << "Jumlah Dibeli barang 2 :";
    cin >> qty2;

    subtotal1 = hitungTotalHarga(qty1, harga1);
    subtotal2 = hitungTotalHarga(qty2, harga2);
    grand_total = subtotal1 + subtotal2;

    cout << "Subtotal barang 1 : " << subtotal1 << "\r\n";
    cout << "Subtotal barang 2 : " << subtotal2 << "\r\n";

    cout << "Total Belanja : " << grand_total << "\r\n";

    return 0;
}