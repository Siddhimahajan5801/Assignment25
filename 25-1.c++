#include <iostream>
using namespace std;

class complex{
    private:
    int real,imaginary;

    public:
    void set_data(){

        cout<<"Enter the real part of the complex number : "<<endl;
        cin>>real;
        cout<<"Enter the imaginary part of the complex number : "<<endl;
        cin>>imaginary;
    }

    void display_data(){
        cout<<"The complex number is : "<<real<<"+"<<imaginary<<"i"<<endl;
    }

};

int main (){
   complex c1,c2;

   c1.set_data();
   c2.set_data();

   c1.display_data();
   c2.display_data();

    return 0;
}
