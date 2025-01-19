#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // declare vector
    vector<int> v;// v(5) size 
    int element ;
    // loop for input 
    for(int i=0;i<5;i++){
        cin>>element ; // use cin>>v[i]
        v.push_back(element);
    }
    //loop for output 
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
     

    // this loop for also print ouput
    //  for(int element:v){
    //     cout<<element<<" ";
    //  }
    return 0;
}