#include <iostream>

using namespace std;

int main (){
    int total_belanja,diskon, total_bayar;
    string jenis_pelanggan;

    cout << "Masukan total belanja : ";
    cin >> total_belanja;

    cout << "Masukan jenis pelanggan : ";
    cin >> jenis_pelanggan;

    if (jenis_pelanggan == "reguler")
    {
        if (total_belanja >= 100000)
        {
            diskon = total_belanja * 0.1;
        }else
        {
            diskon = 0;
        }
    }else if (jenis_pelanggan == "premium")
    {
        if (total_belanja >= 150000)
        {
            diskon = total_belanja * 0.2;
        }else
        {
            diskon = 0;
        }
    }

    total_bayar = total_belanja - diskon;

    cout << "Total Belanja :" << total_belanja << "\r\n";
    cout << "Total Diskon : " << diskon << "\r\n";
    cout << "total bayar : " << total_bayar << "\r\n";
}