//Code by Abhishek Yadav
//Return Subsequences of string
/*
    Every string have 2^n subsequences
    "abc" = (a,b,c,ab,ac,bc,"",abc)
*/
#include<iostream>
using namespace std;
#include<cmath>

int subSeq(string input, string output[]){
    if(input.empty()){
        output[0] = "";
        return 1;
    }
    string smallString = input.substr(1);
    int smallOutput = subSeq(smallString, output);
    for(int i=0; i<smallOutput; i++){
        output[i+smallOutput] = output[i]+input[0];
    }
    return 2*smallOutput;
}
int lamb(string input){
    int n = input.size();
    return pow(2, n);
}
int main(){
    string input;
    cin>>input;
    int n = lamb(input);
    string* output = new string[n];
    int count = subSeq(input, output);
    cout<<"Printing subsequences... "<<endl;
    for(int i=0; i<n; i++){
        cout<<i+1<<" "<<output[i]<<endl;
    }
    // cout<<endl;
    delete [] output;
}