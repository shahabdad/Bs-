#include<iostream>

using namespace std ;

int main () {
    int list[100],list2[100];
    int n ;
    int i;
    cout<<"Enter number till  you  wanna copy \n";
    cin >> n ;
    cout <<"Enter list programology  content " << endl;
    for(i=0;i<n;i++) {
        cin>>list[i];

    }
    for (i=0;i<n;i++) {
        list2[i] = list[i];
    }  // programology content
    cout<<"copied array"<< endl;

    for(i=0;i<n;i++) {
        cout<<list2[i]<<endl;
    }
    return 0;

}