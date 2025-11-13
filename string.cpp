#include<iostream>
#include<string>
using namespace std;

int main(){
    string string1("Data structure");
    string string2="Algorithm";
    
    //find substring possition (index)
    int position=string1.find("world");
    cout<<"the word status at position :"<<position<<endl;
    
    //find substring throw index
    string substrin=string1.substr(0,5);
    cout<<"sub string is--"<<substrin<<endl;

    //length of the string
    cout<<"the string lengrh is ="<<string1.length()<<endl;

    //charecter axis at particular index
    char c=string1.at(2);
    cout<<"char at index 2-"<<c<<endl;

    //string concatination
    string course_name=string1+" and "+string2+to_string(2);
    cout<<"course name="<<course_name<<endl;

    //string comparing
    if(string1==string2){
        cout<<"the string are equal"<<endl;
    }else{
        cout<<"string are not equal"<<endl;
    }

    //convert  a charachter  to uppwe case
    string1[3]=toupper(string1[3]);
    cout<<"after upper case conversion-"<<string1<<endl;
///lower case
    string1[0]=tolower(string1[0]);
    cout<<"after lower case conversion-"<<string1<<endl;
//find a substring(if it return index found,else -1)
int  indx=string1.find("datA");
cout<<indx<<endl;

//extruct substring or axes
string sub=string1.substr(5,7);
cout<<sub<<endl;

string str="hello!!!!";
//insert a string in an index
str.insert(5," world");
cout<<str<<endl;

//replace world with 
str.replace(5,6," su");
cout<<str<<endl;

//erase substring
str.erase(6,4);
cout<<str<<endl;


//delete
int *ptr=new int;
*ptr=100;
cout<<"single inetger value :"<<*ptr<<std::endl;
delete ptr;

int *arr=new int[5];
for(int i=0;i<5;i++){
    arr[i]=i*100;
}
cout<<"inerger array values: ";
for(int i=0;i<5;++i){
    std::cout<<arr[i]<<" ";
}
std::cout<<std::endl;
delete[]arr;

}