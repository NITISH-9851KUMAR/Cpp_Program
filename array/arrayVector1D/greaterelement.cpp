#include<iostream>
#include<vector>
using namespace std;
int main(){
    //vector<int> v{1,2,3,4,5,6};
    cout<<"Enter Vector element :";
    vector<int> v(6);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    int x;
    cout<<"Enter value of x :";
    cin>>x;
    int count=0;

    cout<<"That element are greater then "<<x<< ": ";
    for(int i=0;i<v.size();i++){
        if(v[i]>x){
        count++;
        cout<<v[i]<<" ";
        }
    }
   cout<<endl;
    cout<<"No of greatest element: "<<count;
  
    return 0;
}