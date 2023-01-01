// Code by Abhishek Yadav 👨🏻‍💻
//Copy Assignment
#include<iostream>
using namespace std;
//As we learn earlier that copy constructor can be called only at time of 
//creation of object but we can call copy assignment operator after declaration.
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
int main(){
    Student s1;
    Student s2(10, 25);
    cout<<"s1 before assigning: "<<endl;
    s1.display();
    s1 = s2;
    cout<<"s1 after assigning: "<<endl;
    s1.display();
    cout<<"s2 is "<<endl;
    s2.display();
    //Dynamically
    Student* s3 = new Student(11, 26);
    Student* s4 = new Student();
    cout<<"s4 before assigning: "<<endl;
    s4->display();
    s4 = s3;
    cout<<"s4 after assigning: "<<endl;
    s4->display();
    cout<<"s3 is "<<endl;
    s3->display();
    Student s5;
    s5 = *s4;
    cout<<"s5 is "<<endl;
    s5.display();
    delete s3;
    delete s4;
}
