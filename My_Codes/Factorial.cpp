#include<iostream>
using namespace std;

int fact(int n, int r){
    int i=1;
    cout<<r;
    int ans=1;
    while(i<=n){
        ans*=i;
        i++;
    }
    return ans;
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<fact(n,r)/(fact(r,r)*fact(n-r,r));
}
//I'm checking here is r is acesible in fact able providing in arguments.