#include <iostream>
using namespace std;
class Time{
int hour,min,sec;

public:
void setTime(int a,int b,int c){
    hour=a;   min=b;  sec=c;
}

void showTime(){
    if (hour>24 || min>60 || sec>60)
           cout<<"Invalid format\n";
    else   cout<<"The time is = "<<hour<<":"<<min<<":"<<sec<<endl;
}
};
int main(){
    Time t1,t2,t3;

    t1.setTime(05,10,20);
    t1.showTime();

    t2.setTime(06,15,50);
    t2.showTime();

    t3.setTime(12,30,65);
    t3.showTime();
return 0;
}
