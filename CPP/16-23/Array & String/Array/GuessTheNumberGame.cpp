#include <iostream>
#include <string>
#include <array>

using namespace std;

int main(){

    int pts = 0; // points
    int ansewrs[3];
    cout << "Type the Missing Number In Sequences : \n";
    cout << "Question 1 :\n ";
    cout << "1 | 5 | 10 | 16 | ? \n";
    cin >> ansewrs[0];
    cout << "Question 2 :\n ";
    cout << "2 | 4 | 8 | 16 | ? \n";
    cin >> ansewrs[1];
    cout << "Question 3 :\n ";
    cout << "1 | 1 | 2 | 3 | ? \n";
    cin >> ansewrs[2];

    int sequencesOne[3][5] = {
        {1,5,10,16,23},
        {2,4,8,16,32},
        {1,1,2,3,5}
    };
    int sequencesTWO[4][6] = {
        {1,5,10,16,23},
        {2,4,8,16,32},
        {1,1,2,3,5}
    };

        // if(ansewrs[0] == sequences[0][4] ){
        //     pts++;
        // }
        // if(ansewrs[1] == sequences[1][4] ){
        //     pts++;
        // }
        // if(ansewrs[2] == sequences[2][4] ){
        //     pts++;
        // }

        for(int i = 0;ansewrs[i] == sequencesOne[i][4];i++){
            pts++;
        }
    cout << "Your score is : " << pts << endl;

}