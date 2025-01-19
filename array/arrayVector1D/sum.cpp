//find the difference between the sum of elements at even indices to the sum of elemetns at odd indices.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v{50,45,39,29,18};
    int evensum=0;//107
    int oddsum=0;//74
    for(int i=0;i<v.size();i++){
        if(i%2==0)
        evensum+=v[i];

        else oddsum+=v[i];
    }
    cout<<evensum-oddsum;

    return 0;
}