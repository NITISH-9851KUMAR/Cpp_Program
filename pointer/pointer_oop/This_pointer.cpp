#include<iostream>
//#include<stdio.h>
using namespace  std;

class student {
private:
string name;
int prn;
int rollno;
char grade;

public:
student (string name,int prn,int rollno,char grade){
    this->name=name;
    this->prn=prn;
    this->rollno=rollno;
    this->grade=grade;
}

void display(){
    cout<<"Name :"<<name<<endl;
    cout<<"PRN  :"<<prn<<endl;
    cout<<"Roll No :"<<rollno<<endl;
    cout<<"Grade :"<<grade<<endl<<endl<<endl;

}

};
int main(){
cout<<endl<<endl;
cout<<"*****This program based on This pointer ******";
cout<<endl<<endl;

student s1("Nitish Kumar ",31004,4,'A');
s1.display();

cout<<"//// We can change the all parameters using this pointer \\\\"<<endl<<endl;

char*  name; //
cout<<"Enter The name :";
gets(name);

int prn,rollno;
cout<<"Etner the Prn and rollno ";
cin>>prn>>rollno;

char grade;
cout<<"Enter the grade :";
cin>>grade;
student s2(name,prn,rollno,grade);
cout<<endl<<endl;
s2.display();
    return 0;
}