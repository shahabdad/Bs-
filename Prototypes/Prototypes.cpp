#include <iostream>
using namespace std;

int sum(int, int);  

int main() {
    int num1, num2;
    cout << "Enter Number One:\n";
    cin >> num1;

    cout << "\nEnter Number Two:\n";
    cin >> num2;

    int add = sum(num1, num2);
    cout << "\nThe sum of the two numbers: " << add;
    return 0;
}

int sum(int a, int b) {
    int c = a + b;
    return c;
}

