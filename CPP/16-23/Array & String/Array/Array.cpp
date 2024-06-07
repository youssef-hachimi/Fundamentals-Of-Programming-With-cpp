#include <iostream>
#include <string>
#include <array>

using namespace std;


int main(){
    array<int,6> points = {1,2,3,4,5,6};
    cout << "Elements Count is : "<< points.size()<<endl;
    // points.fill(7);
    cout << points[0] << endl;
    cout << points[1] << endl;
    cout << points[2] << endl;
    cout << points[3] << endl;
    cout << points[4] << endl;
    cout << points[5] << endl;

    array<int,4> numbs = {100,200,300,400};
    cout << numbs[0] <<endl;
    cout << numbs.front() <<endl;
    cout << numbs[3] <<endl;
    cout << numbs.back() <<endl;
    cout << numbs.at(1) <<endl;
    cout << numbs.size() <<endl;
    cout << numbs.empty() <<endl;
    cout << numbs.data() <<endl;





}


