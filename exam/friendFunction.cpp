#include<iostream>
using namespace std;

class Box{

private :
int length;


//syntax of friend function 
//function Data_type Function_name(argument);

friend int AccessPrint(Box); // declare friend 

};

int AccessPrint(Box obj){
    return obj.length=10;
   // return obj.length;
}

int main(){

Box obj;

AccessPrint(obj);
cout<<AccessPrint(obj);

    return 0;
}