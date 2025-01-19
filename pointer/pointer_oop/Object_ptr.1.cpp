#include <iostream>
using namespace std;

class complex
{
public:
    int real;
    int imaginary;

    void send_data(int x, int y)
    {

        real = x;
        imaginary = y;
    }

    int get_data()
    {
        cout << "Real Number :" << real << endl;
        cout << "Imaginary Number :" << imaginary << endl;
    }
};
int main()
{

    complex c1; // declare object

    complex*  ptr = &c1; // declare pointer to object

    (*ptr).send_data(3, 4); // send value of function

    (*ptr).get_data();
    return 0;
}