#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the first number = ";
    cin>>a;
    cout<<"Enter the first number = ";
    cin>>b;
    cout<<"Enter the first number = ";
    cin>>c;

    if (a>b) {//A is graeter then B 
            if (a>c){
                cout<<a<<"is greatest";
            }
                else // c>a and c>b = c>b>a
                {cout<<c<<" is gteatest";
                }
}
else {  // b>C 
    if (b>c) {
    cout<<b<<"is greatest";
    }
    else {
        cout<<c<<"is greatest";
    }
}

    return 0;
}