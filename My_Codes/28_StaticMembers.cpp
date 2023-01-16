//Code by Abhishek Yadav 👨🏻‍💻
//Static Members

#include<iostream>
using namespace std;

class Student{
    public:
    int rollNumber;
    int age;
    //The properties that are same for all the objects and we don't want to make copies for every object wee
    //declare them as static
    static int totalStudents;//Total number of students present-> This property is combined value for all the students
    //This property belongs to class 

    Student(){
        totalStudents++;
    }
    //As static data members we can also make static function in any class
    int getRollnumber(){
        return rollNumber;
    }

    static int getTotaStudents(){
        return totalStudents; //This will help us if we make totalStudents as private
    }//static funs don't have this address.
   
};
int Student ::totalStudents = 0;//Initialize static data members
// :: known as scope resolution
int main(){
    Student s1;
    cout<<s1.rollNumber<<" "<<s1.age<<endl;
    cout<<Student::totalStudents<<endl; //Way to access static member as because these belongs to class
    cout<<s1.totalStudents<<endl;//This will not give error by compiler but logically it is wrong 
    // s1.totalStudents = 20; //Change with any object changes in class 
    Student s2;
    // cout<<s2.totalStudents<<endl; //Gives 20
    // cout<<Student::totalStudents<<endl;//Gives 20
    cout<<Student::totalStudents<<endl;
}