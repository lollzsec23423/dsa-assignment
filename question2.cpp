#include <iostream>
using namespace std;
int main() {
    int q1[100], q2[100];
    int f1 = 0, r1 = -1;
    int f2 = 0, r2 = -1;
    int ch, x;
    cout << "1. push\n2. pop\n3. top\n4. empty\n5. exit\n";
    while (true) {
        cout << "enter choice: ";
        cin >> ch;
        if (ch == 1) {
            cout << "enter value: ";
            cin >> x;
            q2[++r2] = x;
            for (int i = f1; i <= r1; i++) {
                q2[++r2] = q1[i];
            }
            f1 = f2 = 0;
            r1 = r2;
            r2 = -1;

            for (int i = f1; i <= r1; i++) {
                q1[i] = q2[i];
            }
        }
        else if (ch == 2) {
            if (f1 > r1) {
                cout << "stack empty\n";
            } else {
                cout << "popped: " << q1[f1++] << endl;
            }
        }
        else if (ch == 3) {
            if (f1 > r1) {
                cout << "stack empty\n";
            } else {
                cout << "top: " << q1[f1] << endl;
            }
        }
        else if (ch == 4) {-
            if (f1 > r1) {
                cout << "stack is empty\n";
            } else {
                cout << "stack is not empty\n";
            }
        }
        else if (ch == 5) {
            cout << "exiting...\n";
            break;
        }
        else {
            cout << "invalid choice\n";
        }
    }

    return 0;
}
