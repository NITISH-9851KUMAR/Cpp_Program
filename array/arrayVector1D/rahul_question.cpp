#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> rahul{29,59,79,99,69,25,55,75,88,87};
    //add element in last 
    rahul.push_back(6);
    for(int element:rahul){
        cout<<element<<" ";
    }
    cout<<endl;

    rahul.erase(rahul.begin()+2);
    rahul.insert(rahul.begin()+2,10);
    for(int element:rahul){
        cout<<element<<" ";
    }
    
    return 0;
}