//Code by Abhishek Yadav 👨🏻‍💻
//Star Pattern notes you can take reference
#include<iostream>
using namespace std;
int main()
{
int n, s, i, j;
cin >> n;
for(i = 1; i <= n; i++)
{
//for loop for displaying space in op
for(s = i; s < n; s++)
{
cout << " ";
}
//for loop to display star equal to row number
for(j = 1; j <= (2 * i - 1); j++)
{
cout << "*";
}
// ending line after each row
cout << "\n";
}
}
