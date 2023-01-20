//Code by Abhishek Yadav👨🏻‍💻
//Recursion on String

#include<iostream>
using namespace std;

//String have hidden charactere array 
//We can modify strings but we cannot modify the char arrays we can also add characters in strings
//

int main(){
    string s = "abc";
    string s1;
    s1 = "def";
    cout<<"s1 is "<<s1<<endl;
    s1 = "Hello_S1";
    cout<<s1<<endl;
    string *sp = new string;
    *sp = "Hello";
    cout<<sp<<endl;
    cout<<*sp<<endl;
    *sp = "HelloWorld";
    cout<<*sp<<endl;
    cout<<s<<endl;
    int n=5;
    char so[5]={'h','e','l','l'};
    cout<<"char so is "<<so<<endl;
    //To get whole string as like whole "Abhishek Yadav" for that if we use cin to take the input 
    //so as we know that cin breaks to take input we it gets any space, escape, tab
    //So we can use cin.getline() function

    string sabd;
    cout<<"Taking string input..."<<endl;
    getline(cin,sabd);
    cout<<sabd<<endl;
    cout<<"String printed."<<endl;
    //We can also do following
    cout<<sabd[0]<<endl;
    //or
    sabd[0] = 'l';
    cout<<sabd[0]<<endl;
    cout<<sabd<<endl;
    //or concate string example
    string sabd1 = "Welcome to my Channel ";
    string sabd2;
    cout<<"Please enter your name: ";getline(cin,sabd2);cout<<endl;
    string conSabd = sabd1 + sabd2;
    cout<<conSabd<<endl;
    //or sabd1 += sabd2; //Valid h by this sabd1 will add sabd2 in it.

    //We got string size by
    int lamb  = sabd1.size();//or sabd.length() same work
    cout<<"The length of sabd1 is "<<lamb<<endl;
    //we have function substr that give substring of our string
    cout<<sabd1.substr(0,5);//or
    cout<<sabd1.substr(4,5);//first parameter is starting point and second is length
    //We can find in string that give index
    cout<<sabd1.find("to")<<endl;
    // cout<<sabd1.find("kokok")<<endl; if that substring is not in string gives garbage value
    
     delete sp;
}