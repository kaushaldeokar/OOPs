#include <iostream>  
using namespace std;  
enum week { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };  
int main()  
{  
    week day;  
    day = Friday;  
    cout << "Day: " << day+1<<endl;  
    return 0;  
} 

// int main(){
//     enum Meal{ breakfast, lunch, dinner};
//     Meal m1 = lunch;
//     cout<<m1;
//     return 0;
// }