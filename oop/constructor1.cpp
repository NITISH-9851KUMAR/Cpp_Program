#include<iostream>
using namespace std;
class room{
private:
int length,height;
public:
room(){// default constructor
    length=0;
    height=0;
    cout<<length<<" "<<height<<" "<<endl;
    

}
room (int x,int y){// parametrised constructor
    length=x;
    height=y;
  cout<<length<<" "<<height<<" "<<endl;

}
int area(){
    return length*height;
}
room (const room& x){// copy constructor 
    length=x.length;
    height=x.height;
cout<<length<<" "<<height<<" "<<endl;
}
};
int main(){
    room room1;
    cout<<room1.area()<<endl;

    room room2(2,3);
    cout<<room2.area()<<endl;
    
    room room3=room2;
    cout<<room3.area()<<endl;
    return 0;
}