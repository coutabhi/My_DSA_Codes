#include<iostream>
using namespace std;
/*Extended form of PMI
    Base Case: Prove base case is true like F(0) or F(1) is true
    Induction Hypothesis: Assume F(i) is true for all 0<=i<=k.
    Induction Step: Use Induction Hypothesis to prove F(k+1) is true
*/
//Fibonacci Series: 0 1 1 2 3 5 (sum of previous two no.s)
int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int sOutput1 = fib(n-1);
    int sOutput2 = fib(n-2);
    int output = sOutput1 + sOutput2;
    return output;
}

int main(){
    int queries;
    cout<<"How many terms you needed \n we can provide max of 20 terms: ";
    cin>>queries;cout<<endl;
    if(queries>20){
        cout<<"Sorry your input is greator tha 20. Pls. restart program to continue. ";
    }
    while(queries--){
        int a;
        cout<<"Enter which term of fibo you need: ";
        cin>>a;
        cout<<endl;
        cout<<"The "<<a<<"th term of fibonacci series is: "<<fib(a)<<endl;
    }
}