//Code by Abhishek Yadav 👨🏻‍💻
//Insertion sort
#include<iostream>
using namespace std;
// 10 5 1 8 9 4

//In insertion sort we actually shift the elements rather than swap them.
//compare the left part store the current value and the after comparing and shifting 
//get out of inner loop and put the current at its right place i.e., j+1 = current
void insertionSort(int arr[], int size){
    for(int i=1; i<size; i++){
        int current = arr[i];
        int j;
        for(j = i-1; j>=0; j--){
            if(arr[j]>current){
                arr[j+1]= arr[j];
            }
            else{
                break;
            }
        }   
    arr[j+1]=current;
    }
    cout<<"Printing sorted array..."<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the no. of Elements in array: ";
    cin>>n;
    int input[100];
    for(int i=0; i<n; i++){
        cin>>input[i];
    }
    cout<<"Printing Unsorted array..."<<endl;
    for(int i=0; i<n; i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
    insertionSort(input, n);
    
}