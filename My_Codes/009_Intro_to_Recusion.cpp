//Code by Abhishek Yadav👨🏻‍💻
//Introduction to Recursion

#include<iostream>
using namespace std;

int fact(int n){
    if(n==0){ 
    /*If we not gives this condition then we get 
    segmentation error as we call infinite calls
    for the function
    */
        return 1;
    } 
    int ans = fact(n-1);
    return n*ans;
}
/*When segmentation fault comes?
    1. when we try to use memory that not have alloted for specific variable or is_array
    2. When out of memory
*/
int main(){
    //very Important
    /*Layman- A function calling itself
        Actual- We will use recursion whenever we have a problem that solution
        depends on that small solution.
        For example: n! = n*n-1*n-2*-----*1;
        means: n! = n*(n-1);
        absolutely same nature problem with smaller input of size

    */
   int n;
   cin>>n;
   int output = fact(n);
   cout<<output<<endl;
}

/*  for the factorial of 4! = 24 by recursive method called CallStack
    
    main----------------------( 24 )
     |                          |
     >fact(4)----------------(n*o/p=6*4)
        |                        |
        >fact(3)-------------(n*o/p=2*3)
            |                    |
            >fact(2)---------(n*o/p=2*1)
                |                |
                >fact(1)-----(n*o/p=1*1) 
                    |            |
                    >fact(0)--return 1
*/  

/*Recursion is like a box 
        The function calls first have to wait for the 
        other functions to return their value
        because our problem is divided in parts and every
        function calculate their passed value and pass to the 
        previously called function.
*/