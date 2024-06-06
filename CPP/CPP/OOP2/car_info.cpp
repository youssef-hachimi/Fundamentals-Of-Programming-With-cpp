#include <iostream>
using namespace std;

// class human{
//     public:
//     string name;
//     int age;
//     void eat(){
//         cout << "this person is eating\n";
//     }
//     void drink(){
//         cout << "This person is drinking\n";
//     }
//     void sleep(){
//         cout << "This person is sleeping\n";
//     }
// } ;
class car
{
public:
    string name;
    string model;
    int year;
    string color;

    void accelerate()
    {
        cout << "you stop on the  gas station !\n";
    }
    void brake()
    {
        cout << "you stop on the brakes !\n";
    }
};

int main()
{

    // human person1;
    // human person2;
    car car1;
    car car2;

    // person1.name = "youssef";
    // person1.age = 19;
    // person2.name = "badr";
    // person2.age = 18;

    // cout << person1.name << endl;
    // cout << person1.age << endl;
    // cout << person2.name << endl;
    // cout << person2.age << endl;

    // person1.eat();
    // person1.drink();
    // person1.sleep();
    // person2.eat();
    // person2.drink();
    // person2.sleep();

    // car class
    car1.name = "mercedes";
    car1.model = "220";
    car1.year = 2016;
    car1.color = "black";
    car1.accelerate();
    car1.brake();

    car2.name = "BMW";
    car2.model = "serie 1";
    car2.year = 2016;
    car2.color = "white";
    car2.accelerate();
    car2.brake();

    // printing car 2 information :
    cout << "information of car one : " << endl;
    cout << "Name : " << car1.name << endl;
    cout << "Model : " << car1.model << endl;
    cout << "year : " << car1.year << endl;
    cout << "color : " << car1.color << endl;

    cout << "\n";
    cout << "\n";

    // printing car 2 information :
    cout << "information of car Two : " << endl;
    cout << "Name : " << car2.name << endl;
    cout << "Model : " << car2.model << endl;
    cout << "year : " << car2.year << endl;
    cout << "color : " << car2.color << endl;
}
