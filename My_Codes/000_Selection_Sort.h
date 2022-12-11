//Code by Abhishek Yadav 👨🏻‍💻
//Functions
#include<iostream>
#include<algorithm>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int min = arr[i], minIndex=i;
        for(int j=i; j<n; j++){
            if(arr[j]<min){
                min=arr[j];
                minIndex=j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}
void bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=i; j<n; j++){
            if(arr[j]<arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void insertionSort(int arr[], int n){
    int i, key, j;
    for(int i=1; i<n; i++){
        key = arr[i];
        j = i-1;

        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}
void merge(int arr1[], int size1, int arr2[], int size2, int ans[]){
        int i = 0, j = 0, k = 0;
        while(i<size1){
            ans[k++] = arr1[i++];
        }
        while(j<size2){
            ans[k++] = arr2[j++];
        }

        int n = size1 + size2;
        sort(ans, ans+1);

}