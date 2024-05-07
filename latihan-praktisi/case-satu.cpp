#include <iostream>

using namespace std;

int main(){
    cout << "program satu case gaji dan wajib pajak \r\n";
    int gaji, pajak;
    string keterangan;

    cout << "masukan nominal gaji anda :";
    cin >> gaji;

    if (gaji < 5000000)
    {
        keterangan = "anda bebas pajak";
        pajak = 0;   
    }else if (gaji >= 5000000 && gaji <= 10000000)
    {
        keterangan = "anda dikenakan pajak sebesar 5 % dari gaji anda";
        pajak = gaji * 0.05;
    }else{
        keterangan = "anda dikenakan pajak sebesar 10 % dari gaji anda";
        pajak = gaji * 0.1;
    }
    
    cout << fixed << "gaji anda adalah : " << gaji << "\r\n";
    cout << "anda dikenakan pajak sebesar : " << pajak << "\r\n";
    cout << keterangan << "\r\n";
}
