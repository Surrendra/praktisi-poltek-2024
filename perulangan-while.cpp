#include <iostream>

using namespace std;

int main(){
    int number;
    int jumlah_digit = 0;
    cout << "masukan bilangan bulat :";
    cin >> number;
    cout << "Bilangan bulat adalah : " << number << "\r\n";

    while (number != 0)
    {
        number /= 10;
        cout << "value nilai bilangan adalah :" << number << "\r\n";
        jumlah_digit = jumlah_digit + 1;
    }

    cout << "jumlah digit dari bilangan yang diinput :" << jumlah_digit << "\r\n";
}