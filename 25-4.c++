#include <iostream>
using namespace std;

class LargestNumber{

    public:
    void largest(){
        int a,b,c;
        int max;
        cout<<"Enter three number : "<<endl;
        cin>>a>>b>>c;

        max=a>b?a:b;
        max=max>c?max:c;

        cout<<"The greatest number among "<<a<<","<<b<<" and "<<c<<" is : "<<max<<endl;

    }
};

int main (){
   LargestNumber n1,n2;

   n1.largest();
   n2.largest();

    return 0;
}
