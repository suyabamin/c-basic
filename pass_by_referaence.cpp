#include<iostream>
using namespace std;

void increament(int &n){
    n=n+1;
}

int main(){
    int number=5;
    cout<<"before incerament:-"<<number<<endl;
    //output=5
    increament(number);
    cout<<"After incareament: "<<number<<endl;
    //output =6
}