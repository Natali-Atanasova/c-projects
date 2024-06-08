// CPP3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int getMin(int numbers[], int size) {
    int min = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] < min)
            min= numbers[i];
    }
}

int getMax(int numbers[], int size) {
    int max = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] > max)
            max = numbers[i];
    }
}
void getMinAndMax(int numbers[], int size, int min, int max) {
    for (int i = 1; i < size; i++) {
        if (numbers[i] > *max)
            *max = numbers[i];
        for (int i = 1; i < size; i++) {
            if (numbers[i] < *min)
                *min = numbers[i];
}

int main()
{
   
    int numbers[5] = { 5, 4 , -2, 29, 6 };
    //cout << "Min is " << getMin(numbers, 5) << endl;
    //cout << "Max is " << getMax(numbers, 5) << endl;
    int min = numbers[0];
    int max[0];
    getMinAndMax(numbers, 5, &min, &max);
    cout << "Min is :" << min << endl;
    cout << "Min is :" << min << endl;
    system("pause>0");
    return 0;
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
