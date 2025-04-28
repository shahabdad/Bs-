#include <iostream>
using namespace std;

int main() {
    int arr[2][2];

    // Input elements
    cout << "Enter 4 numbers for 2x2 array:" << endl;
    for (int i = 0; i < 2; i++) {           // rows
        for (int j = 0; j < 2; j++) {       // columns
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    // Output elements
    cout << "\nThe array is:" << endl;
    for (int i = 0; i < 2; i++) {          
        for (int j = 0; j < 2; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Check if 20 is available
    bool found20 = false;
    for (int i = 0; i < 2; i++) {           
        for (int j = 0; j < 2; j++) {
            if (arr[i][j] == 20) {
                found20 = true;
            }
        }
    }

    // Special output if 20 is found
    if (found20) {
        cout << "\nSpecial Message: 20 is found in the array!" << endl;
    } else {
        cout << "\n20 is not found in the array." << endl;
    }

    return 0;
}
