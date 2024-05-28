#include <iostream>
using namespace std;
int main()
{
    int day = 4;
    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    }
    // Outputs "Thursday" (day 4)

    int day = 4;
    switch (day)
    {
    case 6:
        cout << "Today is Saturday";
        break;
    case 7:
        cout << "Today is Sunday";
        break;
    default:
        cout << "Looking forward to the Weekend";
    }
    // Outputs "Looking forward to the Weekend"

    // C++ While Loop || do While loop

    int i = 0;
    do
    {
        cout << i << "\n";
        i++;
    } while (i < 5);

    // For Loop

    // for (statement 1; statement 2; statement 3) {
    //   // code block to be executed
    // }

    // Outer loop
    for (int i = 1; i <= 2; ++i)
    {
        cout << "Outer: " << i << "\n"; // Executes 2 times

        // Inner loop
        for (int j = 1; j <= 3; ++j)
        {
            cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
        }
    }
    // The following example outputs all elements in an array, using a "for-each loop":

    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers)
    {
        cout << i << "\n";
    }

    int i = 0;
    while (i < 10)
    {
        if (i == 4)
        {
            i++;
            continue;
        }
        cout << i << "\n";
        i++;
    }
}
