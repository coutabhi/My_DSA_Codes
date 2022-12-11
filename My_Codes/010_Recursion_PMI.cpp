//Code by Abhishek Yadav👨🏻‍💻
//Recusion and PMI

#include<iostream>
using namespace std;
/*Main principle behind Recursion---PMI
    Principle of Mathematics Induction
    Let's say we have to prove:
        F(n) is true for all natural numbers
    So According to PMI we do in simple three steps
    1. Base Case --- Prove F(0) or F(1) is true
    2. Induction Hypothesis --- Assume that F(k)is true
    3. Induction Step --- using step(2) prove that f(k+1) is true.
    
    Try for formula of sum of natural numbers
    i.e.,F(n) = n(n+1)/2
    1.Base Case, F(0),LHS = summation(n) = 0
                      ||
                      RHS = n(n+1)/2 = 0 (Hence Proved)
    2.Inductin Hypothesis, F(k), k(k+1)/2, Assumes this is true

    3.Induction Step, F(k+1) = (k+1)(k+2)/2;
                    ,summation(k+1) = (k+1)+summation(k);
                    ,summation(k+1) = ((k+1)2/2)+k(k+1)/2;
                    ,summation(k+1) = (k+1)(2+k)/2;
                                                (Hence Proved)
    So we proved the value is true for any k if 
    it true for k+1
*/

int fact(int n){
    //Base case
    if(n==0){
        return 1;
    }
    int ans = fact(n-1);//hypothesis
    int output = n*ans;//this is to be proved if n-1 true the n also
    return output;
}

int main(){
    //We have not to go in detail in the recusion that make you
    //weak in recursion
    int queries;cin>>queries;
    while(queries--){
        int n; cin>>n;
        int ans = fact(n);
        cout<<"The factorial of "<<n<<"is: "<<ans<<endl;
    }
}