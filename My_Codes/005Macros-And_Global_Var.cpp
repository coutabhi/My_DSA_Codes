//Code by Abhishek Yadav 👨🏻‍💻
//Macros and Global Variables
#include<iostream>
using namespace std;
#define PI 3.14 //this is how we use define

// function for global variable
int a; //This is global variable and used anywhere in code
void g(){
  a++;
  cout<<a<<endl;
}

void f(){
  cout<<a<<endl;
  a++;
  g();
}


int main(){
   //Keywords that make better and fast code
   /*
    1. #define
        why we need this why we not everytime writes constant?
        - It will be hard to change value means if we want to change the value
          So have to change in every place but by define we simply change at once.
          means making me harder for updation in code
        So why we cam't simply make a variable?
        - may be some one or somehow changes value of that variable in operations that will
          ruin my program
   */ 
   int r;
   cin>>r;
   cout<<"Area: "<<r*r*PI<<endl;
   
   //Global variables
   //Simple Concept
   a = 10;
   f();
   cout<<a<<endl;
   /*
    The biggest problem with this is anyone change from anywhere we have to very careful 
    because it can access from anywhere
    So try to not use it as much as possible
    Bad Practice
   */ 
}