#include <iostream>
using namespace std;
int main()
{
    // int size = 100;
    // size = 100;
    // cout << size;
    int a, b, c;
    a = 10;
    b = 20;
    c = 30;
    cout << b / c + a; // 10 => [20/30 +10]
    cout << "\n================\n";

    int e, f = 40, g;
    e = 20, g = 60;
    cout << e + f + g; // 120

    cout << "\n================\n";

    int h, i, j;
    // h = 10, i = 10, j = 10;
    h = i = j = 10;
    cout << h + i + j; // 30
    return 0;
}