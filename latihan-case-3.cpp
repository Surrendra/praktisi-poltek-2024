#include <iostream>

using namespace std;


int hitungTotalHarga(int qty,int harga){
    int sub_total = qty * harga;
    return sub_total;
}



int main()
{
    int qty, harga;
    int grand_total = 0;
    int subtotal;
    int input_barang = 1;
    int index = 1;
    while (input_barang == 1)
    {
        cout << "Harga Barang (Barang " << index << ") :";
        cin >> harga;
        cout << "Jumlah dibeli (Barang " << index << ") :";
        cin >> qty;
        subtotal = hitungTotalHarga(harga,qty);
        cout << "Subtotal barang  : " << subtotal << "\r\n";
        cout << "Input Barang Lagi  : ";
        cin >> input_barang;
        grand_total = grand_total + subtotal;
        if (input_barang == 0)
        {
            cout << "Total Belanja  : " << grand_total;
        }else
        {
            index++;
        }
        
        
    }
    
    

    return 0;
}