#include <iostream>
#include <string>
using namespace std;

class car
{
private:
    // Private attribute
    int speed;
    string color;
    string name;
    string type;
public:
    // Setter for speed
    void setSpeed(int s)
    {
        speed = s;
    }

    // Getter for speed
    int getSpeed()
    {
        return speed;
    }

    // Setter for color
    void setColor(string c)
    {
        color = c;
    }

    // Getter for color
    string getColor()
    {
        return color;
    }

    // Setter for name
    void setName(string n)
    {
        name = n;
    }

    // Getter for name
    string getName()
    {
        return name;
    }

    // Setter for type
    void setType(string t)
    {
        type = t;
    }

    // Getter for type
    string getType()
    {
        return type;
    }
};

int main()
{
    car myObj;
    myObj.setSpeed(120);
    cout << myObj.getSpeed()<< endl;

    myObj.setColor("red");
    cout << myObj.getColor()<< endl;

    myObj.setName("BMW");
    cout << myObj.getName()<< endl;

    myObj.setType("manual");
    cout << myObj.getType()<< endl;

    return 0;
}