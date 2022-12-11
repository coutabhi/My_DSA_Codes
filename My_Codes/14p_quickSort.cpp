#include<iostream>
using namespace std;

void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i =  (low-1);

    for(int j = low; i<n
    
    ; i++){
        
    }
}

void quickSort(int input[], int size){
-
}

int main(){
    int n;cin>>n;
    int* input = new int[n];

    for(int i=0; i<n; i++){
        cin>>input[i];
    }
    quickSort(input, n);
    for(int i=0; i<n; i++){
        cout<<input[i]<<" ";
    }
    delete [] input;
}