#include <iostream>
using namespace std;

class Circle{
    private:
    int radius;
    float area;

    public:

    void set_radius(int r){ radius=r; }

    void get_radius(){ cout<<"Radius:"<<radius<<endl;  }

    void calculate_area(){
        area=3.14*radius*radius;
        cout<<"The area of the Circle is : ";  }

    float get_area(){ return area; }
};

int main (){
   Circle c1,c2;

   c1.set_radius(5);
   c1.get_radius();
   c1.calculate_area();
   cout<<c1.get_area()<<endl<<endl;

   c2.set_radius(26);
   c2.get_radius();
   c2.calculate_area();
   cout<<c2.get_area()<<endl<<endl;


    return 0;
}
