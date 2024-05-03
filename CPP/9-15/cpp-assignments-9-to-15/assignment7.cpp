// You have the next Code and we need to change one line only where the other one is until you apply the desired number 100

// #include <iostream>
// using namespace std;

// int num = 100;

// int read()
// {
//   int num = 50;
//   cout << num;
//   return 0;
// }

// int play()
// {
//   int num = 200;
//   read();
//   return 0;
// }

// int main()
// {
//   play();
//   return 0;
// }
// ===========================================================================

#include <iostream>
using namespace std;

int num = 100;

int read()
{
    int num = 50;
    return 0;
}

int play()
{
    int num = 200;
    read();
    return 0;
}

int main()
{
    cout << num;
    return 0;
}