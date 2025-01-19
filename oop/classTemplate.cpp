#include <iostream>
// for more tutorials visit www.ProDeveloperTutorial.com
using namespace std;
template <class T>

class Num //declare class 
{ 
private:
    T number;

public: 
    Num()
    {
        number = 0;
    }

    void set_number() //member function 
    {
        cout<<"Enter a number :";
        cin>>number;
    }

    Num operator +(Num);
    void get_number() //member function 
    {
        cout<<"The Sum of Number :"<<number<<endl;
    }
}; 


template <class T> //class template 
Num <T> Num<T> :: operator +(Num <T> c)
{
    Num<T> temp;
    temp.number = number + c.number;
    return temp;
}



int main()
{
    Num <int> n1, n2, n3;
    n1.set_number();
    n2.set_number();
    n3 = n1 + n2;
    n3.get_number();
}