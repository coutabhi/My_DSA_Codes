#include<iostream>
using namespace std;

class Polynomial{
    public:
    int *degCoeff;
    int capacity;
    
    
    //default constructor
    Polynomial(){
        this->degCoeff = new int[6];
        this->capacity = 5;
    }

    //Parametrized Constructor
    Polynomial(int capacity){
        this->degCoeff = new int[capacity+1];
        this->capacity = capacity;
    }
    // Copy Constructor
    Polynomial(Polynomial const &p){
        int *newdeg = new int[p.capacity+1];
        for(int i=0; i<=p.capacity; i++){
            newdeg[i] = p.degCoeff[i];
        }
        this->degCoeff = newdeg;
        this->capacity = p.capacity;
    }

    void setCoefficient(int deg, int coef) {
      if (deg > capacity) {
        int newcapacity = deg;
        int *newdeg = new int[newcapacity + 1];
        // Copy the contents from original to new
        for (int i = 0; i <= capacity; i++)
          newdeg[i] = degCoeff[i];

        this->degCoeff = newdeg;
        this->capacity = newcapacity;
        // Set the new coeff;
        degCoeff[deg] = coef;
      } else {
        degCoeff[deg] = coef;
      }
    }

    //Print
    void print(){
        for(int i=0; i<this->capacity; i++){
            if (degCoeff[i] != 0)
            cout<<this->degCoeff[i]<<"X"<<i<<" ";
        }
        cout<<endl;
    }

    //Add
    Polynomial operator+(Polynomial const&p1){
        int capacityM = max(this->capacity, p1.capacity);
        Polynomial out(capacityM);
        for(int i=0; i<=capacityM; i++){
            if (i <= capacity && i <= p1.capacity)
                out.degCoeff[i] = this->degCoeff[i] + p1.degCoeff[i];
            else if (i <= capacity)
                out.degCoeff[i] = this->degCoeff[i];
            else
                out.degCoeff[i] = p1.degCoeff[i];
        }
        return out;
    }    

    //Subtract
    Polynomial operator-(Polynomial const&p1){
        int capacityM = max(this->capacity, p1.capacity);
        Polynomial out(capacityM);
        for(int i=0; i<=capacityM; i++){
            if (i <= capacity && i <= p1.capacity)
                out.degCoeff[i] = this->degCoeff[i] - p1.degCoeff[i];
            else if (i <= capacity)
                out.degCoeff[i] = this->degCoeff[i];
            else
                out.degCoeff[i] = -p1.degCoeff[i];
        }
        return out;
    }    

    //Multiply
     Polynomial operator*(Polynomial const &P2) {

      int newcap = this->capacity + P2.capacity;
      Polynomial P3(newcap);

      for (int i = 0; i <= this->capacity; i++) {

        for (int j = 0; j <= P2.capacity; j++) {
          P3.degCoeff[i + j] += this->degCoeff[i] * P2.degCoeff[j];
        }
      }
      return P3;
    }

    void operator=(Polynomial const &p) {
      int *newdeg = new int[p.capacity + 1];
      // Copy the contents
      for (int i = 0; i < p.capacity; i++)
        newdeg[i] = p.degCoeff[i];

      this->degCoeff = newdeg;

      this->capacity = p.capacity;
    }
};

int main(){
    int count1, count2, choice;
    cin>>count1;

    int *degree1 = new int[count1];

    int *coeff1 = new int[count1];

    for(int i=0; i<count1; i++){
        cin>>degree1[i];
    }

    for(int i=0; i<count1; i++){
        cin>>coeff1[i];
    }

    Polynomial first;

    for(int i=0; i<count1; i++){
        first.setCoefficient(degree1[i], coeff1[i]);
    }

    cin>>count2;

    int* degree2 = new int[count2];
    int *coeff2 = new int[count2];

    for(int i=0; i<count2; i++){
        cin>>degree2[i];
    }

    for(int i=0; i<count2; i++){
        cin>>coeff2[i];
    }

    Polynomial second;
    for(int i=0; i<count2; i++){
        second.setCoefficient(degree2[i], coeff2[i]);
    }

    cin>>choice;

    switch(choice){
        //Add
        case 1:
        {
            Polynomial result1 = first + second;
            result1.print();
            break;
        }
        //Subtract
        case 2:
        {
            Polynomial result2= first - second;
            result2.print();
            break;
        }

        //Multiply
        case 3:
        {
            Polynomial result3 = first * second;
            result3.print();
            break;
        }

        //Copy Constructor
        case 4:
        {
            Polynomial third(first);
            if(third.degCoeff == first.degCoeff){
                cout<<"false"<<endl;
            }
            else{
                cout<<"true"<<endl;
            }
            break;
        }

        case 5:
        {
            Polynomial fourth(first);
            if(fourth.degCoeff == first.degCoeff){
                cout<<"false"<<endl;
            }
            else{
                cout<<"true"<<endl;
            }
            break;
        }
    }
    return 0;
}