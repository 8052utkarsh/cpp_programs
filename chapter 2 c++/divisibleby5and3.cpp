#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the first value = ";
    cin>>n;

    // if (n%5==0) {
    //     cout<<"The number is divisible by 5.";
    // }
    // else if (n%3==0) {
    //     cout<<"This value is divisible by 3";
    // }
    // else if (n%15!=0) {
    //     cout<<"This value is not divisible by 15";
    // }
    if (n%5==0 or n%3==0 and n%15!=0)
        {cout<<"The value is divisible bu 5 and 3 and not divisible by 15";
        cout<<"this condition is not applicanle ";}

        return 0; 
}