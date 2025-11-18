#include<iostream>
using namespace std;
class Car
{
public:
string brand;
int year;
    Car(string brand,int y){
        this->brand=brand=brand;
        year=y;
    }
    void display(){
        cout<<brand<<" "<<year<<endl;
    }
};

void modify(Car &car){
    car.brand="new brand";
    car.year=2020;
}

int main(){
    Car c("Toyota",2010);
    c.display();
    modify(c);
    c.display();
}
