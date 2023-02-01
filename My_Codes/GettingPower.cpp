#include <iostream>
using namespace std;
int power(int x, int n)
{  
    int pow = 1; //initializing our result by 1
    for (int i = 0; i < n; i++) {
        pow = pow * x;
    }
    return pow;
}
int main()
{   
    int x,n;
    cin>>x>>n;
    int pow = power(x,n);
    cout<<pow<<endl;
    return 0;
}