#include<iostream>
using namespace std;
int main(){
    int day1,day2,day3, mon1,mon2,mon3,year1,year2,year3;
    char ch1,ch2,ch3,ch4;
    cout<<endl<<"***** WELCOME ,WE CAN FIND YOUR AGE *****"<<endl<<endl;
    cout<<"Date of Birth(day/month/year):";
    cin>>day2>>ch1>>mon2>>ch2>>year2;
    cout<<endl<<"Age at the Date of(day/month/year):";
    cin>>day1>>ch3>>mon1>>ch4>>year1;

        if(year1>year2){
            if(day1>day2){
                if(mon1>mon2){
                        day3=day1-day2;
                        mon3=mon1-mon2;
                        year3=year1-year2;
                        // cout<<"Age : "<<year3<<"year  "<<mon3<<"Month  "<<day3<<"Days";
                        cout<<"Age -> "<<"year:"<<year3<<"    Month:"<<mon3<<"   Day:"<<day3;
                }
                else{
                    day3=day1-day2;
                    mon3=(mon1+12)-mon2;
                    year3=(year1-1)-year2;
                    cout<<"Age -> "<<"year:"<<year3<<"    Month:"<<mon3<<"   Day:"<<day3;
                }
            }
            else if(day1<day2){
                if(mon1>mon2){
                    day3=(day1+30)-day2;
                    mon3=(mon1-1)-mon2;
                    year3=year1-year2;
                cout<<"Age -> "<<"year:"<<year3<<"    Month:"<<mon3<<"   Day:"<<day3;
                }
                else{
                    day3=(day1+30)-day2;
                    mon3=(mon1-1+12)-mon2;
                    year3=year1-1-year2;
                    cout<<"Age -> "<<"year:"<<year3<<"    Month:"<<mon3<<"   Day:"<<day3;
                }
            }
        }
        else{
            cout<<"Date of Birth's year is greater then Age at the Date of,so can't find";
        }

    return 0;
}