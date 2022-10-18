#include <iostream>
using namespace std;

class ReverseNumber{
    private:
    int num, reverse=0;

    public:

    void set_num(int x){ num=x; }

    int get_num(){  return num; }

    void reverse_num(){
        int lastDigit;
        while(num>0){
        lastDigit=num%10;
        reverse=(reverse*10)+lastDigit;
        num=num/10;  }
        }

    int get_reverse(){ return reverse; }
 };

int main (){
   ReverseNumber n1,n2;

   n1.set_num(1234);
   cout<<"The reverse of "<<n1.get_num()<<" is : ";
   n1.reverse_num();
   cout<<n1.get_reverse()<<endl;

   n2.set_num(58697);
   cout<<"The reverse of "<<n2.get_num()<<" is : ";
   n2.reverse_num();
   cout<<n2.get_reverse()<<endl;

   return 0;
}
