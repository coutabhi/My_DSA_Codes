//Code by Abhishek Yadav👨🏻‍💻
//Dynamic Array classes
//We want array where we can increase or decrease it's size
#include<iostream>
#include<climits>
using namespace std;

class DynamicArray{
    int *data;
    int nextIndex;
    int capacity;

    public:

    DynamicArray(){
        data = new int[5];
        nextIndex = 0;
        capacity = 5;
    }
    DynamicArray(DynamicArray const &d){
        // this->data = d.data; //This is Shallow copy what default one do and which is bad
        this->data = new int[d.capacity];
        for(int i=0; i<d.nextIndex; i++){
            this->data[i] = d.data[i];
        }
        this->nextIndex = d.nextIndex;
        this->capacity = d.capacity;
    }

    void operator=(DynamicArray const&d){
        this->data = new int[d.capacity];
        for(int i=0; i<d.nextIndex; i++){
            this->data[i] = d.data[i];
        }
        this->nextIndex = d.nextIndex;
        this->capacity = d.capacity;
    }
    

    void add(int element){
        if(nextIndex == capacity){
            int *newData = new int[2*capacity];
            for(int i=0; i<capacity; i++){
                newData[i] = data[i];
            }
            delete [] data;
            data = newData;
            capacity *= 2;
        }
        data[nextIndex] = element;
        nextIndex++;
    }
    int get(int index) const{
        if(index>nextIndex || index == nextIndex){
            return -1;
        }
        return data[index];
    }
    void add(int i, int element){
        if(i<nextIndex){
            data[i] = element;
        }
        else if(i == nextIndex){
            add(element);
        }
        else{
            return;
        }
    }
    void print() const{
        for(int i=0; i<nextIndex; i++){
            cout<<data[i]<<" ";
        }
        cout<<endl;
    }

    DynamicArray merge(int input[], int si, int ei){
        int size = ei - si + 1;
        int mid = (si+ei)/2;
        int* out = new int[size];
        int i = si;
        int j = mid + 1;            
        int k = 0;

        while (i<=mid && j<=ei)
        {
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
        //For remaining elements in arrary
        while(i<=mid){
            out[k] = input[i];
            i++;
            k++;
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
    }  //EOF
    DynamicArray sort(DynamicArray const&input, int si, int ei){
        if(si>=ei){
            return;
        }
        int mid = si +(ei-si)/2;
        sort(input, si, mid);
        sort(input, si, ei);   
    }
};

int main(){
    DynamicArray d1;

    d1.add(10);
    d1.add(20);
    d1.add(50);
    d1.add(40);
    d1.add(35);
    d1.add(4, 39);
    d1.add(49);
    d1.print();
    d1.add(10);
    d1.print();
    return 0;
}