#include <iostream>
#include <thread>
#include <chrono>
#include "level2.cpp"

using namespace std;

int level1()
{
    system("clear");
    int input2;
    cout << "You wake up in a forest. You feel dizzy. What do you do?" << endl;
    cout << "1) Look around" << endl;
    cout << "2) Search for help" << endl;
    cin >> input2;

    if (input2 == 1)
    {
        system("clear");
        int input3;
        cout << "You don't see anything other than trees and plants. No animals at all, but you realize you have a backpack." << endl;
        cout << "What do you do?" << endl;
        cout << "1) Look in the backpack" << endl;
        cout << "2) Keep looking around" << endl;
        cin >> input3;
        if (input3 == 1){
            system("clear");
            int input4;
            cout << "There is a flashlight, some sticks and a lighter. There is also a cave near you." << endl;
            cout << "What do you do?" << endl;
            cout << "1) Try and make a campfire outside" << endl;
            cout << "2) Try and make a campfire in the cave" << endl;
            cin >> input4;
            if (input4 == 1){
                system("clear");
                cout << "Before you tried, it started to rain. You decide to move in the cave." << endl;
                cout << "You successfully made a campfire!" << endl;
                level2();
            }
            if (input4 == 2){
                system("clear");
                cout << "You successfully made a campfire!" << endl;
                level2();
            }
        }
        if (input3 == 2){
            system("clear");
            cout << "It has been 30 minutes, you are starving." << endl;
            cout << "You died." << endl;
            cout << "Game Over" << endl;
            return 0;
        }
    };
        if (input2 == 2)
    {
        system("clear");
        int input3;
        cout << "After walking around for 5 minutes, you stop. You didn't find anyone, but you realize you have a backpack." << endl;
        cout << "What do you do?" << endl;
        cout << "1) Look in the backpack" << endl;
        cout << "2) Keep looking around" << endl;
        cin >> input3;
        if (input3 == 1){
            system("clear");
            int input4;
            cout << "There is a flashlight, some sticks and a lighter. There is also a cave near you." << endl;
            cout << "What do you do?" << endl;
            cout << "1) Try and make a campfire outside" << endl;
            cout << "2) Try and make a campfire in the cave" << endl;
            cin >> input4;
            if (input4 == 1){
                system("clear");
                cout << "Before you tried, it started to rain. You decide to move in the cave." << endl;
                cout << "You successfully made a campfire!" << endl;
                cout << "Press any key to continue" << endl;
                string anykey;
                cin >> anykey;
                level2();
            }
            if (input4 == 2){
                system("clear");
                cout << "You successfully made a campfire!" << endl;
                level2();
            }
        }
        if (input3 == 2){
            system("clear");
            cout << "It has been 30 minutes, you are starving." << endl;
            cout << "You died." << endl;
            cout << "Game Over" << endl;
            return 0;
        };
    };

    
}