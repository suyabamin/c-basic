#include<iostream>
#include<string>
using namespace std;
class car{
public:
    string brand;
    int year;
    car(string b,int y){
        brand=b;
        year=y;
    }
    void display() const{
       std::cout<<"car: "<< brand <<", Year: "<<year<<std::endl;
    }
};

void modifycarByValue(car CAR)
{
    CAR.brand="Tesla";
    CAR.year=2022;
    CAR.display();
}

int main(){
    car mycar("Toyota",2010);
    mycar.display();

    modifycarByValue(mycar);
    mycar.display();
}