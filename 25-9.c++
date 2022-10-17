#include <iostream>
using namespace std;

class Circle{

    public:
    void area(){
        int radius;
        float area;

        cout<<"Enter the radius of the circle : "<<endl;
        cin>>radius;

        area=3.14*radius*radius;
        cout<<"The area of the Circle is : "<<area<<endl;

    }
};

int main (){
   Circle c1,c2;

   c1.area();
   c2.area();

    return 0;
}
