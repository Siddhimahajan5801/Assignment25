#include <iostream>
using namespace std;

class factorial{

    public:
    void fact(){
        int num,fact=1;
        cout<<"Enter the number whose factorial is to be calculated : "<<endl;
        cin>>num;

        for (int i=1; i<=num; i++){
           fact=fact*i;
        }
        cout<<"The factorial of "<<num<<" is : "<<fact<<endl;
    }
};

int main (){
   factorial n1,n2;

   n1.fact();
   n2.fact();

    return 0;
}
