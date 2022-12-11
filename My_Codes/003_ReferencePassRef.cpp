//Code by Abhishek Yadav 👨🏻‍💻
//References and Pass by reference
#include<iostream>
using namespace std;

void increment(int n){
    n++;
    // This function not changes the main variable.
}
void incrementRef(int& n){
    n++;
}

/*
    Bad Practices
    int& f(int n){
        int a = n;
        return a;
    }
    int* f2(){
        int i=10;
        return &i;
    }
*/

int f(int n){
    int a = n;
    return a;
}

int main(){
    //Reference variables
    int i=10;
    int j = i;
    i++;
    cout<<j<<endl;
    //changing i here not affect the j variable.
    //we have declare reference variable for j.
    int& k = i;
    cout<<k<<endl;
    i++;
    cout<<k<<endl;
    /*
        So both i and k affects when we change anyone of them because both refer
        to the same memory.
        we do like this 
        int i;
        i=10;
        but below one gives error
        int& j;
        j=i;
        because we declare j as reference variable that requires initializer.
        Why we need reference variable?
        As we know functions are makeing there own variables
        So changing functions variables not affects the main variable
        But incase if we wanna also affect the changes in the main memory
        So in that case we can use reference variables.
    */
    int l = 100;
    increment(l);
    cout<<"Val of l is: "<<l<<endl;
    incrementRef(l);
    cout<<"Val of l is: "<<l<<endl;
    /*
        So on run we can find the first increment fun not 
        affect the value of the l But the second function 
        in which we pass reference argument that affects 
        the val of l
    */
}