//Code by Abhishek Yadav👨🏻‍💻
//Problem- Add and Simply two Fractions.

#include<iostream>
using namespace std;

class Fraction{
    private:
    int numerator;
    int denominator;
    public:
        Fraction(int numerator, int denominator){
            this->numerator = numerator;
            this->denominator = denominator;
        }
        void print(){
            if(denominator == 1){
                cout<<numerator<<endl;
                return;
            }
            cout<<numerator<<"/"<<denominator<<endl;
        }
        void simplify(){
            int gcd = 1;
            int j=min(this->numerator, this->denominator);
            for(int i=j; i>=1; i--){
                if(numerator%i==0 && denominator%i==0){
                    gcd = i;
                    break;
                }
            }
            numerator = numerator/gcd;
            denominator = denominator/gcd;
        }
        void add(Fraction const &f2){//main.f2 copy constructor called without referencing and makes unnecesarry object
            int lcm = denominator*f2.denominator;
            int x = lcm/denominator;
            int y = lcm/f2.denominator;
            int num = x*numerator + (y*f2.numerator);
            numerator = num;
            denominator = lcm;

            simplify();
        }

        void multiply(Fraction const &f2){
            numerator *= f2.numerator;
            denominator *= f2.denominator;

            simplify();
        }
};

int main(){
    Fraction f1(40,20);
    f1.print();
    Fraction f2(81, 25);
    f1.add(f2);
    f1.print();
    f1.multiply(f2);
    f1.print();
    f2.print();
}