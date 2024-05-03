// Define variables at the beginning of the Code to show results as in outputs
// Do not adjust the lines under suspension
// The third line does not exist and you should write it to show all outputs as in the example

// #include <iostream>
// using namespace std;

// int main()
// {
//   // Write Your Code Here

//   // Do Not Edit The Next 2 Lines
//   cout << "My Age Is: " << age << "\n";
//   cout << period << " Years Ago My Age Was: " << age - period << "\n";

//   // Add The Third Line Below

//   return 0;
// }
// Output

// "My Age Is: 40"
// "10 Years Ago My Age Was: 30"
// "After 10 Years My Age Will Be: 50"

// ========================================================================================================
#include <iostream>
using namespace std;

int main()
{
    // Write Your Code Here
    int age = 40;
    int period = 10;

    // Do Not Edit The Next 2 Lines
    cout << "My Age Is: " << age << "\n";
    cout << period << " Years Ago My Age Was: " << age - period << "\n";

    // Add The Third Line Below
    cout << "After "<< period <<" Years My Age Will Be : " << age + period;
    return 0;
}