#include <iostream>
using namespace std;

class LargestNumber{
    private:
    int a,b,c;
    int max;

    public:

    void set_Nums(int x, int y, int z){
       a=x;   b=y;   c=z;
    }

    void calculate_largest(){
        max=a>b?a:b;
        max=max>c?max:c;

        cout<<"The greatest number among "<<a<<","<<b<<" and "<<c<<" is : "; }

    int get_largest(){  return max; }
};

int main (){
   LargestNumber n1,n2;

   n1.set_Nums(5,9,6);
   n1.calculate_largest();
   cout<<n1.get_largest()<<endl;

   n2.set_Nums(52,48,75);
   n2.calculate_largest();
   cout<<n2.get_largest()<<endl;

    return 0;
}
