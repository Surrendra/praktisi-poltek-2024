#include <iostream>

using namespace std;


void sayName(string firstName,string lastName,int age)
{
    cout << "Name :" << firstName << " " << lastName << "\r\n";
    cout << "Age : " << age << "\r\n";
}

int main()
{
    sayName("Jeremy", "Renner",12);
    sayName("Liam", "Neeson",30);
    return 0;
}