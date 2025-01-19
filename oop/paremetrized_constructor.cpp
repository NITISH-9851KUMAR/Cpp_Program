#include<iostream>
using namespace std;
 class wall{
        private:
        int length;
        int breadth;
        public:
        wall(){ // default  constructor
            length=5;
            breadth=3;
            cout<<length<<" "<<breadth<<endl;
        }

        wall(int x,int y){//parameterized constructor
           length=x; 
           breadth=y;
            cout<<length<<" "<<breadth<<endl;
            //cout<<area();
        }
       
       wall(wall& w){ // copy constructor
        length=w.length;
        breadth=w.breadth;
        cout<<length<<" "<<breadth<<endl;
       }

    };
int main(){
   wall wall1;
   wall wall2(3,5);
   wall wall3=wall2;

    return 0;
}   