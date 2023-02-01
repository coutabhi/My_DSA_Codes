#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int i=1,k=0;
    while(i<=n)
    {
      int j=i;
      for(int k=1; k<=i; k++ )
      {
    	cout<<j;
        j++;
      }
        cout<<endl;
        i++;
    }
}