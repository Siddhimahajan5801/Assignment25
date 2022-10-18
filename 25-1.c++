#include <iostream>
using namespace std;

class Complex{
    private:
    int a,b;

    public:
 void setData(int x,int y ){
    a=x; b=y;
}

void printData(){
    cout<<"The complex number is: "<<a<<"+"<<b<<"i\n";
}

};




int main(){
    class Complex C1,C2;

    C1.setData(5,6);
    C1.printData();
    C2.setData(6,3);
    C2.printData();

return 0;
}
