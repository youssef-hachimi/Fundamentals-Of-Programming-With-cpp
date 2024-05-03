// We want variable work accepting input from user in the first line
// And then we print the quotient multiplying the number into itself.
// See the example and the result to understand the idea

// #include <iostream>
// using namespace std;

// int main()
// {
//   // Write Your Code Here

//   // Num 10
//   // Needed Output 100 [10 * 10]
//   return 0;
// }
// ============================================================


#include <iostream>
using namespace std;

int main()
{
  // Write Your Code Here
    int num;
    cout << "Enter number:";
    cin >> num;
    int result = num * num;
    cout << result << " => [" << num << "*" << num << "]";
  // Num 10
  // Needed Output 100 [10 * 10]
    return 0;
}