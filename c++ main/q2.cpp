#include<iostream>
using namespace std;

double largest(double a, double b, double c){
    if(a>b && a>c){
        return a;
        
    }
    else if(b>a && b>c){
        return b;
        
    }
    else{

        return c;
    }



}
double largest(double a, double b){
    if(a>b){
        return a;
    }
    else{

        return b;
    }



}
int main(){
    double a=6,b=6,c=1;
    double d=4,e=3;
    cout<<"the largest is: "<<largest(a,b,c)<<endl;
    cout<<"the largest is: "<<largest(d,e)<<endl;



    return 0;
}