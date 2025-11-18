#include<iostream>

class MyClass{
    public:
    MyClass(){
        std::cout<<"MyClass constructed\n";
    }
    ~MyClass(){
        std::cout<<"myclass destroyed\n";
    }

};

int main(){
    MyClass*myobject=new MyClass();   //constructor is called;
    delete myobject;

    int arraySize=3;
    MyClass*myobjectarray=new MyClass[arraySize];
    delete[]myobjectarray;
    
}