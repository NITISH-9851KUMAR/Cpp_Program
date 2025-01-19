//clear is use to make empty string 
#include<iostream>
#include<string>
using namespace std;
int main(){

string name="Nitish kumar ";
cout<<name<<" "<<name.size()<<endl;
name.clear();
cout<<name<<" "<<name.size()<<endl;

cout<<name;

return 0;
}