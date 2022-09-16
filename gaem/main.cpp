#include <iostream>

using namespace std;

class enemy{
    int health = 1;
    char symbol = 'e';
    int pos = 0;
};

int main()
{
    // declare
    string version = "0.1.0";
    bool playing = true;
    string path = "===(===)===)======(===(===)===";
    string screen = "menu";

    // string display
    string main_menu =
            "Gaem " + version +" test\n"
            "new game\n"
            "options\n"
            "quit\n";

    string game = "not made yet";

    string options = "not made yet but might include difficulty or display options";

    string display = main_menu;

    int path_size = path.size();

    for (int i;i<path_size;i++){

    }

    string option;
    while (playing) {
        system("cls");
        cout << screen << endl;
        // display
        cout << display << endl;

        // play
        getline(cin, option);
        if (option == "quit") {
            if (screen == "menu") playing = false;
            if (screen == "game" or screen == "options") screen = "menu";
        }
        if (option == "options") screen = "options";
        if (option == "new game") screen = "new game";

        // process
        if (screen == "menu") display = main_menu;

        if (screen == "new game") display = game;

        if (screen == "options") display = options;

    }
    cout << endl << "Thank you for playing" << endl;
    return 0;
}
