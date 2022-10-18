#include <iostream>
using namespace std;

class Area{
    private:
    int length,breadth;
    int radius;
    int side;

    public:
    void set_rect(int l, int b){ length=l; breadth=b; }

    void set_circle(int r){ radius=r; }

    void set_square(int a){ side=a; }

    void get_rect(){ cout<<"length="<<length<<" breadth="<<breadth<<endl; }

    void get_circle(){ cout<<"Radius="<<radius<<endl; }

    void get_square(){ cout<<"Side="<<side<<endl; }

    void area_rectangle(){ cout<<"The area of the reactangle is : "<<length*breadth<<endl<<endl; }

    void area_circle(){ cout<<"The area of the Circle is : "<<3.14*radius*radius<<endl<<endl;  }

    void area_square(){ cout<<"The area of the square is : "<<side*side<<endl<<endl;  }
};

int main (){
   Area o1;
   o1.set_rect(10,12);
   o1.get_rect();
   o1.area_rectangle();

   o1.set_circle(5);
   o1.get_circle();
   o1.area_circle();

   o1.set_square(25);
   o1.get_square();
   o1.area_square();

    return 0;
}
