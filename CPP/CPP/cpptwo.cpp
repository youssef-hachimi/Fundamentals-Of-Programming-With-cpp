#include <iostream>
using namespace std;

int main(){
int Numbers[6]={1,2,3,4,5,6};
int getsize = sizeof(Numbers)/sizeof(int);
cout << getsize;
int Numbers[5] = {10, 20, 30, 40, 50};
for (int i = 0; i < 5; i++) {
cout << Numbers[i] << "\n";
}
string car = "BMW";
string &rang = car;
cout << car << "\n"; // outputs : BMW
cout << rang << "\n"; // outputs : BMW
class myclass{
myclass myobjet;
}
}