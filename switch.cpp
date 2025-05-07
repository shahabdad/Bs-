// #include <iostream>
// // #include  <conio.h>
// using namespace std;

// int main ()  {

//         int ch ;

//         cout<< "Enter any number (1 to 7 ) :";

//         cin >> ch ;
//         switch (ch)
//         {
//         case 1:
//         cout << "Today   is Monday";
//             /* code */
//             break;
//     case 2:
//     cout << "Today  is  Tuesday";
//     break;
//     case 3 :
//     cout << "Today is wednesday";
//     break;  
//     // (More case like  4 to 7 can be  added here)
        
//         default:
//         cout <<"Invalid input";  // if number is  not  1-7
//         }
//         getch();
// }
#include <iostream>  // Standard I/O library
using namespace std; // So we don't have to write std:: before cout, cin

int main() {
    int ch;

    // No clrscr() in modern C++, so we skip it

    cout << "Enter any number (1 to 7): ";
    cin >> ch;

    switch (ch) {
        case 1:
            cout << "Today is Monday";
            break;
        case 2:
            cout << "Today is Tuesday";
            break;
        case 3:
            cout << "Today is Wednesday";
            break;
       case 4 :
       cout << "Today is Thursday ";
       case 5 :
       cout << "Today is Firday ";
       case 6 :
       cout << "Today is  saturday";
       case 7 :
       cout << "Today is  Sunday";
       default:
            cout << "Only enter value 1 to 7 ";
    }

    return 0;
}
