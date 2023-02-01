//Code by Abhishek Yadav 👨🏻‍💻
//Quick sort algorithm
/*
    Incase of merge sort we call first half and second half to sort first and merge these sorted array in third one
    but in quickSort 
    Let's say we have array  5 9 8 3 2 7 1
    Quicksort says let pick a element (say 5)let's make that element to its actual position 
    this can be acheived by finding the elements less than that picked element and now
    we have to do something so that element less than 5 comes before 5 and greater elements place after 5 not sorted but
    smaller comes before and greater comes after element 5
    By somehow me make partition around 5 called partitioning function 
    Know my original array divides in two we have to sort  these parts
    After partitioning we have to just call quickSort recursively and all sorted
    So main thing is partition
    int partition(int input[], int si, int ei);
    void quickSort(int input[], int si, int ei){
        //Base case as merge
         call partition by call partiton function partition(input, si, ei);
        pi = partition(input, si, ei); //pi refers to partiotioning index
        quickSort(input, si, c-1);
        quickSort(input, c+1, ei);
    }

    //Now comes to partition function  
    we have array we have to do partition around first element(first element in the range of si and ei)
    we have to check how many elements are less than that first element so find count of smaller elements
    so my picked element goes to si+count index
    but applying above one operation some elements are greater than afterward elements 
    so for this condition take index i at start and j at end then 
    compare the elements of arr[i] and arr[j] with the picked element if both elements arr[i] and arr[j]
    not at right place(means arr[i] is greater than pivot and arr[j] is smaller than pivot) then we swap them
*/
//first make swap function for global use
#include<iostream>
using namespace std;
void swap(int a, int b){
    int t = a;
    a = b;
    b = t;
}

// partition function
int partition(int input[], int si, int ei){
    int pivot = input[si];
    int cSmall = 0;
    for(int i=si+1; i<=ei; i++){
        if(input[i]<=pivot)
            cSmall++;
    }
    int pi = si + cSmall;
    // swap(&input[pi], &pivot)
    input[si] = input[pi];
    input[pi] = pivot;
    
    int i = si;
    int j = ei;
    while(i<pi && j>pi){
        if(input[i]<=pivot)
            i++;
        else if(input[j]>pivot)
            j--;
        else{
            // swap(&input[i], &input[j]);
            int temp = input[i];
            input[i] = input[j];
            input[j] = temp;
            i++; j--;
        }
    }
    return pi;
}

void quickSort(int input[], int si, int ei){
    //Base call
    if(si>=ei)
        return;
    int pi = partition(input, si, ei);
    quickSort(input, si, pi-1);
    quickSort(input, pi+1, ei);
}

void printArray(int input[], int n){
    for(int i=0; i<n; i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n; cin>>n;
    int *input = new int[n];
    for(int i=0; i<n; i++){
        cin>>input[i];
    }
    cout<<"Printing unsorted array..."<<endl;
    printArray(input, n);
    quickSort(input, 0, n-1);
    cout<<"Printing sorted array..."<<endl;
    printArray(input, n);
    delete [] input;
}