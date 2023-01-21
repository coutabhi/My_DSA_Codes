//Code by Abhishek Yadav👨🏻‍💻
//Operator overloading I

#include<iostream>
using namespace std;
//Operator oveloading is also known as polymorphism.

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
    int getNumerator() const {
        return numerator;
    }
    int getDenominator() const {
        return denominator;
    }
    void setNumerator(int numerator){
        this->numerator = numerator;
    }
    void setDenominator(int denominator){
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
        if(denominator == 1){
            cout<<numerator<<endl;
        }
        cout<<numerator<<"/"<<denominator<<endl;
    }
    Fraction add(Fraction const&f2){ 
        int lcm = denominator*f2.denominator;
        int x = lcm/denominator;
        int y = lcm/f2.denominator;
        int num = x*numerator + y*f2.numerator;
        // numerator = num;
        // denominator = lcm;
        Fraction fNew(num,lcm);
        fNew.simplify();
        return fNew;
    }
    Fraction operator+(Fraction const&f2){ 
        int lcm = denominator*f2.denominator;
        int x = lcm/denominator;
        int y = lcm/f2.denominator;
        int num = x*numerator + y*f2.numerator;
        // numerator = num;
        // denominator = lcm;
        Fraction fNew(num,lcm);
        fNew.simplify();
        return fNew;
    }
    Fraction multilpy(Fraction const&f2) const{
        int n,d;
        n = numerator*f2.numerator;
        d = denominator*f2.denominator;
        Fraction fNew(n,d);
        fNew.simplify();
        return fNew;
    }
    Fraction operator*(Fraction const&f2) const{
        int n,d;
        n = numerator*f2.numerator;
        d = denominator*f2.denominator;
        Fraction fNew(n,d);
        fNew.simplify();
        return fNew;
    }
    bool operator==(Fraction const&f2) const{
        return (numerator == f2.numerator && denominator == f2.denominator);
    }
    //Pre-Increment
    Fraction& operator++(){ //By returning reference Fraction the system not make buffer memory and then assign
    //but actually increment on main this object.
        numerator += denominator;
        simplify();
        return *this;
    }
    //Post Increment
    Fraction operator++(int){
        Fraction fNew(numerator, denominator);
        numerator = numerator +denominator;
        simplify();
        fNew.simplify();
        return fNew;
    }
    // += operator overloading

    Fraction & operator+=(Fraction const &f2){
        int lcm = denominator * f2.denominator;
        int x = lcm/denominator;
        int y = lcm/f2.denominator;
        int num = x*numerator + (y*f2.numerator);
        numerator = num;
        denominator = lcm;
        simplify();
        return *this;
    }

    // -= operator
    Fraction& operator-=(Fraction const &f2){
        int lcm = denominator * f2.denominator;
        int x = lcm/denominator;
        int y = lcm/f2.denominator; 
        int num = x*numerator -y*f2.numerator;
        numerator = num;
        denominator = lcm;
        simplify();
        return *this;
    }
};
int main(){
    Fraction f1(10,2);
    Fraction f2(15,4);

    Fraction f3 = f1.add(f2);
    Fraction f4 = f1 + f2;
    f1.print();
    f2.print();
    f3.print();
    f4.print();
    Fraction f5 = f1*f2;
    f5.print();
    if(f1==f2){
        cout<<"Equal"<<endl;
    }
    else{
        cout<<"Not Equal"<<endl;
    }
    
    //For increment 
    Fraction f6(10, 4);
    f6.print();
    ++f6;
    f6.print();
    Fraction f7 = ++f6;
    f7.print();
    ++(++f7);
    f7.print();

    Fraction f8(2,3);
    Fraction f9(4,2);
    Fraction f10(5,4);
    Fraction f11(3,4);
    f8+=f9;
    f10-=f11;
    f8.print();
    f9.print();
    return 0;
}