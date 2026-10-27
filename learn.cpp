#include<iostream>
using namespace std;
int main(){
    int p,q,r;
    cout<<"Enter the first number = ";
    cin>>p;
    cout<<"Enter the second number = ";
    cin>>q;
    cout<<"Enter the third number = ";
    cin>>r;

        if (p>q) {
            if (p>r){
                cout<<p<<"is greatest ";
            }
            else { //r>p  and r>q = r>p>q
                cout<<r<<"is greatest ";
            }
        }    
        else {
                if (q>r){
                    cout<<q<<"is greatest ";
                }
                else {
                    cout<<r<<"is greatest ";
                }
        
        }    

        

    return 0;
}
