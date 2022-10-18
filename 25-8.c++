#include <iostream>
using namespace std;

class Rectangle{
    private:
    int length,breadth;
    int area;

    public:

    void set_data(int x, int y){ length=x; breadth=y; }

    void get_data(){ cout<<"Length="<<length<<"  breadth="<<breadth<<endl; }

    void calculate_area(){
        cout<<"The area of the reactangle is : ";
        area=length*breadth;   }

    int get_area(){ return area; }
};

int main (){
   Rectangle r1,r2;

   r1.set_data(10,12);
   r1.get_data();
   r1.calculate_area();
   cout<<r1.get_area()<<endl<<endl;

   r2.set_data(5,7);
   r2.get_data();
   r2.calculate_area();
   cout<<r2.get_area()<<endl<<endl;

    return 0;
}
