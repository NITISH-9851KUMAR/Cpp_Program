#include<iostream>
using namespace std;
int add(int x,int y){
    int sum=x+y;
    return sum;
}

float add(float t,float m,float y){
  float sum =t+m+y;
    return sum;
}

int main(){
    int a,b;
    cin>>a;
    cin>>b;
    int sum=add(a,b);
 
    float x,y,z;
    cin>>x;
    cin>>y;
    cin>>z;
    float jod=add(x,y,z);
    cout<<jod<<endl;
    cout<<sum<<endl;

    return 0;
}