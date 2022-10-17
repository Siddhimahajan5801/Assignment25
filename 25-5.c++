#include <iostream>
using namespace std;

class ReverseNumber{

    public:
    void reverse(){
        int num;
        int lastDigit,reverse=0;
        cout<<"Enter the number : "<<endl;
        cin>>num;

        cout<<"The reverse of "<<num<<" is : ";
        while(num>0){
        lastDigit=num%10;
        reverse=(reverse*10)+lastDigit;
        num=num/10;
        }

       cout<<reverse<<endl;
    }

 };

int main (){
   ReverseNumber n1,n2;

   n1.reverse();
   n2.reverse();

    return 0;
}
