/*
Variables Basic Knowledge
- Data Container With Unique Name "Identifier"
- Declare With Value + Change Later

Syntax
- [Data_Type] [Variable_Name] = [Value]
*/

#include <iostream>
using namespace std;

int main()
{
    int size = 15;
    std::cout << "the size is " << size << " plus 5 then : " << size + 5;
    size = 20;
    std::cout << "\nthe new size is " << size;
    return 0;
}

// Line 1\nLine 2
// Line 1\nLine 2

// int main()
// {
//   int price = 200;
//   cout << "Price Is: " << price;
//   cout << "\nPrice After Adding 15 Is: " << price + 15;
//   cout << "\nPrice After Adding 50 Is: " << price + 50;
//   price = 150;
//   cout << "\nThe New Price Is: " << price;
//   return 0;
// }