#include<iostream>
#include<string>
using namespace std;

class carToyota { //base class

public :
int speed ;
char gear;

};

class carThar :public carToyota{ //derived class
    public :
    string name;

};



int main(){
carToyota Toyota;
Toyota.speed=120;
Toyota.gear='4';


carThar Thar ;
Thar.speed=160;
Thar.gear=5;
Thar.name="Thar";

cout<<Toyota.gear<<endl;
return 0;
}