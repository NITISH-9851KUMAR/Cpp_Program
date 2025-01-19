#include<iostream>
using namespace std;

class ankush;
class ankit{
    int money=30;
    friend void rohit(ankit,ankush);
};

class ankush{
    int money=20;
    friend void rohit(ankit,ankush);
};

void rohit(ankit r1,ankush r2){
    cout<<"sum :"<<r1.money+r2.money;

}

int main(){

ankush obj1;
ankit obj2;
rohit(obj2,obj1);
}