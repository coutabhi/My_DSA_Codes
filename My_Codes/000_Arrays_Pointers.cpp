//Code by Abhishek Yadav 👨🏻‍💻
//Arrays_and_Pointers
#include<iostream>
using namespace std;

int main(){
    int a[5]= {1,2,3,4,5};
    int* ptr = a;
    cout<<a<<" "<<a+1<<endl;
    cout<<*ptr<<" "<<*ptr+1<<*ptr+2<<*ptr+3<<*ptr+4<<endl;
    cout<<*a<<" "<<*a+1<<*a+2<<*a+3<<*a+4<<endl;
    
}