#include <iostream>

using namespace std;

int main() {
    cout << "Program uji coba kondisi dalam c++ \r\n";

    bool isHuman = true;
    int x = 10;
    int y = 30;


    bool condition = (x!=y);
    cout << "nilai dari kondisi adalah : " << condition << "\r\n";

    x = 11;
    y = 15;
    condition = !(x == y);
    cout << "nilai untuk kondisi kedua adalah : " << condition << "\r\n";
    

    int salary = 0;
    int tax_salary_limit = 4000000;
    int allowance_limit_salary = 4500000;

    cout << "silahkan inputkan gaji anda :";
    cin >> salary;
    cout << "gaji anda adalah :" << salary << "\r\n";
    if (salary >= tax_salary_limit)
    {
        cout << "untuk gaji diatas atau sama dengan :" << tax_salary_limit << " wajib membayar pajak ! \r\n";
    }else
    {
        cout << "untuk gaji dibawah " << tax_salary_limit << " tidak wajib membayar pajak \r\n";
    }

    if (salary >= allowance_limit_salary)
    {
        cout << "gaji diatas atau sama dengan " << tax_salary_limit << " mendapatkan tunjangan makan dan transport \r\n";
    }
    else if (salary <= allowance_limit_salary && salary >= 3500000)
    {
        cout << "gaji anda hanya mendapatkan tunjangan makan \r\n";
    }else
    {
        cout << "anda tidak mendapakan tunjangan ! \r\n";
    }
    

    switch (salary)
    {
    case 100000:
        cout << "gaji setara pajak";
        break;
    case 300000:
        cout << "tes gaji anda !";
        break;
    default:
        break;
    }
    
    
    

    
    
    return 0;
}