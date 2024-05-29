#include <iostream>
#include <string>
using namespace std;
class computer
{
public:
    string name;
    int RAM;
    int SSD;
    string CPU;
    void intro(){
        cout << "computer name is  : " << name  << " RAM is : " << RAM <<"GB";
    }
};
int main()
{
    computer computer1;
    computer1.name = "Lenovo";
    computer1.CPU = "I5";
    computer1.RAM = 8;
    computer1.SSD = 256;
 // cout << "ram is :" << computer1.RAM;
    computer1.intro();
 // computer1.intro();
 // computer1.intro();
}