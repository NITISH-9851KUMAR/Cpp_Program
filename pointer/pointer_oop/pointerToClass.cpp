#include<iostream>
using namespace std;
 class rectangle {
        public:
        int length;//membr variable
        int breadth;
        
        //calculate area  
        int calculate_area(){ // member function 
            return length*breadth;
        }

        // calculate permeter 
        int calculate_perimeter(){
            return 2*(length*breadth);
        }
    };
int main(){
   rectangle r1;// r1 is object 
   r1.length=20;
   r1.breadth=23;

   cout<<"Area of Rectangle :"<<r1.calculate_area()<<"\n";
   cout<<"Perimeter of Rectangle :"<<r1.calculate_perimeter()<<"\n";

    return 0;
}