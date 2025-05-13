//      Def:  An array is a  collection of  similar data type  value in  a single varaible. it is derived data type
//  in c++,which is  constructed from fundamental data  type of c++ language
#include <iostream>
using namespace std ;
int main () {
    int arr[5];
    cout<<"Enter  5 elements:";
    for(int i = 0 ; i < 5 ; i++){
        cin >> arr[i] ;
    }
    cout << "Element are :";
    for (int i= 0; i<5; i++) {
        cout << arr[i] << " ";

    }
     return 0;
}