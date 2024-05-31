#include <iostream>
#include <string>
using namespace std;

// Multiple Inheritance

// Base class
// class MyClass
// {
// public:
//     void myFunction()
//     {
//         cout << "Some content in parent class."<< endl;
//     }
// };

// // Another base class
// class MyOtherClass
// {
// public:
//     void myOtherFunction()
//     {
//         cout << "Some content in another class."<< endl;
//     }
// };

// // Derived class
// class MyChildClass : public MyClass, public MyOtherClass
// {
// };

// int main()
// {
//     MyChildClass myObj;
//     myObj.myFunction();
//     myObj.myOtherFunction();
//     return 0;
// }
class Student
{
public:
    string StudentName;
    int StudentAge;
    string schoolName;
    void study()
    {
        cout << "I am a student " << endl;
    }
};
class Employee
{
public:
    string EmployeeName;
    int EmployeeAge;
    string companyName;
    void working()
    {
        cout << "I am a Employee " << endl;
    }
};
class Person : public Student, public Employee
{
};
int main()
{
    string choice;
    Person person1;
    cout << "welcome" << endl;
    cout << "you are a student or Employee" << endl;
    cin >> choice;
    if (choice == "Student" || choice == "student")
    {
        cout << "you are student " << endl;

        cout << " enter your name" << endl;
        cin >> person1.StudentName;
        cout << " enter your Age " << endl;
        cin >> person1.StudentAge;
        cout << " enter your School name " << endl;
        cin >> person1.schoolName;

        cout << " I am" << " " << person1.StudentName << "I'm " << " "<< person1.StudentAge <<"years old" << " ";
        person1.study();
        cout << "at "<< person1.schoolName << endl;
    }
    else if (choice == "Employee" || choice == "employee")
    {
        cout << "you are Employee !" << endl;

        cout << " enter your name" << endl;
        cin >> person1.EmployeeName;
        cout << "enter your age ";
        cin >> person1.EmployeeAge;
        cout << "enter your company name ";
        cin >> person1.companyName;

        cout << " I am" << " " << person1.EmployeeName << "I'm " << " "<< person1.EmployeeName <<"years old" << " ";
        person1.working();
        cout << "at "<< person1.companyName << endl;
    }
    else
        cout << "Try Again !";
}