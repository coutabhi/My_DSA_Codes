#include<iostream>
using namespace std;
bool isPrime(int n){
    int d=2;
    while(d<n){
        if(n%d==0)
        return false;
        d++;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    bool a = isPrime(n);
    if(n==0 || n==1)
    cout<<"Not Prime";
    else
    if(a==true){
        cout<<"Prime";
    }
    else
    cout<<"Not Prime";
}