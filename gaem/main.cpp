#include <iostream>
#include <vector>

using namespace std;

class enemy{
    int health = 1;
    char symbol = 'e';
    int pos = 0;
    float speed = 0.5;
};

class pos{
public:
    int x, y, point;
    pos(int x, int y, int point){this->x = x, this->y = y, this->point = point;}
    int gx(){return this->x;}
    int gy(){return this->y;}
    int gp(){return this->point;}
};

string mappath(string path){
    int x = 0, y = 0;
    int negshiftx = 0, negshifty = 0;
    int rot = 0, crot = 0, l = 0;
    vector<pos> points {};
    points.push_back(pos(x, y, 0));
    for (int i=1;i<(int(path.size())+1);i++) {
        if (x < negshiftx) negshiftx = x;
        if (y < negshifty) negshifty = y;
        if (rot == 0){x+=1;}
        if (rot == 1){y+=1;}
        if (rot == 2){x-=1;}
        if (rot == 3){y-=1;}
        points.push_back(pos(x, y, i));
        if (path[i] == ')') rot += 1;
        if (path[i] == '(') rot -= 1;
        if (rot > 3) rot = 0;
        if (rot < 0) rot = 3;
        if (crot == rot) {cout << rot << endl; l+=1;}
        else {cout << rot << "," << l << endl; l=0;}
        crot = rot;
    }
    string out;
    for (int i=0;i<int(path.size());i++) {
    out += "x " + to_string(points[i].gx()) + ", " + "y " + to_string(points[i].gy()) + "\n";}
    // use two lists to make a dictionary like structure using vectors
    cout << negshiftx << negshifty << endl;
    return out;
};

int main()
{
    // declare
    string version = "0.1.4";
    bool playing = true;
    string path = "==(==)==)=====(==(==)==";

    string map = mappath(path);

    while (playing) {
        cout << map << endl;
        cin >> playing;
    }

    cout << endl << "Thank you for playing" << endl;
    return 0;
}
