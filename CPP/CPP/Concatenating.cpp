#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char Fname[] = "youssef";
    char Lname[] = "hachimi";
    
    cout << Fname << Lname <<"\n";
    cout << strcat(Fname,Lname) <<"\n";
    
    string fisrtName = "youssef";
    string lastName = "hachimi";
    
    cout << fisrtName + lastName <<"\n";
    cout << fisrtName.append(lastName) << "\n";
    
    return 0;
}
