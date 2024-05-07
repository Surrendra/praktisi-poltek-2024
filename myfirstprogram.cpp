#include <iostream>

using namespace std;

int main() {
    cout << "Hello World Motherfucking!\r\n";
    std::cout << "Second line! \r\n";

    cout << "create tab with tab command \t lotem ipsum \r\n";
    cout << "Inserts a backslash character \\ lotem ipsum \r\n";
    cout << "Inserts a double quote character \" lotem ipsum \r\n";

    int number = 70;
    string myName = "Surendra Made";
    char status = 'A';
    cout << "this is number by variable\r\n " << number << "\r\n My Name" << myName << "\r\n";
    cout << "This is char variable " << status << "\r\n";

    int firstNumber = 20;
    int secondNumber = 30;
    int summariesNumber = firstNumber + secondNumber;
    cout << "This number " <<  firstNumber << " add by this number " << secondNumber << " gonna become this number " << summariesNumber;

    cout << "Declare Many Variables \r\n";
    int x = 10, y = 15, z = 80;
    cout << "this is the variable declare at once \r\n";
    cout << x + y + z;

    cout << "declare constant \r\n";
    const int minutePerHour = 60;
    const int minuteIn24Hour = 60 * 24;
    cout << minutePerHour << " " << minuteIn24Hour;

    cout << "C++ User Input return \r\n";
    cout << "Enter your name: ";
    string inputName;
    cin >> inputName;
    cout << "Your name is: " << inputName << "\r\n";

    cout << "make simple kalkulator program \r\n";
    int addFirstNumber = 0, addSecondNumber,totalNumber;

    cout << "Please input first number :";
    cin >> addFirstNumber;
    cout << "Please input second number : ";
    cin >> addSecondNumber;
    totalNumber = addFirstNumber + addSecondNumber;
    cout << firstNumber << " + " << addSecondNumber << "=" << totalNumber << "\r\n";
}