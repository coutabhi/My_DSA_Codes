//Code by Abhishek Yadav
//Tower of Brahmha

#include<iostream>
using namespace std;

//Hypothesis: our

void towerofBrahmha(int n, char s, char h, char d){
    //Base case
     if(n==0){
        return;
    }
    if(n==1){
        cout<<s<<" "<<d<<endl;
        return;
    }
    //Hypothesis
    towerofBrahmha(n-1, s, d, h);
    cout<<s<<" "<<d<<endl;
    towerofBrahmha(n-1, h, s,d);
}

int main(){
    int ndisk;cin>>ndisk;
    char s='a', h='b', d='c';
    towerofBrahmha(ndisk,s,h,d);
    return 0;
}