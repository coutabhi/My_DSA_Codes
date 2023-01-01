//Code by Abhishek Yadav
//Copy Constructor 

#include<iostream>
using namespace std;

class Student{
    int age;
    int rollNumber;

    public:
    Student(){
        cout<<"Default constructor is called."<<endl;
    }
    Student(int age, int rollNumber){
        this->age = age;
        this->rollNumber = rollNumber;
    }
    void setAge(int age){
        this->age = age;
    }
    void setRn(int rollNumber){
        this->rollNumber = rollNumber;
    }
    void display(){
        cout<<"Age of student is "<<age<<" and the roll number is "<<rollNumber<<endl;
    }
};
//Normal copy
/*
    Student s3;
    s3.age = s2.age;
    s3.rollNumber = s2.rollNumber
//By using copy Constructor
    Student s3(s2);
*/
int main(){
    Student s1;
    s1.setAge(21);
    s1.setRn(53);
    Student s2(15, 107);
    Student s3(s2);//this is called copy constructor
    //can only be called at time of declaration of object this copies all 
    //Properties of s2 in s3.
    //Dynamically 
    Student* s4 = new Student(16, 109);
    Student* s5 = new Student(*s4);
    Student s6(*s5);
    s1.display();
    s2.display();
    s3.display();
    s4->display();
    s5->display();
    s6.display();
    delete [] s4;
    delete [] s5;
}