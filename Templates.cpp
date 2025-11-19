#include<iostream>
using namespace std;
template<typename X,typename Y>

Y sum(X a,Y b){
    return a+b;
}

int main(){
    cout<<"sum of int :"<<sum(2,3)<<endl;
    cout<<"sum of double :"<<sum(3,6.9)<<endl;
}