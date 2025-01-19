//find  the array of prefex sum 
#include<iostream>
#include<vector>
using namespace std;
int main(){
cout<<"This program is find the prefex_sum of array "<<endl;;
    int a;
    cout<<"Enter the size of vector :";
    cin>>a;
    vector<int>v(a);
    cout<<"Enter element :";
    //take input element 
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    // print output element 
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i];
    // }

    int vector_sum=0;
    for(int i=0;i<v.size();i++){
        vector_sum+=v[i];
        cout<<vector_sum<<" ";
    }

    return 0;
}
