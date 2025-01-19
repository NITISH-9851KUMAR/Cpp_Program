#include<iostream>
using namespace std;

template<class T>

class Num{

    T number;

public:
    Num(){  // member function
        number=0;
    
    }

public:
void set_data(){
    cout<<"Enter The Number :";
    cin>>number;
}

Num operator+(Num);

void get_data(){

cout<<"The Sum of Number :"<<number;
}
};
template<class T> // define function 

Num<T> Num<T> ::operator+(Num<T>c){
    Num<int>var;
    var.number=number+c.number;
    return var;
}

int main(){
    Num<int> n1,n2,n3;
    n1.set_data();
    n2.set_data();
    n3=n1+n2;
    n3.get_data();



return 0;
}