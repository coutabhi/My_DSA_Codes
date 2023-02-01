//Code by Abhishek Yadav 👨🏻‍💻
//Recursion and Arrays
#include<iostream>
using namespace std;
//We have given an array check if array is sorted recursively.
/*
    if size is zero or one so we can say the array is sorted
    Base Case: same zero or one
*/

bool isArraySorted(int arr[], int n){
    if(n==0 || n==1) //Base Case
        return true;
    if(arr[0]>arr[1]) 
        return false;
    bool isSubArraySorted = isArraySorted(arr+1, n-1); //induction hypothesis
    return isSubArraySorted;  //induction step
    /* or if(isSubArraySorted)
        return true;
    else 
        return false;*/
}

//Alternative
bool isArraySorted2(int arr[], int n){
    if(n==0 || n==1)
        return true;
    bool isSubArraySorted=isArraySorted2(arr+1, n-1);
    if(!isSubArraySorted)
        return false;
    if(arr[0]>arr[1])
        return false;
    else    
        return true;
}
int main(){
    cout<<"Enter the length of array you going to input. ";
    int n;
    cin>>n;
    cout<<endl;
    if(n>20){
        cout<<"🙂🤯 Restart your program and enter value less than 21;"<<endl;
    }
    else{
        int input[100];
        cout<<"Enter the array elements: "<<endl;
        for(int i = 0; i<n; i++){
            cin>>input[i];
        }
        if(isArraySorted(input, n)){
            cout<<"Hurray!(: your life is sorted."<<endl;
        }
        else{
            cout<<":( Your Life got messy"<<endl;
        }
    }
}