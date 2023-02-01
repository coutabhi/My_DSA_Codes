// Code by Abhishek Yadav👨🏻‍💻
// Quick Sort code in Geek for Geek
#include <iostream>
using namespace std;

// A utility function to swap the elements
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

/*
    This function shows last element as pivot, places the pivot element at its correct position in placed array,
    and places all smaller (smaller than pivot) to left of pivot and all greater elements to right of pivot.
*/
int partiton(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    /*
        Index of smaller element and indicates the right position of pivot found so far
    */
    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller than the pivot
        if (arr[j] < pivot)
        {
            i++; // Increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

/*
    The main function that implements quickSort
    arr[] --> Array to be sorted
    low --> Starting index
    high --> Ending index
*/
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        // pi is the partiotioning index, arr[p] is now at right place
        int pi = partiton(arr, low, high);
        // Separately sort elements before
        // Partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
// Function to print array

void printArray(int arr[], int size)
{
    for (int i=0; i< size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// Driver Code
int main()
{
    int n;
    cin >> n;
    int *input = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    quickSort(input, 0, n - 1);
    cout << "Sorted Array: \n";
    printArray(input, n);
    delete [] input;
    return 0;
}