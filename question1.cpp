#include <iostream>
using namespace std;

int main() {
    int a[4] = {2, 7, 11, 15};
    int target;

    cout << "enter target: ";
    cin >> target;

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (a[i] + a[j] == target) {
                cout << "indices: " << i << " " << j << endl;
                cout << "numbers: " << a[i] << " + " << a[j] << " = " << target << endl;
                return 0;
            }
        }
    }
    cout << "no pair found";
    return 0;
}

