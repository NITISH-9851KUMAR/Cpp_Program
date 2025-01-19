#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int prn;
    char grade;
};
int main(){

    student student1;
    student1.name="Nitish kumar";
    student1.prn=31004;
    student1.grade='A';
    cout<<student1.name<<endl;
    cout<<student1.prn<<endl;
    cout<<student1.grade;
    return 0;
}