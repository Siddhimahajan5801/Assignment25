#include <iostream>
using namespace std;

class Area{

    public:
    void area_rectangle(){
        int length,breadth;

        cout<<"Enter length and breadth of the rectangle : "<<endl;
        cin>>length>>breadth;


        cout<<"The area of the reactangle is : "<<length*breadth<<endl<<endl;
    }

    void area_circle(){
        int radius;
        float area;

        cout<<"Enter the radius of the circle : "<<endl;
        cin>>radius;

        area=3.14*radius*radius;
        cout<<"The area of the Circle is : "<<area<<endl<<endl;

    }

    void area_square(){
    int side;
    cout<<"Enter the side of the square : ";
    cin>>side;

    cout<<"The area of the square is : "<<side*side<<endl<<endl;

    }
};

int main (){
   Area o1;

   o1.area_rectangle();
   o1.area_circle();
   o1.area_square();

    return 0;
}
