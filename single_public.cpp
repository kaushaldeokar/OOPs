#include <iostream>  
using namespace std;  

class Base{
    int d1;
    public:
    int d2;
    void setData(){
        d1=10;
        d2=20;
    }
    int getD1(){
        return d1;
    }
};
class Derived: public Base{
    int d3;
    public:
    void process(){
        d3=d2*getD1();
    }
    void display(){
        cout<<"Value of data 1 is : "<<getD1()<<endl;
        cout<<"Value of data 2 is : "<<d2<<endl;
        cout<<"Value of data 3 is : "<<d3<<endl;
    }
};


int main()  
{  
    Derived der;
    der.setData();
    der.process();
    der.display();
    return 0;  
} 

