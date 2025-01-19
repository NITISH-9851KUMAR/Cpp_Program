// Given an array of integrs 'a',move all the integers at the beginning of the array followed by all the odd integers.
// The relative order of odd or even intgers does not matter . Return any array that satisfies the condition.
#include<iostream>
#include<vector>
using namespace std;
void sortByParity(vector<int>&v){
    int left_prt=0;
    int right_prt=v.size()-1;
    while(left_prt<right_prt){
        if(v[left_prt]%2==1 && v[right_prt]%2==0){
            swap(v[left_prt],v[right_prt]);
            left_prt++;right_prt--;
        }
        if(v[left_prt]%2==0){
            left_prt++;
        }
        if(v[right_prt]%2==1){
            right_prt--;
        }
    }
    return ;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);

    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }

    sortByParity(v);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}