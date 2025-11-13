#include<iostream>
#include<string>
using namespace std;
struct person
{
  string name;
  int day;
  int month;
  int year;
  
 person(string Name,int Day,int Month,int Year){
     name=Name;
     day=Day;
     month=Month;
     year=Year;

 }

  void printName(){
    cout<<"my name is "<<name<<endl;
  }
  void printDOB(){
    cout<<"my Dob is--"<<day<<"/"<<month<<"/"<<year<<endl;
  }
    
};


int main(){
    person person1("suyab amin sunny",7,11,2003);

    person1.printName();
    person1.printDOB();


     person person2("su",14,1,2004);

    person2.printName();
    person2.printDOB();
   

}