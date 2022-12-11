//Code by Abhishek Yadav👨🏻‍💻
//String to Integer

#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

int stringToNumber(char input[]){
    if(strlen(input)==1)
        return(input[0]-'0');
    int y = stringToNumber(input+1);
    int x = input[0]-'0';
    x = x*pow(10, strlen(input)-1)+y;
    return x;
}

int mainI(){
    char input[50];
    cin>>input;
    cout<<stringToNumber(input)<<endl;
}