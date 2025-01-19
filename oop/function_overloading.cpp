 #include<iostream>
 using namespace std;
class sum{
public:
void add(int x,int y){// function overloading
    int sum1=x+y;
    cout<<sum1<<endl;

}
void add(int x,int y,int z ){ //function overloading
    int sum2=x+y+z;
    cout<<sum2<<endl;
} 
void add(float x,float y){//function overloading 
    float sum3=x+y;
    cout<<sum3<<endl;
}
};
 int main(){
    sum sum1;                               
    sum1.add(2,3);
    sum1.add(2,3,4);
    sum1.add(float(2.3),float(5.5));
    return 0;
 }