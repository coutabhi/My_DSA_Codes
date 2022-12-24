#include<iostream>
using namespace std;

string getString(int d){
    if(d == 2)
        return "abc";
    if(d == 3)
        return "def";
    if(d == 4)
        return "ghi";
    if(d == 5)
        return "jkl";
    if(d == 6)
        return "mno";
    if(d == 7)
        return "pqrs";
    if(d == 8)
        return "tuv";
    if(d == 9)
        return "wxyz";
    return " ";
}

int numKeypad(int n, string output[]){
    if(n == 0){
        output[0] = "";
        return 1;
    }
    int lastDigit = n%10;
    int smallDigit  = n/10;
    int smallOutput = numKeypad(smallDigit, output);
    string option = getString(lastDigit);
    for(int i=0; i<option.length()-1; i++){
        for(int j=0; j<smallOutput; j++){
            output[j+(i+1)*smallOutput] = output[j];
        }
    }
    int k=0;
    for(int i=0; i<option.length(); i++){
        for(int j=0; j<smallOutput; j++){
            output[k] = output[k] + option[i];
            k++; 
        }
    }
        return smallOutput*option.length();

}

int main(){
    int num; cin>>num;
    string* output = new string[1000];
    int count = numKeypad(num, output);
    for(int i=0; i<count; i++){
        cout<<i+1<<" "<<output[i]<<endl;
    }
    delete [] output;
    return 0;
}