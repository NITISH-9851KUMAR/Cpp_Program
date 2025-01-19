#include<iostream>
using namespace std;

class person{

protected:
string name;
};

class student:public person {

public:
void setdata(string boyName){
    name=boyName;

}
void dis(){
    cout<<name;
}

 
};

int main(){
student s1;
s1.setdata("Nitish kumar");
s1.dis();

    return 0;
}