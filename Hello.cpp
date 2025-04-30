    // #include <iostream>
    // using namespace std;

    // int main() {
    //     int arr[2][2];

    //     // Input elements
    //     cout << "Enter 4 numbers for 2x2 array:" << endl;
    //     for (int i = 0; i < 2; i++) {           // rows
    //         for (int j = 0; j < 2; j++) {       // columns
    //             cout << "Enter element [" << i << "][" << j << "]: ";
    //             cin >> arr[i][j];
    //         }
    //     }

    //     // Output elements
    //     cout << "\nThe array is:" << endl;
    //     for (int i = 0; i < 2; i++) {          
    //         for (int j = 0; j < 2; j++) {
    //             cout << arr[i][j] << " ";
    //         }
    //         cout << endl;
    //     }

    //     // Check if 20 is available
    //     bool found20 = false;
    //     for (int i = 0; i < 2; i++) {           
    //         for (int j = 0; j < 2; j++) {
    //             if (arr[i][j] == 20) {
    //                 found20 = true;
    //             }
    //         }
    //     }

    //     // Special output if 20 is found
    //     if (found20) {
    //         cout << "\nSpecial Message: 20 is found in the array!" << endl;
    //     } else {
    //         cout << "\n20 is not found in the array." << endl;
    //     }

    //     return 0;
    // }


    #include <iostream>
    using namespace std;

    // ANSI color codes
    #define RESET   "\033[0m"
    #define RED     "\033[31m"
    #define GREEN   "\033[32m"
    #define YELLOW  "\033[33m"
    #define CYAN    "\033[36m"
    #define BOLD    "\033[1m"

    // Function: Call by Value
    void swapByValue(int a, int b) {
        int temp = a;
        a = b;
        b = temp;   


        cout << CYAN << "Inside swapByValue - a: " << a << ", b: " << b << RESET << endl;
    }

    // Function: Call by Reference
    void swapByReference(int &a, int &b) {
        int temp = a;
        a = b; 
        b = temp;
        cout << CYAN << "Inside swapByReference - a: " << a << ", b: " << b << RESET << endl;
    }

    int main() {
        int x = 10, y = 20;

        cout << BOLD << "Original Values - x: " << x << ", y: " << y << RESET << endl;

        // Call by Value
        swapByValue(x, y);
        cout << YELLOW << "After swapByValue - x: " << x << ", y: " << y << " (No Change)" << RESET << "\n" << endl;

        // Call by Reference
        swapByReference(x, y);
        cout << GREEN << "After swapByReference - x: " << x << ", y: " << y << " (Swapped Successfully)" << RESET << "\n" << endl;

        // Author Info
        cout << RED << "Submitted by: Shahab Dad" << endl;
        cout << "Roll No: 12345" << RESET << endl;

        return 0;
    }
