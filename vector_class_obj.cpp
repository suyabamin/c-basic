#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class student {
public:
    int id;
    double cgpa;

    student(int i = 0, double c = 0.0) {
        id = i;
        cgpa = c;
    }

    void display() {
        cout << "ID: " << id << "  CGPA: " << cgpa << endl;
    }
};

void printVector(vector<student>v){
    for(int i=0;i<v.size();i++){
        v[i].display();
    }
}

int main(){
    vector<student>students;
    students.push_back(student(1,3.5));
    students.push_back(student(3,3.2));
    students.push_back(student(2,3.0));
    students.push_back(student(8,3));
     students.push_back(student(6,2.25));
    //find student with max cgpa
    student s(-1,INT_MIN);

    for(int i=0;i<students.size();i++){
        if(students[i].cgpa>=s.cgpa){
            s=students[i];
        }
        
    }
cout<<"student with highest cgpa: ";
        s.display();

        //remove a student with id 2

        for(int i=0;i<students.size();i++){
            if(students[i].id==2){
                students.erase(students.begin()+i);
                break;
            }
        }
printVector(students);
   
}