#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Test
{
    int a;
    int b;//a is initialized first//

public:
    //Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i+j)
    // Test(int i, int j) : a(i), b(2*j)
    // Test(int i, int j) : a(i), b(a+j)
    //Test(int i, int j) :  b(j) , a(i+b) --->RED FLAG
    // as a is declared first so a here is initialised first//
    Test(int i, int j) : a(i), b(a+j)
    {
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}




