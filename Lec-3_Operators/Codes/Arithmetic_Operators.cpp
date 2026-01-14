#include<iostream>
using namespace std;

void Add(int a,int b){
    cout<<"Addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
}

void Sub(int a,int b){
    cout<<"Subtraction of "<<a<<" and "<<b<<" is "<<a-b<<endl;
}

void Mul(int a,int b){
    cout<<"Multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
}

void Div(int a,int b){
    cout<<"Division of "<<a<<" and "<<b<<" is "<<a/b<<endl;
}

void Mod(int a,int b){
    cout<<"Modulus of "<<a<<" and "<<b<<" is "<<a%b<<endl;
}
int main(){
    int a=15;
    int b=5;
    Add(a,b);
    Sub(a,b);
    Mul(a,b);
    Div(a,b);
    Mod(a,b);
    return 0;
}