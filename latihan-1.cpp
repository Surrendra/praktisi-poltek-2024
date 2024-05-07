#include <iostream>

using namespace std;


void hitungPersegiPanjang(string tipe,int panjang,int lebar){
    double hasil;
    if (tipe == "keliling")
    {
        hasil = 2 * (panjang + lebar);
        cout << "keliling dari persgi panjang adalah : " << hasil << "\r\n";
    }else if(tipe == "luas")
    {
        hasil = panjang * lebar;
        cout << "luas dari persgi panjang adalah : " << hasil << "\r\n";
    }else{
        cout << "Opps tipe perhitungan tidak valid ";
    }
}



int main()
{
    string inputTipe;
    int inputPanjang,inputLebar;

    cout << "Masukan tipe perhitungan (keliling / luas) :";
    cin >> inputTipe;
    cout << "Masukan panjang persegi :";
    cin >> inputPanjang;
    cout << "Masukan lebar persegi :";
    cin >> inputLebar;
    hitungPersegiPanjang(inputTipe, inputPanjang, inputLebar);
    return 0;
}