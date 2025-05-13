#include <iostream>
#include  <string>
using namespace std;

//      STEP01:  Define the structure
struct Student  {
    int id ;
    string name;
    float marks;
};

int main() {
    // STEP02 : create a struct  variable 
     Student s1;

    //  STEP03: Input  data 

    cout<< "Enter Stdudent Id :" ;

    cin >> s1.id;
    
     cout << "Enter  student name :";
     cin.ignore();
     getline(cin,s1.name);

     cout <<  "Enter student marks :";
     cin >> s1.marks;

    //  Step 4 : Display the data

    cout <<  "\n student  Information:\n";
    cout << "ID: " << s1.id << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Marks: " << s1.marks << endl;

    return 0;
}