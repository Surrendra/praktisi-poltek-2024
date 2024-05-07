#include <iostream>

using namespace std;

int main()
{
    int bilangan, jumlahDigit = 0;

    cout << "Masukkan bilangan bulat positif: ";
    cin >> bilangan;

    // Menggunakan while untuk menghitung jumlah digit
    int temp = bilangan;
    while (temp != 0)
    {
        temp /= 10; // Menghapus digit paling kanan
        cout << temp << endl;
        jumlahDigit++;
    }

    cout << "Jumlah digit dari bilangan " << bilangan << " adalah: " << jumlahDigit << endl;
}