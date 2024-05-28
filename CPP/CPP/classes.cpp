#include<iostream>
using namespace std;
class MyClass1 {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};
class phone{
    public:
    int ram;
    int storage;
    int MBcamera;
    private :

};
class MyClass {       // The class
public:             // Access specifier
int myNum = 50;        // Attribute (int variable)
string myString = "five";  // Attribute (string variable)

    /*
    Example : 
    class is cars
    Attributes are specification of car like  color size speed..
    object is the mark like BMW or dacia ...
    
    
    */
};

class Car {
public:
    string brand;   
    string model;
    int year;
};

int main(){



   MyClass myObj;  // Create an object of MyClass
    phone samsung;
    samsung.ram = 8;
    samsung.storage = 128;
    samsung.MBcamera = 48;
    cout << samsung.ram << "GB \n";
    cout << samsung.storage << "GB \n";
    cout << samsung.MBcamera <<"MB \n";
  // Access attributes and set values
    myObj.myNum = 15; 
    myObj.myString = "Some text";

  // Print attribute values
    // cout << myObj.myNum << "\n";
    // cout << myObj.myString;
    return 0;

    // Create a Car class with some attributes


  // Create an object of Car
    Car carObj1;
    carObj1.brand = "BMW";
    carObj1.model = "X5";
    carObj1.year = 1999;

    // Create another object of Car
    Car carObj2;
    carObj2.brand = "Ford";
    carObj2.model = "Mustang";
    carObj2.year = 1969;

    // Print attribute values
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
    return 0;
}

