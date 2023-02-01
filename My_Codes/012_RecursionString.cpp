//Code by Abhishek Yadav
//Recursion and Strings

//Que.1: Find length of string using recursion
#include<iostream>
using namespace std;
//function for string len
int stringLen(char input[]){
    if(input[0]=='\0')
        return 0;
    return stringLen(input+1) + 1;
}
//Remove x
void removeX(char input[]){
    //Base Case
    if(input[0]=='\0')
        return;
    if(input[0]!='x'){
        removeX(input+1);
    }
    else{
        int i=1;
        for(; input[i]!='\0'; i++){
            input[i-1]=input[i];
        }
        input[i-1]=input[i];
        removeX(input);
    }
}
int main(){
    char input[100];
    cin.getline(input,100);
    cout<<input<<endl;
    int l = stringLen(input);
    cout<<"Length of given string is: "<<l<<endl;
    removeX(input);
    cout<<input<<endl;
    l = stringLen(input);
    cout<<"Length of given string is: "<<l<<endl;
}