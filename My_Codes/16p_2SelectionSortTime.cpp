//Code by Abhishek Yadav👨🏻‍💻
//Selction Sort time check
#include<sys/time.h>
#include<iostream>
using namespace std;

long getTimeinMicroSeconds(){
    struct timeval start;
    gettimeofday(&start,NULL);
    /* The gettimeofday() function shall obtain the current time, expressed 
    as seconds and microseconds since the Epoch, and store it in the timeval 
    structure pointed to by tp. The resolution of the system clock is unspecified.*/
    return start.tv_sec*1000000 + start.tv_usec;
}

void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int min = arr[i];
        int pos = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<min){
                min = arr[j];
                pos = j++;
            }
        }  
            int temp = arr[i];
            arr[i] = min;
            arr[pos] = temp;
    }
}

int main(){
    for(int  n=10; n<=1000000; n*=10){
        int *arr = new int[n];
        long startTime, endTime;
        for(int i=0; i<n; i++){
            arr[i] = n-i;
        }
        startTime = getTimeinMicroSeconds();
        selectionSort(arr, n);
        endTime = getTimeinMicroSeconds();
        cout<<"Merge Sort n = "<<n<<" time = "<<endTime - startTime<<endl;
    }
}