#include<iostream>
#include<vector>
using namespace std;
 vector<int>fact(int n){
 vector<int>result(n);
 int f=1;
 for(int i=1;i<=n;i++){
    f*=i;
    result[i-1]=f;
 }
 return result;
 }
 void print(const vector<int>& fact){
 for(size_t i=0;i<fact.size();i++){
 cout<<(i+1)<<"!="<<fact[i]<<endl;
 }
 }


 int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    vector<int> f = fact(n);
    print(f);

    return 0;
}




