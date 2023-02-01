//This code originally contributed by Mayank Tyagi 
//Rewrite by Abhishek Yadav by some modifications👨🏻‍💻
#include<iostream>
using namespace std;

void merge(int input[], int const left, int const mid, int const right){
    auto const subArrayOne = mid-left+1;
    auto const subArrayTwo = right-mid;

    auto *leftArray = new int[subArrayOne];
    auto *rightArray = new int[subArrayTwo];

    //Copy data to temp arrays leftArray[] and rightArray[]
    for(auto i=0; i<subArrayOne; i++)
        leftArray[i]=input[left+i];
    for(auto j=0; j<subArrayTwo; j++)
        rightArray[j]=input[mid+1+j];
    auto indexofSubArrayOne = 0, indexofSubArrayTwo = 0;
    int indexofMergedArray=left;

    //Merge the temp Arrays back into input array

    while(indexofSubArrayOne<subArrayOne && indexofSubArrayTwo<subArrayTwo){
        if(leftArray[indexofSubArrayOne]<=rightArray[indexofSubArrayTwo])
            {
                input[indexofMergedArray] = leftArray[indexofSubArrayOne];
                indexofSubArrayOne++;
            }
        else
            {
                input[indexofMergedArray] = rightArray[indexofSubArrayTwo];
                indexofSubArrayTwo++;
            }
            indexofMergedArray++;
    } 
    //Copy the remaining elements of left[], if there any
    
    while(indexofSubArrayOne<subArrayOne){
        input[indexofMergedArray] = leftArray[indexofSubArrayOne];
        indexofSubArrayOne++;
        indexofMergedArray++;
    }
    //Copy the remaining elements of left[], if there any

    while(indexofSubArrayTwo<subArrayTwo){
        input[indexofMergedArray] = rightArray[indexofSubArrayTwo];
        indexofSubArrayTwo++;
        indexofMergedArray++;
    }
    delete[] leftArray;
    delete[] rightArray;
}

void mergeSort(int arr[], int const begin, int const end){
    if(begin>=end)
        return;
    auto mid = begin + (end-begin)/2;
    mergeSort(arr, begin, mid);
    mergeSort(arr, mid+1, end);
    merge(arr, begin, mid, end);
}

void printArray(int A[], int size){
    for(auto i=0; i<size; i++){
        cout<<A[i]<<" ";
    }
}

int main(){
    int arr[] = {12, 11, 13, 5, 6, 7};
    auto arr_size = sizeof(arr) / sizeof(arr[0]);

    cout<<"Given array is \n";
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size-1);

    cout<<"\nSorted Array is \n";
    printArray(arr,arr_size);
    return 0;
}