#include <iostream>
using namespace std;

int main(){
    cout << "==-------------------------------------------==\n";
    cout << "================= Age Calculator ==============\n";
    cout << "==-------------------------------------------==\n";
    int age;
    cout << "Enter your Age :";
    cout << "\n";
    cin >> age;
    int days,houres,sec;
    days = age*365;
    houres = days*24;
    sec = houres*60;
    cout << "your age is :" << days << " D and " << houres <<" H and " << sec << " S";

}  