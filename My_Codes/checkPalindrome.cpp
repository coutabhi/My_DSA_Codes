#include <iostream>
#include <map>
using namespace std;

int length(char str[]){
    int count = 0;
    for(int i=0; str[i]!='\0'; i++){
        count++;
    }
    return count;
}
bool isPalindrome(char str[]) {
    int n = length(str);
    for(int i=0; i<(n/2)+1; i++){
        if(str[i]!=str[n-1-i]){
            return false;
        }
    }
    return true;
}

bool isPossible(char str[], int n){
    for(int i=0, j=(n-1-i); i<n; i++, j--){
        if(i==j){
            continue;
        }
        if(str[i]=='1'){
            str[i] = '0';
        }
        else if(str[i]=='0'){
            str[i] = '1';
        }
        if(str[j]=='1'){
            str[j] = '0';
        }
        else if(str[j]=='0'){
            str[j] = '1';
        }
        int res =isPalindrome(str);
        if(res == 1) {
            return true;
        }
    }
      return false;
}

int main(){
    int t; 
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char str[n];
        cin>>str;
        int resu = isPossible(str,n); 
        if(resu == 1){
            cout<<"YES"<<endl;
        }       
        else{
            cout<<"NO"<<endl;
        }
    }
}