#include <iostream>

using namespace std;
int main(){
    int number, a,b;

    cout<<" Enter What you do"<<endl;
    cin>>number;

    cout<<"Enter the value of a"<<endl;
    cin>>a;

    cout<<"Enter the value of b"<<endl;
    cin>>b;

    switch(number){
     
        case 1: cout<<a+b<<endl;
        break;

        case 2: cout<<a-b<<endl;
        break;

        case 3: cout<<a/b<<endl;
        break;

        case 4: cout<<a*b<<endl;
        break;

        default: cout<<"you enter incorrect value"<<endl;
        
    }
}