//code by Abhishek Yadav👨🏻‍💻
//Merge Sort Algo

#include<iostream>
using namespace std;

void merge(int input[], int si, int ei){
    int size = ei-si+1;
    int mid = (si + ei)/2;
    int* out = new int[size];
    int i = si;
    int j = mid + 1;
    int k = 0;
    while(i<=mid && j<=ei){
        if(input[i]<input[j]){
            out[k] = input[i];
            i++;
            k++;
        }
        else{
            out[k] = input[j];
            j++;
            k++;
        } 
    }
    while(i<=mid){
        out[k] = input[i];
        k++;
        i++;
    }

    while(j<=ei){
        out[k] = input[j];
        k++;
        j++;
    }
    int m=0;
    for(int i=si; i<=ei; i++){
        input[i] = out[m];
        m++;
    }
 delete [] out;
}
void mergeSortAlgo(int input[], int si, int ei){
    if(si>=ei)
        return;
    int mid = (si+ei)/2;
    mergeSortAlgo(input, si, mid);
    mergeSortAlgo(input, mid+1, ei);  
    merge(input, si, ei);
}

void mergeSort(int input[], int size){
    mergeSortAlgo(input, 0, size-1);
}

int main(){
    int length;cin>>length;
    int* input = new int[length];
    for(int i=0; i<length; i++){
        cin>>input[i];
    }
    mergeSort(input, length);
    for(int i=0; i<length; i++){
        cout<<input[i]<<" ";
    }
    delete [] input; //As we allocate memory to heap then we have to delete that
    return 0;
}