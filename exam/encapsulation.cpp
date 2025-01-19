#include <iostream>
using namespace std;

class encap{ //define class 

private:
    int num1,num2;

public:
    void set_data(int var1,int var2) //with the help of bind data 
    {
       num1=var1;
       num2=var2; 
    }

int multiplyOfNum(){ // use find the area 
    return num1*num2;
}

    void get_data(){ // with the help of bind data 
        cout<<multiplyOfNum();
    }
};

int main()
{

    encap obj;  //declare object 

    obj.set_data(4,6); //set value of num1 and num2 through  set_value 

    obj.get_data(); //To display value of multiply two number 
    return 0;
}