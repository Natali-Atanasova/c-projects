// calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    char operation;
    cout << "***Calculator*** \n \n ENTER calculation (example: 2.2 +2, 3.5 -2, 6*6, 7/7, 5%5): \n \n ";
    cin >> num1 >> operation >> num2;

    switch (operation)
    {
    case'-':cout << num1 << operation << num2 << "=" << num1 - num2<<endl; break;
    case '+':cout << num1 << operation << num2 << "=" << num1 + num2 << endl; break;
    case '/':cout << num1 << operation << num2 << "=" << num1 / num2<<endl; break;
    case '*':cout << num1 << operation << num2 << " = " << num1 * num2 << endl; break;
    case'%':
        bool isnum1Integer, isnum2Integer;
        isnum1Integer=((int)num1 == num1);//5=5.0
        isnum2Integer =((int)num2 == num2);
        if (isnum1Integer && isnum2Integer)
            cout << num1 << operation << num2 << "=" << (int)num1 % (int)num2; 
        else
            cout << "Not valid! Must be integer number!!! ";  break;
    default: cout << "\n Error \n";
    }
    system("pause>0");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
