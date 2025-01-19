#include<iostream>
using namespace std;

class Fruit{ // define class 

public:
string name;
string color;


};

int main(){

Fruit fruit1;
fruit1.name="mango";
fruit1.color="red";
cout<<fruit1.name<<"-"<<fruit1.color<<endl;

Fruit *apple=new Fruit();// new is use to create a new object

apple->name="apple";
apple->color="dark red";
cout<<apple->name<<"-"<<apple->color<<endl;



    return 0;
}