#include <iostream>

using namespace std;

void sayMyName(string firstName,string LastName)
{
    cout << LastName << " " << firstName << "\r\n";
}

void hitungLuasKelilingPersegiPanjang(string tipe,int panjang,int lebar)
{
    int hasil;
    if (tipe == "luas")
    {
        hasil = panjang * lebar;
    }else if (tipe == "keliling")
    {
        hasil = 2 * (panjang + lebar);
    }else
    {
        cout << "Tipe tidak valid !";
    }
    cout << "hasil perhitungan adalah : " << hasil;
}  

int hitungKelilingSegitiga(int sisi)
{
    int keliling = sisi * 3;
    return keliling; 
}

double hitungLuasSegitiga(int alas,int tinggi)
{
    double luas = (alas * tinggi) / 2;
    return luas;
}

void hitungBangunSegitigaSamaSisi(){
    string tipe;
    cout << "Masukan tipe perhitung segitiga :";
    cin >> tipe;
    if (tipe == "luas")
    {
        int tinggi,alas;
        string tipe;
        cout << "Masukan tinggi segitiga (cm) :";
        cin >> tinggi;
        cout << "Masukan alas segitiga (cm):";
        cin >> alas;
        double luas = hitungLuasSegitiga(tinggi,alas);
    }else if (tipe == "keliling")
    {
        int sisi;
        cout << "Masukan sisi segitiga (cm) :";
        cin >> sisi;
        hitungKelilingSegitiga(sisi);
    }else{
        cout << "tipe tidak valid";
    }   
}
int main(){
    // sayMyName("Surendra", "Made");
    hitungBangunSegitigaSamaSisi();
}
