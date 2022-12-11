//Code by Abhishek Yadav 👨🏻‍💻
//Check Number Problem
#include<iostream>
using namespace std;

bool isPresent(int input[], int size, int x){
    if(size==0)
        return false;
    if(input[0]==x)
        return true;a
    return isPresent(input+1, size-1, x);
}

int main(){
    cout<<"Enter the length of input array(less than 21): ";
    int n;
    cin>>n;
    cout<<endl;
    if(n>20)
        cout<<"Pls restart program and enter value less than 21"<<endl;
    else{
        int input[100];
        cout<<"Enter elements of array. ";
        for(int i=0;i<n;i++){
            cin>>input[i];
        }
        cout<<endl;
        cout<<"Enter the value to check if it is present in \n input array or not. ";
        int target;cin>>target;cout<<endl;
        if(isPresent(input, n, target)){
            cout<<"The entered number is present in array. "<<endl;
        }
        else
            cout<<"The entered value is not present in the input array."<<endl;
    }

}