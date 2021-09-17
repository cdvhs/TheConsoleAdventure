#include <iostream>


using namespace std;

int level2()
{
    int input;
    system("clear");
    cout << "You successfully made a campfire!" << endl;
    cout << "You decide to sleep a bit." << endl;
    cout << "Some time passed, and you wake up. You are hungry." << endl;
    cout << "What do you do?" << endl;
    cout << "1) Search for food" << endl;
    cout << "2) Stay in the cave" << endl;
    cin >> input;
    if (input == 1)
    {
        system("clear");
        cout << "You decide to take berries and apples from trees." << endl;
        cout << "You ate the apples." << endl;
        cout << "After that, you return to the cave, with your full stomach." << endl;
    }
    if (input == 2)
    {
        system("clear");
        cout << "You are starving. You died." << endl;
        return 0;
    }
}