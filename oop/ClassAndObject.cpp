#include<iostream>
using namespace std;
class fruit{      // we decalre class and class_name fruit is class name
public:          // Public karne se class ka property pure code me use hoga warna nahi
  // here name and color public hai tabhi jakar int main ke niche name and color use ho raha hai
string name;        //these are property name
string color;       //also these are property color;
};
int main(){

fruit apple; // object ,object are declare class_name(class_name declare where class built up) object_name;
apple.name="Apple";
apple.color="Red";

fruit mango; // declare another fruit name
mango.color="yellow";
mango.name="Mango";

cout<<"Fruit Name:"<<mango.name<<"-"<<"Color:"<<mango.color<<endl;
cout<<"Fruit Name:"<<apple.name<<"-"<<"Color:"<<apple.color;




    return 0;
}