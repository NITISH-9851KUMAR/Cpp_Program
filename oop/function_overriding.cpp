#include<iostream>
using namespace std;

// function overriding 
class cloth{
public:
void co(){  //method 
    cout<<"Red";
}

};

class robe : public cloth{

    public:
    void color(){
        cout<<"Robe is yellow ";
    }
};

int main(){

robe r=robe();
r. color();

return 0;
}