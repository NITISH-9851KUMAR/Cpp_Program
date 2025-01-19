#include<iostream>
using namespace std;

class Complex {
public:
int real;
int img;

Complex (int a,int b){
    real=a;
    img=b;
}

Complex operator+ (Complex &c){
Complex ans(0,0);
ans.real=real+c.real;
ans.img=img+c.img;
return ans;
}
};
 
int main(){

    Complex c1(3,2);
    Complex c2(6,4);

    Complex c3=c1+c2;

    cout<<c3.real<<"+"<<c3.img<<"i"<<endl;

    return 0;

}