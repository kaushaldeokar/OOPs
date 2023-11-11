#include <iostream>  
using namespace std;  

class Employee{
    public:
    int id,salary;
    Employee(int inpID){
        this->id=inpID;
        this->salary=34;

    }
    //IMPORTANT TO ADD THIS CONSTRUCTOR
    Employee(){

    }
} ;

// Derived Class syntax
// class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
// {
//     class members/methods/etc...
// }

class Programmer : public Employee{
    public:
    string lang ="C++";
    
    Programmer(int d){
        this->id=d;
    }
};

int main()  
{  

    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.lang<<endl;
    cout << skillF.id<<endl;

     
    return 0;  
} 

