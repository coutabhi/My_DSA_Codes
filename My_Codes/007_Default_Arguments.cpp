//Code by Abhishek Yadav 👨🏻‍💻
//Default Arguments
#include<iostream>
using namespace std;

//Actully default arguments are those which are not passed from calling function
//So function uses there a default argument as specified 

int sum(int arr[], int size, int start=0){ 
/*
    Here we declared default value of start index
    if we not give default and the not pass three values in calling function then compiler gives
    runtime error
*/
    int ans = 0;
    for(int i=start; i<size; i++){
        ans += arr[i];
    }
    return 0;
}

/*
    we can give default arguments from right we can not give default to left argument
    of function only.
    We can give the default value to all arguments but from right in continous manner.
*/

int numSum(int a, int b=0, int c=0, int d=0){
    return (a+b+c+d);
}

int main(){
    int arr[10];
    for(int i=0; i<10; i++){
        cin>>arr[i];
    }
    cout<<sum(arr,10,3)<<endl; //This gives sum from third index
    cout<<sum(arr,10,0)<<endl; //This gives sum from zeo index
    cout<<sum(arr,10)<<endl; //This will also gives sum from zeo index as we decalre default
    //start index is 0

    int x,y;
    cin>>x>>y;
    cout<<"The sum is: "<<numSum(x,y)<<endl;
}