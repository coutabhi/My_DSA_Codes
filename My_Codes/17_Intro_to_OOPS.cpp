//Code by Abhishek Yadav👨🏻‍💻
//OOPS- Object Oriented Programming
#include<iostream>
#include<cstring>
using namespace std;

/*
IN raw form defination to online mil hi jaegi😉
    In object oriented programming we actually compare our code or 
    we can say relate our code to real world problem
    OOPS gives more clear view how can we apply our code in real life problem
    solving
*/

/*

Actually we make a class- 
A class is basically that defines properties and the function 
of an object that we have to use 
Object- Object is real entity 
for example let say we make any Hospital's Doctor Record for any particular 
hospital so actually we make a class of doctor because we have many doctors 
who have name, ID, Designation, Qualifications etc so we would not like to 
specify the properties every time so Doctor is a class 
and let say d1, d2, d3 are the doctor's object a real entity
*/
//Code by Abhishek Yadav
//So how can we make class
//Syntax

class Doctor{
    public: //This is actually Access modifier 
    /*We have actually three Access modifiers
    1. public -> Can use anywhere in our program 
    2. private -> We can use only inside of class this for if we want to control 
    more on your properties
    *****BY DEFAULT WE HAVE PRIVATE ACCESS MODIFIER*****

    3. protected data members is same as private but child class access protected data members
    we will definately know more about child and parent classes later😉
    */
   //Now every doctor have some properties so 
//    Like as
    int id;
    int age;
    string name;
    string specialist;  
};

int main(){
    //Creating objects statically
    Doctor d1;
    //We can also do like
    Doctor d2, d3, d4, d5;
    //Set Properties
    d1.id = 1;
    d2.id = 2;
    d3.id = 3;
    d4.id = 4;
    d5.id = 5;
    d1.age = 25;
    d2.age = 32;
    d3.age = 26;
    d4.age = 25;
    d5.age = 35;
    d1.name = "Abhishek Yadav"; //just kidding I'm not doctor
    d2.name = "Anurag Singh";
    d3.name = "Kshitij Gautam";
    d4.name = "Ravi Verma";
    d5.name = "Lalit Kishore Tripathi"; //NO one is Doctor all my friends name
    //and all are engineers 😂
    //OK now specialist
    d1.specialist = "Neuro Surgeon";
    d2.specialist = "Cardiologists"; // 💕
    d3.specialist = "Pschycologist";
    d4.specialist = "Dermatologists";
    d5.specialist = "Nephrologists";

    cout<<d1.name<<" "<<d1.specialist<<endl;
    //O/P:
    // Abhishek Yadav Neuro Surgeon
    //We will see efficient ways of input the properties of objects later

    // Create Objects dynamically

    Doctor *d6 = new Doctor;
    (*d6).id = 6;
    (*d6).age = 55;
    //Another way of dereferncing
    d6 -> name = "Dr. Birbal"; //He is real doctor in my city 😂😂
    d6 -> specialist = "Cardiologist";
    cout<<d6->name<<" "<<"Specialist of "<<d6->specialist<<endl;

    //As we know we have to delete dynamically alloted memory by ourself
    delete [] d6;
}