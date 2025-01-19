 #include<iostream>
 using namespace std;
class complex{
public:
int real;
int img;
//public:

complex(int x,int y)//use constructor 
{
    real=x;
    img=y;
}


complex operator+( complex &c2)
{
complex ans(0,0);
ans.real= real+c2.real;// real-> c1 ka real,c2.real->c2 ka real
ans.img=img+c2.img;// img-> c1 ka img, c2.img-> c2 ka img
return ans;
}

 };



 
 int main(){
    complex c1(1,2);
    complex c2(1,4);
    complex c3= c1+c2;
    cout<<c3.real<<"+" <<c3.img<<"i"<<endl;
    return 0;
 }