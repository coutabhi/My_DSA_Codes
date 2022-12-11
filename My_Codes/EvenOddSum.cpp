#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int n;
    cin>>n;
    int evenSum=0,oddSum=0;
    while(n>0){
        int rem = n%10;
        if(rem%2==0){
            evenSum+=rem;
        }
        else{
            oddSum+=rem;
        }
        n/=10;
    }
	cout<<evenSum<<" "<<oddSum;
    return 0;
}