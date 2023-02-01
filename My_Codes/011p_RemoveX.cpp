//Code by Abhishek Yadav👨🏻‍💻
//Remove x

#include<iostream>
using namespace std;

void removeXhelper(char input[], int start, int end){
    if(input[end]=='\0')
        input[start]='\0';
        return;
    if(input[end]!='x'){
        input[start] = input[end];
        start++;
        end++;
        removeXhelper(input, start, end);
    }
    else{
        end++;
        removeXhelper(input, start, end);
    }
}
void removeX(char input[]){
    removeXhelper(input,0,0);
}
int main(){
    char input[100];
    cin.getline(input,100);
    removeX(input);
    cout<<input<<endl;
}
