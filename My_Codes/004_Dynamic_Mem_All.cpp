//Code by Abhishek Yadav 👨🏻‍💻
//Dynamic memory allocation
#include<iostream>
#include<climits>
using namespace std;

int main(){
    /*
        Why decalaring array with n variable is bad practice?
        There are two types of Memory
    
        1. Stack Memory:
            Store less
        2. Heap Memory
            Store More
        int i=10;
        int a[20];
        this in stack memory
        if a[20000];
        also in stack
        but if a[n]
        -->Allocation of memory in stack known as static allocation
        this is in stack but can create problem as we declare in runtime
        so may be user input a large n so that stack can't hold
        So for this we have to store it in heap memory let see how?
        -->Allocation of memory in heap known as Dynamic allocation
        so to allocate memory in heap
        we have to use ***new*** keyword
        new int;  --> This create 4 byte memory in heap
        we can not give name to variable in heap memory 
        Actually new gives the address of that memory let see how?
        int* p = new int;
        now, 
        *p = 10;
        int* pd = new double;
        *pd = 10.5;
    */
    int* p = new int;
    //Here 4 bytes allocates in heap and 8 bytes for memory allocates for stack
    *p =10;
    cout<<*p<<endl;
    double* pd = new double;
    //Here 8 bytes allocates in heap and 8 bytes for memory allocates for stack
    *pd = 7.5;
    cout<<*pd<<endl;
    //How to allocate array in heap?
    int* arr = new int[50];
    //Here we can also do below 
    int n;
    cin>>n;
    int* arr2 = new int[n];
    for(int i=0; i<n; i++){
        cin>>arr2[i];
    }
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr2[i]>max){
            max = arr2[i];
        }
    }
    cout<<"Maximum is: "<<max<<endl; 
    /*
        When we allocate memory in stack that memory releases itself when scope is ended
        but incase of dynamic memory allocation memory requires manually deletion as follows;
    */
   int *x = new int;
   *x = 20;
   cout<<"The x is: "<<*x<<endl;
   delete x;
   cout<<"The x is: "<<*x<<endl;

   //delete x not delete pointer x in stack this will delete the heap memory of address x
   //After delete x we can allocate another heap memory address to x
    x = new int;
   cout<<"The x is: "<<*x<<endl;
   delete x;

   //Delete array from heap

   x = new int[100];
   //As we delete x so x is again free to get another address
   delete [] x;

// Dynaminc Memory Allocation in 2D arrays

// int *p = new int[20];  Simple array
// let we have to make 2d array of 10 rows and 20 columns 
// so we can make 10 arrays(of size 20) having 20 columns
// so all the ten arrays have their own addresses
// so we need to store all the arrays starting addresses somewhere
// so we have to made array of integer pointers
// so store pointers of all arrays in heap needs double pointer as below
// int** arrptr = new int*[10];
int m, col;
cin>>m>>col;
int** arrptr = new int*[m];
for(int i=0; i<m; i++){
    arrptr[i] = new int[i+1];
    for(int j=0; j<col; j++){
        cin>>arrptr[i][j];
    }
}
for(int i=0; i<m; i++){
    for(int j=0; j<i+1; j++){
        cout<<arrptr[i][j]<<" ";
    }
    cout<<endl;
}
//To delete  the 2 d in heap
for(int i=0; i<m; i++){
    delete [] arrptr[i];
}
delete [] arrptr;

}