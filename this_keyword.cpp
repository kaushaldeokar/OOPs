#include<iostream>
using namespace std;
class A{
    int a;
    public:
       // void setData(int a){
        A & setData(int a){
            this->a = a;
            return *this;
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};
int main(){
    A a;
    a.setData(4).getData();//return object
    //object k age dot hi lagta -> arrow nhi lgta
    // a.getData();

    // A a;
    // a.setData(4);
    // a.getData();
    return 0;
}
