#include <iostream>
using namespace std;

class Square{
   private:
   int num;
   static int count;

   public:

   void set_num(int n){ num=n; }

   void square(){
   cout<<"The square of "<<num<<" is : "<<num*num<<endl;
      count++;  }

   static get_count(){ return count; }
};

int Square :: count=0;

int main(){
   Square n1,n2,n3;

   n1.set_num(5);
   n1.square();

   n2.set_num(62);
   n2.square();

   n3.set_num(521);
   n3.square();

   cout<<endl<<"Square function is called "<<Square::get_count()<<" times!"<<endl;
}
