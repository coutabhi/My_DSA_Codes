#include<iostream>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    cin>>x;
    cout<<x;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }

}