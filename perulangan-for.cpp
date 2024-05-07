#include <iostream>

using namespace std;

int main(){
    int number;
    int total = 0;
    int summary_total = 0;
    
    cout << "Masukan batas angka :";
    cin >> number;

    for (int i = 1; i > 10; i++)
    {
        cout << "nilai adalah :" << i  << "\r\n";
        // if (i % 2 == 0)
        // {
        //     // cout << "nilai awal total : " << total << "\r\n";
        //     total = total + 1;
        //     summary_total = summary_total + i;
        //     // cout << "nilai total setelah iterasi : " << total << "\r\n";
        //     cout << "Nomor :" << i << "\r\n";
        // }        
    }

    cout << "Total data yang muncul adalah :" << total << "\r\n";
    cout << "Summary dari data yang muncul adalah :" << summary_total << "\r\n";
}