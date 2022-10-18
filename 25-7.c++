#include <iostream>
using namespace std;

class GreatestNumber{
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
   GreatestNumber n1,n2;

   n1.set_Nums(8,5,2);
   n1.calculate_largest();
   cout<<n1.get_largest()<<endl;

   n2.set_Nums(17,65,23);
   n2.calculate_largest();
   cout<<n2.get_largest()<<endl;

    return 0;
}
