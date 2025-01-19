#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int element;

    cout << "Enter element:";
    // loop for input
    for (int i = 0; i<5; i++)
    {
        cin >> element;
        v.push_back(element);
    }
    cout<<endl;

    // // loop for output
    // for (int element : v)
    // {
    //     cout << element << " ";
    // }
    // cout<<endl;

    // add element 3rd place
    v.insert(v.begin()+2,6);
    //v.push_back(6);//add element in last
    for(int element:v){
        cout<<element<<" ";
    }
    cout<<endl;

    // delete last element
    v.erase(v.end()-2);
    for (int element : v)
    {
        cout << element << " ";
    }
    cout<<endl;

    

    return 0;
}