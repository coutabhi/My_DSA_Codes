// Code by Abhishek Yadav 👨🏻‍💻
//Destructor
#include<iostream>
using namespace std;
//Unlike constructor we cannot make more than one destructor
//As we cannot pass arguments in destructor;

//Destructor called at end of the program automatically, that basically delete the called
//Constructors in the static memory

//But for the dynamically alloted object we delete manually which basically delete the 
//Adress at static memort like delete s3;

class Student{
    public:
    Student(){
        cout<<"Default constructor is called. "<<endl;
    }
    ~Student(){
        cout<<"Destructor is called. "<<endl;
    }
};
int main(){
    Student s1;
    Student S2;
    Student* s3 = new Student;
    delete s3;
}