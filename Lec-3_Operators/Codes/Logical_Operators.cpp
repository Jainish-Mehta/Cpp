#include<iostream>
using namespace std;

void And(bool a,bool b){
    cout<<boolalpha;
    cout<<"And of "<<a<<" and "<<b<<" is "<<(a&&b)<<endl;// only true&&true is true 
}

void Or(bool a,bool b){
    cout<<boolalpha;
    cout<<"Or of "<<a<<" and "<<b<<" is "<<(a||b)<<endl;// only false||false is false
}

void Not(bool a){
    cout<<boolalpha;
    cout<<"Not of "<<a<<" is "<<(!a)<<endl;// !true is false !false is true
}

int main(){
    bool a=true;
    bool b=false;
    And(a,b);
    Or(a,b);
    Not(a);
    return 0;
}