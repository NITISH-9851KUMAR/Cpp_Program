#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a;
    cout<<"Etner size of vector:";
    cin>>a;
    vector<int> v(a);// 5 -> 5 is size of vector
    cout<<"Enter Element :";
    
    // loop input
    for(int i=0;i<v.size();i++){ // we can write instead of  v.size 5 because v.size also automatically find size so   
    cin>>v[i];
    //cin>>element ; in first declare variable element
    //v.push_back(element)
    }
    for(int element:v){// this is for each loop
        cout<<element<<" ";
    }
    return 0;
}