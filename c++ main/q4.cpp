#include<iostream>
#include<cmath>
using namespace std;
int hypo(int a,int b, double &c){

    c=sqrt((a*a) +( b*b));
    
    return c;

}


int main(){
    double a=3,b=4,c;
    cout<<hypo(a,b,c)<<endl;

    return 0;
}