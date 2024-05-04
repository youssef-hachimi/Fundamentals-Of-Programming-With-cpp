// We want to make variables that are input from the user.
// User inserts a number after which another number
// You need to find a double-digit quotient in each other.
// See the example to see the required result

// #include <iostream>
// using namespace std;

// int main()
// {
//   // Write Your Code Here

//   // Number One => 10
//   // Number Two => 100
//   // Needed Output 1000 [10 * 100]
//   return 0;
// }

// HINT : Help
// Think about how to get a person into value more than once? All you have to do is repeat the function line that makes the user enter the value

// ============================================================================================

#include <iostream>
using namespace std;

int main()
{
    // Write Your Code Here
    int num1,num2;
    cout << "Enter first number";
    cin >> num1;
    cout << "Enter last number";
    cin >> num2;
    int result = num1 * num2;
    cout << result << " => [" << num1 << "*" << num2 << "]";
    // Number One => 10
    // Number Two => 100
    // Needed Output 1000 [10 * 100]
    return 0;
}