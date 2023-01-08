//Code by Abhishek Yadav
//Initialisation List

#include<iostream>
#include<cstring>
using namespace std;
/*
Actually we know that we have to assign the values at the time of creation for the constant data members and the members
pass with reference but as we know that during the creation of object the data members of class also allocated with some
garbage value but if incase our data member of class is const or reference variable then we cannot change the values because 
declared values cannot be changed after they created so try to understand in class
*/

class Doctors{
    double salary;
    public:
    int const id; //So here our ID is constant so when object is created and copy constructor will be called then 
    // it will contain a garbage value and not for our use but before that compiler gives error on the object declared line.
    char *name;
    int  TotalCases;
    int &experience;
//Let's see hoe we can handle these reference and constant data members
//in constructor we initialise list like : id(id) here we don't need to use this keyword because
//it is clear in this id(passed id to assigned) like id(id)  in experience we have to use this because we take argument 
//from the class data member because of reference
    Doctors(int id, char *name, int TotalCases): id(id),TotalCases(TotalCases),
    experience(this ->TotalCases){
        this->name = new char[strlen(name)+1];
        strcpy(this->name, name);
    }
// afterwards is extra code stuff you can take a look but main thing is above in constructor class 
//May be you think why we not assign constant data members inside our constructor as name but 
//till we come inside the constructor function our data members got their allocation on memory and what we
//get is error to upadate constant members that why initialisation list comes in action which assign the passed
//value before going in constructor function. We can also assign normal members at initialisation list 
//as we did in TotalCases above.

//Note: If we have any constant and reference data memberes in our class then we have to definately make a 
//Parametrized class without which we get errors.

    void display(){
        cout<<"Doctor's ID Number: "<<id<<endl;
        cout<<"Doctor's Name: "<<name<<endl;
        cout<<"Total Cases done: "<<TotalCases<<endl;
    }
    float rating(int TotalCases){
        return TotalCases/10;
    }
    void adminDisplay(string const &password){
        if(password == "Hello@123"){
        cout<<"Doctor's ID Number: "<<id<<endl;
        cout<<"Doctor's Name: "<<name<<endl;
        cout<<"Total Cases done: "<<TotalCases<<endl;
        cout<<"Salary of Doctor: "<<salary<<endl;
        cout<<"Estimated Experience: "<<rating(TotalCases)<<endl;
        }
        else{
            cout<<"Password is incorrect."<<endl;
            return;
        }
    }
    void setSalary(double salary, string const &password){
        if(password == "Hello@123"){
            this->salary = salary;
        }
        else{
            cout<<"Password is incorrect."<<endl;
            return;
        }
    }
};
int main(){
    char name[] = "Abhishek Yadav";
    Doctors d1(101, name, 79);
    d1.setSalary(85050.50, "Hello@123");
    d1.adminDisplay("Hello@123");
    return 0;
}