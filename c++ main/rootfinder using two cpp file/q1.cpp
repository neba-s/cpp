#include<iostream>
#include"rootlib.cpp"
using namespace std;
int main(){

    int a,b,c;
    cout<<"the three coffincent of the qadratic equation: ";
    cin >>a>>b>>c;

    findroot(a,b,c);

    return 0;
}