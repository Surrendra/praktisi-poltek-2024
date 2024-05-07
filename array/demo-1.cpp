#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Deklarasi dan inisialisasi array string dengan nama-nama kabupaten di Bali
    string kabupatenBali[9] = {
        "Badung", "Bangli", "Buleleng", "Gianyar", "Jembrana",
        "Karangasem", "Klungkung", "Tabanan", "Denpasar"};

    // hitung lenth array kabupatenBali
    int sizeArray = sizeof(kabupatenBali) / sizeof(kabupatenBali[0]);
    cout << "Actual Jumlah Array :" << sizeArray << endl;
    cout << "Jumlah Array :" << sizeof(kabupatenBali) << endl;
    cout << "Jumlah Array :" << sizeof(kabupatenBali[0]) << endl;

    // Menampilkan nama-nama kabupaten
    cout << "Daftar Kabupaten di Bali:" << endl;
    for (int i = 0; i < 9; i++)
    {
        cout << i + 1 << ". " << kabupatenBali[i] << endl;
    }
    // cout << "====================" << endl;
    // for (int x = 8; x >= 0; x--)
    // {
    //     cout << x << ". " << kabupatenBali[x] << endl;
    // }

    // int matriks[2][3] = {
    //     {1, 2, 3}, 
    //     {4, 5, 6}
    // };

    // const int size = 5; // Ukuran array
    // int numbers[size];

    // // Menerima input dari pengguna
    // cout << "Masukkan " << size << " bilangan bulat:\n";
    // for (int i = 0; i < size; ++i)
    // {
    //     cout << "Bilangan ke-" << i + 1 << ": ";
    //     cin >> numbers[i];
    // }

    // // Menampilkan nilai yang dimasukkan oleh pengguna
    // cout << "Anda memasukkan nilai berikut:\n";
    // for (int i = 0; i < size; ++i)
    // {
    //     cout << numbers[i] << " ";
    // }

    // cout << sizeof(numbers);
    // cout << endl;
    // return 0;
}
