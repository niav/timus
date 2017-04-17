//
// Created by Korystuvach on 17-Apr-17.
//

#include <iostream>

using namespace std;

int main() {

    int f;
    cin >> f;

    int restProblem = 12-f;
    bool enoughTime = restProblem*45<240;
    enoughTime?cout << "YES":cout << "NO";


    return 0;
}