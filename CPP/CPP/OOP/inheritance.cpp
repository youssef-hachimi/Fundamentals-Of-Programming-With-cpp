#include <iostream>
#include <string>
using namespace std;
// Base class
class device
{
public:
    string brand = "samsung";
    void DeviceSound()
    {
        cout << "pip \n";
    }
};

// Derived class
class phone : public device
{
public:
    string model = "S24";
};

int main()
{
    phone phone1;
    phone1.DeviceSound();
    cout << phone1.brand + " " + phone1.model;
    return 0;
}
