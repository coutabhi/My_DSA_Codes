//Code by Abhishek Yadav
//Remove Duplicates

#include<iostream>
using namespace std;

void removeConsecutiveDuplicates(char* input){
    if(input[0]=='\0')
        return;
    if(input[1]!=input[0]){
        removeConsecutiveDuplicates(input+1);
    }
    else{
        int i=1;
        for(; input[i]!='\0'; i++){
            input[i-1]=input[i];
        }
        input[i-1]=input[i];
        removeConsecutiveDuplicates(input);
    }
}

int main(){
    char s[100000];
    cin>>s;
    removeConsecutiveDuplicates(s);
    cout<<s<<endl;
}