//Code by Abhishek Yadav 👨🏻‍💻
//Inline function and Default arguments
#include<iostream>
using namespace std;

int max(int a, int b){
    return (a>b)?a:b;
}

//Inline Function
inline int min(int a, int b){ 
    return (a<b)?a:b;
}

int main(){
    int a, b;
    cin>>a>>b;
    
    int c;
    if(a>b)
        c = a;
    else
        c= b;
    /*
        We have a shortcut for this if and else
        Known as Tertiay Opeator: Have three arguments as follows:
    */
    int c = (a>b)?a:b;
    /*
        This means if (a>b) the c=a, else c=b
        let we make a func for the same because we use this operation many times;
    */
    int x, y;
    cin>>x>>y;
    int z = max(a,b); //looks cool
    /*
        What is the disadvantages of making a function?
        Every time we call a function, old function pause, we make copies of passed 
        arguments and then compiler runs calling func the return as specified so that 
        slowdown the performance very minor not major.
        But when we make function of one line we can make that function as inline func
    */
    //INLINE FUNCTION: the above function as example.
    cout<<"INLINE FUNCTIONS..."<<endl;
    cout<<"Enter two values to find minimum"<<endl;
    int u,v;
    cin>>u>>v;
    int w = min(u,v);
    cout<<"The minimum is: "<<w<<endl;
    /*
        Inline use as copying the code when we use inline then the code in inline function
        copied in same function from where the inline function called this copying done by
        compiler itself and at runtime no function present(no function means inline waala func
        present nhi hoga isse thoda sa cpde ka performance accha ho jaega.. thoda sa)
        

        PROBLEM 
        we can use inlile mainly for one line code
        we can alse inline 2-3 line code but it depends on compiler to inline it or not
        sometimes compiler inline 2-3 lines inline code sometimes not 
        more than 3 lines code: compiler not able to inline we have to make a normal calling
        function 

        SO good practice is not to make inline a function have more than a line code
        I can inline a line code func happily :)
        
    */
}