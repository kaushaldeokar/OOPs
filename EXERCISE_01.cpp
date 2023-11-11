#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Simple{
    protected :
    float a ,b;
    public:
    void get_Data(float x,float y){
        a=x;b=y;
    }
    void  divide(float x,float y) {
        
        cout<< x/y <<endl;
    }
    void  multiply(float x,float y){
        cout<< x*y <<endl;
    }
    void  Sum(float x,float y){
        cout<< x+y <<endl;
    } 
    void  Subtract(float x,float y){
        cout<< x-y <<endl;
    }
};
class Scientific{
    
    public:
    void cosine(float x){
        cout<<cos(x)<<endl;
    }
    void tangent(float x){
        cout<<tan(x)<<endl;
    }

};
class Cal: public Simple,public Scientific{
    protected :
    float a,b;
    public:

};
// MULTIPLE INHERITANCE //
// public
// display//

int main()
{
    Cal input;
    input.divide(20,20);
    input.multiply(20,20);
    input.Sum(20,20);
    input.Subtract(20,20);
    input.cosine(1.57);
    input.tangent(0);


    return 0;
}


