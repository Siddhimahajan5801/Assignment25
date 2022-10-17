#include <iostream>
using namespace std;

class Rectangle{

    public:
    void area(){
        int length,breadth;

        cout<<"Enter length and breadth of the rectangle : "<<endl;
        cin>>length>>breadth;


        cout<<"The area of the reactangle is : "<<length*breadth<<endl;

    }
};

int main (){
   Rectangle o1,o2;

   o1.area();
   o2.area();

    return 0;
}
