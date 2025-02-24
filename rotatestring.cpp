#include <iostream>

using namespace std;

bool canShiftToGoal(string s, string goal) {
    if (s.length() != goal.length()) return false;
    string doubleS = s + s;
    return doubleS.find(goal) != string::npos;
}

int main() {
    string s = "abcde";
    string goal = "cdeab";

    if (canShiftToGoal(s, goal)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
