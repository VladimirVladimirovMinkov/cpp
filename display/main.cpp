#include <iostream>

#include <windows.h>

using namespace std;

const short unsigned int Keyleft  = 37;
const short unsigned int Keytop   = 38;
const short unsigned int Keyright = 39;
const short unsigned int Keydown  = 40;
const short unsigned int Keyexit  = 81;

int getKey();

int main()
{
    int SL = 160; // character length of display
    int SS = 15; // number of vertical lines
    int SV = 48; // displacement from int to string but display same number
    char randArray[SS][SL];

    int i;

    for(int z=0;z<SS;z++){
        // creates screen
        for(int j=0;j<SL;j++){
            randArray[z][j] = ' ';
        }
    }

    i = getKey();


            switch( i )
            {

            case Keyleft:
                {
                    cout << "you pressed : left" <<endl;
                }
                break;
            case Keytop:
                {
                    cout << "you pressed : up" <<endl;
                }
                break;
            case Keyright:
                {
                    cout << "you pressed : right" <<endl;
                }
                break;
            case Keydown:
                {
                    cout << "you pressed : down" <<endl;
                }
                break;
            case Keyexit:
                {
                    cout << "exit key" <<endl;
                }
                break;
            default:
                {
                    cout << "you pressed : " << i <<endl;
            };

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
}
