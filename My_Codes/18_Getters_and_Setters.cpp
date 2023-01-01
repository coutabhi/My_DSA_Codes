//Code By Abhishek Yadav👨🏻‍💻
//Getters and Setters
#include<iostream>
#include<cstring>
#include <algorithm>
#include <cctype>
using namespace std;
//Let's take another type of class

class Student{
    public:
    int rollNumber;
    string name;
    int standard;

    private:
    int age;
    string contactNumber;
    string city;


    //we cannot access private data members from outside class
    //let see how can we assign values
    public: //As we define below things are public till we again not redifine access modifier
    void display(){
        cout<<name<<" "<<"Have roll no> "<<rollNumber<<" "<<
        "Studied in "<<standard<<" Standard"<<endl;
    }
    //Below functions are getters - used to read private data members
    int getAge(){
        return age;
    }
    string getContact(){
        return contactNumber;
    }
    string getAddress(){
        return city;
    }
    //Below functions are setters - used to write,edit,update private data members
    void setAge(int a){
        if(a<4){ //This is one of reason to use private data members
        //As we can control more on user input
            cout<<"Entered age is invalid"<<endl;
            return;
        }
        age = a;
    }

    void setContact(string b){
        if(b.length()==10){
            contactNumber = b;
        }
        else  
            return;
    }

    void setCity(string s){
        if(s.capacity()>15){
            return;
        }
        s.erase(std::remove_if(s.begin(), s.end(), ::isspace),
        s.end());
        city = s;
    }
};
int main(){
    Student s1;
    Student *s2 = new Student;
    s1.name = "Abhishek Yadav"; //As we can see no control on input
    s1.rollNumber = 101;
    s1.standard = 12;
    s2->name = "Anurag Singh";
    s2->rollNumber = 109;
    s2->standard = 13;
    s1.setAge(22);
    s1.setContact("1234567890");
    s1.setCity("Lucknow");
    s2->setAge(23);
    s2->setContact("2913455625");
    s2->setCity("Gurgaon");
    s1.display();
    s2->display();
    delete s2;
}