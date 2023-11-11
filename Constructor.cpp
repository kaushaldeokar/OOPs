#include <iostream>
using namespace std;
class Employee {
   public:
       int id;//data member (also instance variable)    
       string name;//data member(also instance variable)
       float salary;
       Employee(int i, string n, float s)  
        {  
            id = i;  
            name = n;  
            salary = s;
        }  
       void display()  
        {  
            cout<<id<<"  "<<name<<"  "<<salary<<endl;  
        }  
};
int main(void) {
    //Explicit//call//
    Employee e1 =  Employee(101, "Sonoo", 890000); //creating an object of Employee 
    Employee e2= Employee(102, "Nakul", 59000); 
    //Implicit Call
    Employee e3(103,"kaushal",105.5);
    e1.display();  
    e2.display();  
    e3.display();
    return 0;
}