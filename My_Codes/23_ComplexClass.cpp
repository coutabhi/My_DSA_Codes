// Code by Abhishek Yadav👨🏻‍💻
// Question- Complex Class
#include<iostream>
using namespace std;

class ComplexNumbers{
    private:
    int real;
    int imaginary;

    public:
    ComplexNumbers(int real, int imaginary){
        this->real = real;
        this->imaginary =imaginary;
    }
    void print(){
        cout<<real<<" + "<<"i"<<imaginary<<endl;
    }
    void add(ComplexNumbers const&c2){
        real+=c2.real;
        imaginary+=c2.imaginary;
    }
    void multiply(ComplexNumbers const&c2){
        int temp = (real*c2.real)-(imaginary*c2.imaginary);
        imaginary = (real*c2.imaginary) + (c2.real*imaginary);
        real = temp;

    }
};

int main(){
    int real1, imaginary1, real2, imaginary2;
    cin>>real1>>imaginary1;
    cin>>real2>>imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;cin>>choice;
    
    if(choice == 1){
        c1.add(c2);
        c1.print();
    }
    else if(choice == 2){
        c1.multiply(c2);
        c1.print();
    }
    else{
        cout<<"Entered choice is wrong"<<endl;
    }

}