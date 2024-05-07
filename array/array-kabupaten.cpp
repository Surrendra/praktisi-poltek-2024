#include <iostream>
#include <string>
using namespace std;

int main(){
    string Kabupaten[] = {
        "Badung", "Bangli", "Buleleng", "Gianyar", "Jembrana",
        "Karangasem", "Klungkung", "Tabanan", "Denpasar","Bogor","Surabaya",
        "Jakarta","Bandung","Semarang","Yogyakarta","Bekasi","Tangerang","Depok","Makassar","Palembang",
        "Medan","Manado","Padang","Pekanbaru","Pontianak","Banjarmasin","Balikpapan","Samarinda","Palu","Mamuju",
    };

    string cariKabupaten;
    cout << "Masukkan nama kabupaten yang dicari : ";
    cin >> cariKabupaten;
    int indexKabupaten = -1;
    for (int i = 0; i < sizeof(Kabupaten) / sizeof(Kabupaten[0]); i++)
    {
        if (cariKabupaten == Kabupaten[i])
        {
            indexKabupaten = i;
        }
    }
    if (indexKabupaten > -1){
        cout << "Kabupaten " << cariKabupaten << " ditemukan di index ke " << indexKabupaten << endl;
    }else{
        cout << "Kabupaten " << cariKabupaten << " tidak ditemukan" << endl;
    }
}