#include <iostream>
using namespace std;
class Number {
   public:
       int id;   
       Number(){
            this->id=0;
       } 
       Number(int i){
            this->id=i;
       } 
       void disp(){
        cout<<id<<endl;
       }
       //copy Constructor//
    //    Number(Number &X){
    //         id=X.id;
    //    }
       
       
};
int main(void) {
    //shows error caz commpiler passed copy constuctor 
    
    Number x(1),y(x),z;
    x.disp();
    y.disp();
    z.disp();
   
    return 0;
}