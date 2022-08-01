#include <iostream>

using namespace std;

int main()
{
    int SL = 160; // character length of display
    int SS = 15; // number of vertical lines
    int SV = 48; // displacement from int to string but display same number
    char randArray[SS][SL];

    for(int z=0;z<SS;z++){
        // creates screen
        for(int j=0;j<SL;j++){
            randArray[z][j] = ' ';
        }
    }

    for(int z=0;z<SS;z++){
        // sets screen to output
        string temp;
        for(int i=0;i<SL;i++){
            temp = randArray[z][i];
            cout<<temp;
        }
        cout<<endl;
    }
    return 0;
}
