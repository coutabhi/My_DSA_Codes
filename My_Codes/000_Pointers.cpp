//Code by Abhishek Yadav 👨🏻‍💻
//Pointers
#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int* b = &a;
    cout<<a<<" "<<*b<<endl;
    cout<<(*b)++<<" "<<++(*b)<<endl;
    cout<<b<<" "<<(&a)<<endl;
    // incase of variables we should not practice the below 4-lines operations
    // as they can crash the whole program or can also gives the segmentation error
    b++;
    cout<<b<<" "<<*b<<" "<<&a<<endl;
    int *c;
    cout<<*c<<endl;
    (*c)++;
    cout<<*c<<endl;
}