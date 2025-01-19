#include<iostream>
using namespace std;

class Base{

int num;
public:
void getdata();
void showdata();
};

void Base::getdata(){
    cout<<"Enter The Number :";
    cin>>num;
}

void Base::showdata(){
    cout<<num;
}
int main(){

Base obj;
obj.getdata();
obj.showdata();

return 0;
}