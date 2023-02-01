//Code by Abhishek Yadav👨🏻‍💻
//Pair by star
#include<iostream>
#include<cstring>
using namespace std;

void pairStar(char input[]){
    int n = strlen(input);
    if(n<=1){
        return;
    }
    if(input[1]==input[0]){
        for(int i=strlen(input); i>=1; i--){
            input[i+1] = input[i];
        }
        input[1] = '*';
    }
    return pairStar(input+1);
}

int main(){
    char input[100];
    cin.getline(input, 100);
    pairStar(input);
    cout<<input<<endl;
}