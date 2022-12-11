// operation: X = X^X>>Y;
// Single Operation Part I-Maximize value of x
//in Single Operation Part II just replace 0 with 1 and index start with 1.
// in single operation part II minimize the value of x.
#include<bits/stdc++.h>
using namespace std;
int fib(int x){
   if(x<=2){
      cout<<x;
   }
   int a = 1;
   int b = 2;
   for(int i=)
}
void singleOperation(string str, int length)
{
   cin>>length>>str;
   for(int i=0;i<length;++i)
   {
      if(str[i]=='0')
      {
         cout << i << endl;
         return;
      }
   }
   cout<<length<<endl;
}

int main()
{
   int t;
   cin>>t;
   while(t--)
   { 
    int length;
    string str;
    singleOperation(str,length);
   }
}