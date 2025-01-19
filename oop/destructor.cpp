#include<iostream>
using namespace std;
class Rectangle {
public:
int l=5;
int b=6;
Rectangle () { // parametrised constructor 
    int x=l;
    int y=b;
}
~Rectangle (){
    cout<<"Destructor delete"<<endl;
}
Rectangle (int a,int x){
    l=a;
    b= x;
} 
Rectangle (Rectangle & r1){
    l=r1.l;
    b=r1.b;
}

}; 
int main(){
    Rectangle* r1= new Rectangle();
    cout<<r1->b<<" "<<r1->l<<endl;
    delete r1;// destructor is here because r1 is delete

    Rectangle r2(2,4);
    cout<<r2.b<<" "<<r2.l<<endl;

    Rectangle r3=r2;
    cout<<r3.b<<" "<<r3.l<<endl;
    ;

    return 0;
} 