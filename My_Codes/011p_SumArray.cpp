//Code by Abhishek Yadav 👨🏻‍💻
//Sum of Array elements using recursion
#include<iostream>
using namespace std;
/*
    Base call
    Recursive call
    Small calculation
*/
int sum(int input[], int n){
    if(n==0)
        return 0;
    return input[0]+sum(input+1, n-1);
}
//Another Way
int sum2(int input[],int n){
    if(n==0)
        return 0;
    return sum(input, n-1) + input[n-1];
}
//Another Way
int sum3(int input[], int n){
    if(n==0)
        return 0;
    return input[0]+sum(input+1, (n/2)-1) + input[n-1] + sum(input + n/2, n-1);
}
int main(){
    cout<<"Enter the length of input array(Should br less than 21. ";
    int n;
    cin>>n;
    cout<<endl;
    if(n>20){
        cout<<"Please enter value less than 21."<<endl;
    }
    else{
        int arr[100];
        cout<<"Enter the elements of Array: "<<endl;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int output = sum(arr, n);
        cout<<"The Sum of your array have "<<n<<" elements is: "
        <<output<<endl;
    }
}