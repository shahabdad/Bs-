#include <iostream> 
using namespace std ;
#define  RESET "\033[0m"
#define RED  "\033[31m"
#define GREEN  "\033[32m"
#define YEllOW  "\033[33m"
#define CYAN  "\033[36m"
#define BOLD "\033[1m"

void swapByValue(int a , int b ) {       // Funation : Call by  Value         
    int  emp = a ;   
    a = b ;
    b = emp;
    cout << CYAN <<"Inside swapByValue - a :" << a  << ",b : "<< b << RESET <<  endl;
   }

void  swapByReference(int &a,int &b) {       // function  call by  reference 
    int mp = a; 
        a = b;
        b = mp;
     cout << CYAN  <<"Inside swapByReference - a : " << a << ", b :" << b << RESET << endl; 
}

int main () { 
    int  x = 10 , y =20;
    
    cout << BOLD <<"Original  Values - x:" << x <<", y:" << y << RESET << endl;
     
    swapByValue(x,y);   // call By value 
    cout << YEllOW << "After swapByValue  - x:"<< x  << ", y:" << y << " (NO change)"<< RESET << endl ;

    swapByValue(x,y);   // call By  Reference 
    cout << GREEN << "After swapByReference - x:"<< x  << ", y:" << y  << "(Swapped Successfully)"<< RESET << endl ;

     // AUthor INfo
    cout << RED  << "Submitted by:Shahab Dad " <<endl ;
    cout<< "Roll No: 222" << RESET <<endl;
}