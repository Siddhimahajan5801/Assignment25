#include <iostream>
using namespace std;

class time{
    private:
    int hour,min,sec;

    public:
    void set_time(){

        cout<<"Enter the hour, min and sec respectively : "<<endl;
        cin>>hour>>min>>sec;

    }

    void display_time(){
        cout<<"The time is : ";
        cout<<hour<<":"<<min<<":"<<sec<<endl;
    }

};

int main (){
  time t1,t2;

   t1.set_time();
   t2.set_time();

   t1.display_time();
   t2.display_time();

    return 0;
}
