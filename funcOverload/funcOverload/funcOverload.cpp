// funcOverload.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int sum(int a, int b);
double sum(double a, double b);
float sum(float a, float b, float c);

int main()
{
    cout << sum(4, 3) << endl;
    cout << sum(4.4, 3.3) << endl;
    cout << sum(4.4, 3.3, 2.2);
    system("pause>0");
}
int sum(int a, int b) {
    //int result = a + b;
    
    return a + b;
   // return result;
}
double sum(double a, double b) {
    return a + b;
}
float sum(float a, float b, float c) {
    return a + b + c;
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
