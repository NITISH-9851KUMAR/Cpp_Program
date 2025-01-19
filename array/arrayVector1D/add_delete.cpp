#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> rollno{31001, 31002, 31003, 31004};
    for(int element:rollno){
        cout<<element<<" ";
    }
    cout<<endl;
    //use for delete element in array anywhere 
    rollno.erase(rollno.begin()+2);//delete 3rd place element 
    //array reduce 31001,31002,31004
    for(int element:rollno){
        cout<<element<<" ";
    }
    cout<<endl;
    rollno.insert(rollno.begin()+3,31005);// for add element in array anywhere
    //array reduce 31001,31002,31004,31006
      for(int element:rollno){
        cout<<element<<" ";
    }
    return 0;
}