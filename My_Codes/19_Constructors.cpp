//Code By Abhishek Yadav👨🏻‍💻
//Constructors in C++
#include<iostream>
#include<cstring>
using namespace std;
//Constructors are same name as class name
/*
every time we make an object default constructor is called by itself
default constructor have no argumets and have no return type
Syntax
Student{

}
Actualy when we create an object compiler interpret like below
when we call Student s1;
then s1.Student() is called this constructor 
default value initialise at time only creation
for every object only a single time at time of creation of that object, constructor called.
*/
// We can make many constructors differentiate by arguments 
class Student{
    private:
    int rollNumber;
    public:
    int age;
    Student(){ 
        cout<<"Default Constructor is called"<<endl;
    }
    // Student(int r){
    //     /*We can Create many constructors but make some unique 
    //     by differentiating in argument passing*/
    //     rollNumber = r;
    //     cout<<"Constructor 1 is called."<<endl;
    // }
    Student(int a, int r){
        age = a;
        rollNumber = r;
        cout<<"Constructor 2 is called."<<endl;
    }
    Student(int rollNumber){
        this->rollNumber = rollNumber; //Because of scope of variables if we not use this keyword
        //then we not got anything updated in real rollNumber
        //Actually this keyword holds address of current object.
        cout<<"Constructor 3 is called."<<endl;
        cout<<"Address of this "<<this<<endl;
    }
    void display(){
        cout<<"Age is "<<age<<" "<<"and roll number is "<<rollNumber<<endl;
    }

};
/*If we remove default constructor which not take any arguments and then 
simply writing like: Student s1; gives error because internally compiler
call this as s1.Student() and by removing default one and adding parametrized
constructor compiler not found constructor that is void and taking no arguments
So if we want to use parametrized and default both then write both constructors in class*/
int main(){
    Student s1; //This one called the default constructor
    Student s2(100); //This one called the 3 constructor
    s1.age = 20;
    s2.age = 23;
    cout<<"Address of s2 "<<&s2<<endl;
    Student s3(21, 105); //This one called the 2 constructor
    s1.display();
    s2.display();
    s3.display();
}