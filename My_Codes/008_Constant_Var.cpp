//Code by Abhishek Yadav 👨🏻‍💻
//Constant Variables
#include<iostream>
using namespace std;

//use of constant
void f(int const * p){
    // (*p)++; read only
}

void g(int const & a){
    /*
        a++;//here also read only unlike  normal reference where we can able to change
        self as well as calling function variable
        As we know using reference we can change and also not have to make a copy
    */
}

int main(){
    //const
    int i=10;
    cout<<"The normal variable i: "<<i<<endl;
    //I can simply change it when I want like i = 12
    i = 12;
    cout<<"The normal variable i after increment: "<<i<<endl;
    /*
        But if we put const keyword before int then we can not alter or 
        upgrade that int after declaration
    */
    const int x = 9;
    cout<<"The const variable that cannot be altered after: "<<x<<endl;
    /*
        We have to assign const int at the same time of declaration
        same as reference variable
    */
    //constant reference from a non const int
    int j = 12;
    cout<<"J is: "<<j<<endl;
    const int &k = j;
    cout<<"K before increment j: "<<k<<endl;
    // k++; not able to increment k
    j++;//We can able to do it
    //Actually the path is constant not the storage
    cout<<"J after increment j: "<<j<<endl;
    cout<<"K after increment j: "<<k<<endl;
    /*
        both const int or int const valid same for other data types like const char  or
        char const
    */
    //constant reference from const int
    int j2=12;
    int const &k2 = j2;
    //Now we cannot do j2++ or k2++

    //Reference from a const int
    int const j3=100;
    cout<<"Cannot take reference for a normal int from const int j3: "<<j3<<endl;
    /*
        int &k3 = j3;//We cannot do like this "Karna kya chahte ho"
        Let's see in the pointers
    */
    int const p = 10;
    cout<<"Cannot make normal pointer for the const variable "<<p<<endl;
    /* 
        int* ptr = &p;//We cannot store address of the constant variable in the
        normal pointer
    */
    //we use
    int const* ptr =&p;
    cout<<"we can use int const* ptr = &p for the const int pointer "<<*ptr<<endl;
    /*
        This path is also become Read only
        We can also declare a constant pointer of normal variable
    */
    int q = 100;
    cout<<"We can also declare a constant pointer of noraml variable "<<q<<endl;
    int const *qtr = &q;//this is valid
    /*
        Now here we have to path for the same storage one is const ptr and another one
        normal integer we cannot change value by using ptr path as it is constanr but we 
        can from do operations in variable q
    */
    //Always remember path is constant not storage ASAF. 😁

    /*
        Now special question what is the use of constant variable.🤔
        Major benifit of const variable is in function call let say we have a function in 
        which we give argumenta as a poiter of my main variable but what is the guarantee 
        your function not changes your main variable because you pass the address of 
        variable so function can easily changes the main variable or calling function 
        variable so that's why we only give const pointer to function so that the 
        function not able to change or upgrade my calling function variable if  I don't
        want that
    */
   //Example of use of const in function.

   int s = 120;
   f(&s);
   cout<<"We pass the address of s variable but I take int as const in fun"<< 
   "so this f func. not able to change s in function"<<s<<endl;

   //Another thing 

   int u = 10;
   int v = 13;
   int const* utr = &u; //This means utr is pointer to a constant integer so utr can change
   //but not the *utr that int
   utr = &v; //This is valid *utr =  v is not valid
   // *utr =  v //not valid
   int * const u2 = &u; //This means u2 constant pointer to a int so here we cannot change
   //the u2 the pointer which is constant but able to change int u;
   (*u2)++;//Here valid
   //u2 = &v; /Not valid
   
   //Another thing

   int const * const ptr2 = &i;
   //Simply here both are constant we cannot change anything
   /*
    ptr2 = &v;
    (*ptr)++; 
    both upper lines are invalid
   */
}