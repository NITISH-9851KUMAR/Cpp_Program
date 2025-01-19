#include<iostream>
using namespace std;

class room{
    private:
    int length;

    public :
    int display(int l){
        length=l;
    }
    void show(){
        cout<<length;
    }
};

int main(){
room room1;
room1.display(3);
//cout<<"Value of length:"<<room1.display()<<endl;
room1.show();
    return 0;
}