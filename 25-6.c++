#include <iostream>
using namespace std;

class Square{

   public:
   int square(int &c){
   int num;

   cout<<"Enter the number: ";
   cin>>num;
   cout<<"The square of "<<num<<" is : "<<num*num<<endl;

     return c++;
  }
};

int main(){
   int count=0;
   Square n1,n2,n3;

   n1.square(count);
   n2.square(count);
   n3.square(count);

   cout<<endl<<"Square function is called "<<count<<" times!"<<endl;
}
