//Code by Abhishek Yadav 👨🏻‍💻
//TypeCasting
#include<iostream>
using namespace std;

int main(){
    int i = 65;
    char c = i;
    cout<<i<<endl;
    cout<<c<<endl;

    int*p = &i;
    char *pc = (char*)p;
    cout<<*p<<endl;
    cout<<*pc<<endl;
    cout<<*(pc+1)<<endl;
    cout<<*(pc+2)<<endl;
    cout<<*(pc+3)<<endl;
    cout<<p<<endl;//This prints the address in hexadecimal form
    cout<<pc<<endl;//This prints A the first character of the data in
    //that address because this is the pointer of char and behaves differently 
    //it print till not found the null character.
    
}