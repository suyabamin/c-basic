#include<iostream>
#include<map>
#include<string>
using namespace std;
int main() {
map<char, int > word;
cout<<"enter any string=";
string st;
cin>>st;
cout<<st;

for(int i=0;st.length();i++){
    st[i]=st[i];
}
for (auto i=st.begin();i!=st.end();i++) {       //auto means =automaticaly defind map data type;
cout<<i->first<<":"<<i->second<<endl;
}

}
