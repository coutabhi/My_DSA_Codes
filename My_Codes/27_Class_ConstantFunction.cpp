//Code by Abhishek Yadav.
//Constant Functions in class
#include<iostream>
using namespace std;
class Fraction{
    int denominator;
    int numerator;

    public:
    Fraction(){

    }
    Fraction(int numerator, int denominator){
        this->numerator = numerator;
        this->denominator = denominator;
    }
    int getNumerator() const {//Qualify for the const function as not change any const object property
        return numerator;
    }
    int getDenominator() const {//Qualify for the const function as not change any const object property
        return denominator;
    }
    void setNumerator(int numerator){//NOt Qualify for the const function as  changes const object property
        this->numerator = numerator;
    }
    void setDenominator(int denominator){//NOt Qualify for the const function as  changes const object property
        this->denominator = denominator;
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
    void print() const{
        //This function qualify for the const function as it does not change any property of the const object.
        // simplify(); we cannot use because simplify not qualify for const function.                       
        if(denominator == 1){
            cout<<numerator<<endl;
        }
        cout<<numerator<<"/"<<denominator<<endl;
    }
    void add(Fraction f2){ // This function cannot qualify for the const function because change this numertor
    // and this numerator
        int lcm = denominator*f2.denominator;
        int x = lcm/denominator;
        int y = lcm/f2.denominator;
        int num = x*numerator + y*f2.numerator;
        numerator = num;
        denominator = lcm;
        simplify();
    }
    void multilpy(Fraction f2){// This function cannot qualify for the const function because change this numertor
    // and this numerator
        numerator *= f2.numerator;
        denominator*= f2.denominator;
        simplify();
    }
};

int main(){
   Fraction f1(10, 2);
   Fraction f2;
   f2.setNumerator(15);
   f2.setDenominator(6);
   f1.print();
   f2.print();
   Fraction const f3(10, 14);
   f3.print();
   Fraction const f4 = f2;
   f4.print();
   Fraction const f5 = f3;
   f5.print();
   Fraction const f6(50,6);
   f6.print();
   f1.print();
}
