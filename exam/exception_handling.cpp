#include <iostream>
//#include <string>
using namespace std;
int main()
{
    double numerator, denominator, divide;
    cout << "Enter Numerator :";
    cin >> numerator;
    cout << "Enter Denominator :";
    cin >> denominator;

    try
    {
    if (denominator  == 0)
    throw 0;
    
    divide = numerator / denominator;

        cout << numerator << "/" << denominator << "=" << divide << endl;
    }

    catch (int num_exception)
    {
        cout << "Error :Cannot divide by " << num_exception;
    }

    return 0;
}