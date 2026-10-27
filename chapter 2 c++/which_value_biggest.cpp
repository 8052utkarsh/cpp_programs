#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter the first number = ";
    cin>>x;
    cout<<"Enter the second number = ";
    cin>>y;
    cout<<"Enter the third number = ";
    cin>>z;

    if (x<y && x<z ) {
        cout<<x<<"is the smallest value";
    }
    else if (y<z && y<x) {
        cout<<y<<"is the smallest value";
    }
    else {
        cout<<z<<"is the smallest value " ;
    }
    return 0;
}