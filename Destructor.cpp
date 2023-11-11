#include <iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value
int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object number" << count << endl;cout<<endl;
    }

    ~num()
    {
        cout << "This is the time when my destructor is called for object number" << count << endl;cout<<endl;
        count--;
    }
};
int main()
{
    cout << "We are inside our main function" << endl<<endl;
    cout << "Creating first object n1" << endl;cout<<endl;
    num n1;
    {
        cout << "Entering this block" << endl;cout<<endl;
        cout << "Creating two more objects" << endl;cout<<endl;
        num n2, n3;
        cout << "Exiting this block" << endl;cout<<endl;
    }
    cout << "Back to main" << endl;cout<<endl;
    return 0;
}