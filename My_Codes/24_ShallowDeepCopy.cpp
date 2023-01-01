//Code by Abhishek Yadav👨🏻‍💻
//Shallow copy and deep copy
#include<iostream>
#include<cstring>
using namespace std;

class Student{
    int age; 
    char* name;
    public:
    Student(int age,char* name){
        this->age = age;
        //Shallow Copy Should be not use because changes in one other 
        //objects affected
        // this->name = name;
        //Deep Copy not affects other objects because of new array in 
        //Dynamic memory.
        this->name = new char[strlen(name)+1];
        strcpy(this->name, name);
    }

    void display(){
        cout<<"Age of Stuednt "<<name<<" is "<<age<<endl;
    }
};

int main(){
    char name[] = "Abhishek Yadav";
    Student s1(21, name);
    s1.display();
    name[3] = 'o';
    Student s2(22, name);
    s2.display();
    s1.display();
}