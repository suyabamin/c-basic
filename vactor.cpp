#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    //inserting
    for(int i=34;i<60;i+=5){
        v.push_back(i);
    }
    //get element at
    cout<<v.at(3)<<endl;
    //get first
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    //poyenter last element 
    int *first=v.data();
    //print first element 
    cout<<"first element:"<<*first<<endl;
    //print 4th element/index3
    first+=3;
    cout<<"4th element:"<<*first<<endl;
}