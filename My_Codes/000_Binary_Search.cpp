//Code by Abhishek Yadav 👨🏻‍💻
//Binary Search
#include<iostream>
#include "000_selection_Sort.h"
using namespace std;
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int binarySearch(int arr[], int n, int x){
    int start=0, end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(x<arr[mid]){
            end = mid-1;
        }
        else if(x>arr[mid]){
            start = mid+1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the length of Array you wants: ";
    cin>>n;
    cout<<endl;
    int arr[n];
    int val;
    cout<<"Now enter array values separated with a space: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Printing Array... ";
    print(arr, n);
    cout<<endl;
    //Selection Sort
    cout<<"Sorting..."<<endl;
    selectionSort(arr,n);
    cout<<"Printing Array after sort... ";
    print(arr, n);
    cout<<endl;
    //Binary Search
    cout<<"Enter value whose index you wanna find in array after sort: ";
    cin>>val;
    cout<<endl;
    cout<<binarySearch(arr, n, val)<<endl;
    }