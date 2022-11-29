#include <iostream>
#include <stack>
using namespace std;

template <typename ItemType>

class MinStack {
private:
    ItemType min;
    stack<int> s;

    void privatePush(ItemType input) {
        if (s.empty()) {
            min = input;
            s.push(input);
        } else if (input < min) {
            ItemType pushElement = (2 * input) - min;
            s.push(pushElement);
            min = input;
        } else {
            s.push(input);
        }
    }

    ItemType privatePop() {
        if (s.size() == 0) {
            cout << "Stack is empty, try again!";
            return 0;
        }

        ItemType topElement = s.top();
        s.pop();
        
        if (topElement < min) {
            ItemType returnElem = min;
            min = (2 * min) - topElement;
            return returnElem;
        }
        
        cout << "Element has been successfully removed.";
        return topElement;
    }

    ItemType privateFindMin() {
        if (s.size() == 0) {
            cout << "Stack is empty, try again!";
            return 0;
        }

        cout << "The min value is: " << min << endl;
        return min;
    }

    ItemType top() {
        if (s.size() == 0) {
            cout << "Stack is empty.";
            return 0;
        }

        ItemType topElement =  s.top();

        if (topElement < min) {
            return min;
        }

        return topElement;
    }

    int size() {
        return s.size();
    }

public:
    void push(ItemType item) {
        privatePush(item);
    };
    ItemType pop() {
        return privatePop();
    };
    ItemType findMin() {
        return privateFindMin();
    };
};

