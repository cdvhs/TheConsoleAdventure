#include <iostream>
#include "levels/level1.cpp"

using namespace std;

int main()
{
    system("clear");
    string input;
    cout << "The Console Adventure" << endl;
    cout << "Press any key and hit Return to start" << endl;
    cin >> input;
    level1();
}