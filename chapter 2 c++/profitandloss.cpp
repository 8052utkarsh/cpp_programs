#include <iostream>
using namespace std;
int main(){
    int cp;
    cout<<"Enter the value of cost price = ";
    cin>>cp;
    int sp;
    cout<<"Enter the value of selling price = ";
    cin>>sp;
    if (sp > cp) {
        cout<<"PROFIT"<<endl;
    }
    else if(sp < cp) {
        cout<<"LOSS"<<endl;
    }
    else {
        cout<<"NO PROFIT and NO LOSS"<<endl;
    }
        return 0; 
}