#include <iostream>
using namespace std;

class factorial{
    private:
    int num,fact;

    public:

    void set_Num(int n)  {  num=n;  }

    int get_Num()  {  return num;  }

    void calculate_fact(){
        int factorial=1;

        for (int i=1; i<=num; i++){
           factorial=factorial*i;  }
           fact=factorial;
    }

    int get_factorial(){  return fact; }
};

int main (){
   factorial n1,n2;

   n1.set_Num(5);
   n1.calculate_fact();

   cout<<"The factorial of "<<n1.get_Num()<<" is : "<<n1.get_factorial()<<endl;

   n2.set_Num(9);
   n2.calculate_fact();

   cout<<"The factorial of "<<n2.get_Num()<<" is : "<<n2.get_factorial()<<endl;

    return 0;
}
