#include<iostream>
#include <cmath>

using namespace std;
 int main(){
    int p,r,n,t;
    float ci;
    
    cout<<"Enter all values line wise: p, r,n,t"<<endl;
    cin>>p;
    cin>>r;
    cin>>n;
    cin>>t;
    cout<<"Compound Interest is:"<<endl;

    ci= p*pow(1+r/n,n*t);
    cout<<ci<<endl;
 }