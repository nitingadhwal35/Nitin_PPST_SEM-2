#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    float D=b*b-4*a*c;
    float x1= (-b+sqrt(D))/2*a;
    float x2= (-b-sqrt(D))/2*a;

    if(D>=0){
        cout<<"First root is:"<<x1<<endl<<"second root is:"<<x2;
    }
    else{
        cout<<"this eq. has no real roots";
    }
}