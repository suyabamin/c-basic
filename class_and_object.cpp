#include<iostream>
#include<string>
using namespace std;
struct person
{
  string name;
  int day;
  int month;
  int year;
  
  void setName(string Name){
    name=Name;
  }
  void setDOB(int Day,int Month,int Year){
    day=Day;
    month=Month;
    year=Year;
  }

  void printName(){
    cout<<"my name is "<<name<<endl;
  }
  string printDOB(){
    cout<<"my Dob is"<<day<<"/"<<month<<"/"<<year<<endl;
  }
    
};


int main(){
    person person1;
    person1.setName("sunny");
    person1.setDOB(1,2,200);
    person1.printName();
    person1.printDOB();

}