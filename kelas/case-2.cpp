#include <iostream>

using namespace std;

int main (){
    cout << "program case 2 bobot penilaian \r\n";

    cout << "============================================= \r\n";

    string namamatakuliah; // tanpa nama

    string namaMatakuliah; // camel case
    string nama_matakuliah; // snack case

    string nama,matakuliah,label;
    float nilai_tugas,nilai_uts,nilai_uas;
    float nilai_akhir;

    cout << "Inputkan Nama :";
    cin >> nama;
    cout << "Inputkan Matakuliah :";
    cin >> matakuliah;

    cout << "Inputkan Nilai Tugas :";
    cin >> nilai_tugas;

    cout << "Inputkan Nilai UTS :";
    cin >> nilai_uts;

    cout << "Inputkan Nilai UAS :";
    cin >> nilai_uas;

    nilai_akhir = (nilai_tugas * 0.3) + (nilai_uts * 0.3) + (nilai_uas * 0.4);
    if (nilai_akhir > 60)
    {   
       label = "Anda lulus"; 
    }else
    {
        label = "anda tidak lulus";
    }
    cout << "============================================= \r\n";

    cout << "Nama :" << nama << "\r\n";
    cout << "Matakuliah :" << matakuliah << "\r\n";
    cout << "Nilai Tugas :" << nilai_tugas << "\r\n";
    cout << "Nilai UTS :" << nilai_uts << "\r\n";
    cout << "Nilai UAS :" << nilai_uas << "\r\n";
    cout << "Nilai Akhir :" << nilai_akhir << "\r\n";
    cout << "Status : " << label << "\r\n";
    cout << "============================================= \r\n";

    return 0;
}