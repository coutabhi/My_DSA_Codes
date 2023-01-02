// Code by Abhishek Yadav

#include<iostream>
#include<cstring>
using namespace std;

class Student{
    int age; 
    public:
    char* name;
    Student(int age,char* name){
        this->age = age;
        this->name = new char[strlen(name)+1];
        strcpy(this->name, name);
    }
    Student(Student const &s){
        this->age = s.age;
        this->name = new char[strlen(s.name)+1];
        strcpy(this->name, s.name);
    }
    void display(){
        cout<<"Age of Stuednt "<<name<<" is "<<age<<endl;
    }
};

int main(){
    char name[] = "Abhishek";
    Student s1(20, name);
    s1.display();

    Student s2(s1);

    s2.name[0] = 'S';
    s1.display();
    s2.display();

}