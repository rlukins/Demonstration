#include <iostream>
#include "Demonstration.h"

using namespace std;

int main()
{
    NewFunction();
    string text = "Hello World!";
    cout << text << endl;
    cout << "Next commit" << endl;
}

void NewFunction()
{
    int number = 5;
    int number2 = 10;
    cout << number + number2 << endl;
}
