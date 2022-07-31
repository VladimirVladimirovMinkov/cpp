#include <iostream>
using namespace std;
int main()
{
    int SL = 160; // character length of display
    int SS = 12; // number of vertical lines
    int SV = 48; // displacement from int to string but display same number
    char randArray[SS][SL];

    for(int z=0;z<SS;z++){
        // creates screen
        for(int j=0;j<SL;j++){
            randArray[z][j] = ' ';
        }
    }

    int a1, a2, b1, b2, c1, c2, y, x, c;
    a1 = 2;
    a2 = 2;
    b1 = 30;
    b2 = 4;
    c = 2;
    x = a1;
    y = a2;

    float tempx, tempy, m;
    tempx = ((a2-b2)/(a1-b1));
    tempy = (1/tempx);
    m = 2;//rise/run dy/dx / (a2-b2/a1-b2)


    for(x=a1;x<(abs(a1-b1)+a1);x++){
        y = a2+((x/(a2-b2))*-0.125)-0.5;
        randArray[abs(y)][abs(x)] = 49;
    }


    for(int z=0;z<12;z++){
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
