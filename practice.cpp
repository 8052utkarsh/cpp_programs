#include <iostream>
using namespace std;
int main(){
    int l;
    cout<<"enter the value of length = ";
    cin>>l;
    int b;
    cout<<"enter the value of breadth = ";
    cin>>b;
    int area = (l*b);
    cout<<"the area of rectangle is = "<<area <<endl;
    int perimeter = (2*(l+b));
    cout<<"The perimeter of a rectangle =  "<<perimeter <<endl;
    if (area > perimeter) {
        cout<<"The area of rectangle is greater then area perimeter";
    }
        else {
            cout<<"area of rectangle is not equal to area of perimeter";
        }
        return 0;
}                






