#include <iostream>
#include "minstack.h"
using namespace std;

int main() {
    int selection = 0;
    int pushElement;
    MinStack<int> s;

    while (selection != 4) {
        cout << "\n Select your action: " << endl;
        cout << "1. Push\n2. Pop\n3. Find Min\n4. Quit\n" << endl;
        cin >> selection;

        if (selection == 1) {
            cout << "Input your desired value to push: ";
            cin >> pushElement;
            s.push(pushElement);
            cout << "Element added to stack.";
        } else if (selection == 2) {
            s.pop();
        } else if (selection == 3) {
            s.findMin();
        } else if (selection == 4) {
            cout << "You selected to quit. ";
            return 0;
        } else {
            cout << "Invalid input.";
        }
        cout << "\n";
    }
}
