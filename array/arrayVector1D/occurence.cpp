// find the last occurrence of an element x in a given aray
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v{1,2,3,3,2,1};
    int x=1;
    int count=0;
    int occurrence=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
        occurrence=i;//can say index
        count++;//how many times 1 is in this function
        }
         
    }
    cout<<x<<" is "<<occurrence<<"th place"<<endl;
    cout<<"Number of 1:"<<count<<endl;
    return 0;
}