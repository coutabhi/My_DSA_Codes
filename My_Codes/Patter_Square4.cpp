#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=n;
        while(j>0){
            cout<<j;
            j--;
        }
        cout<<endl;
        i++;
    }
}