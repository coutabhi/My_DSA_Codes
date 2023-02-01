//Code by Abhishek Yadav👨🏻‍💻
//Print Subsequences directly to save memory space
#include<iostream>
using namespace std;

void printSubseq(string input, string output){
    if(input.empty()){
        cout<<output<<endl;
        return;
    }
    printSubseq(input.substr(1), output);
    printSubseq(input.substr(1), output+input[0]);
}

int main(){
    string str;
    string output = "";
    getline(cin,str);
    printSubseq(str, output);
    return 0;
}