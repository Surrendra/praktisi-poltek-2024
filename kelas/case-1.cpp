#include <iostream>

using namespace std;

int main(){
    cout << "latihan case 1 \r\n";
    int gaji;
    double pajak;
    string label;

    cout << "silahkan masukan gaji anda :";
    cin >> gaji;

    if (gaji < 5000000)
    {
        pajak = 0;
        label = "anda bebas pajak";
    }else if (gaji >= 5000000 && gaji <= 10000000)
    {
        pajak = gaji * 0.05;
        label = "anda harus membayar pajak 5 % dari gaji";
    }else
    {
        pajak = gaji * 0.10;
        label = "anda harus membayar pajak 10 % dari gaji";
    }

    cout << "Gaji anda :" << gaji << "\r\n";
    cout << label << "\r\n";
    cout << "jumlah pembayaran pajak :" << fixed << pajak;
    
    return 0;

// Variabel bisa terdiri dari gabungan huruf dan angka, namun harus diawali dengan huruf.
// Tidak boleh pakai spasi atau tanda baca lainnya .
// Penulisan variabel dalam c++ bersifat case sensitive artinya bahwa huruf besar kecil dibedakan.
}