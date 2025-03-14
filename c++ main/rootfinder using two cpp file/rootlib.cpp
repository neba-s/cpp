#include<iostream>
#include<cmath>
using namespace std;
void findroot(int a, int b, int c){
    double r1,r2;

    int dis=(b*b)-(4*a*c);

    if(dis>0){
        r1=(-b+sqrt(dis))/2*a;
        r2=(-b-sqrt(dis))/2*a;
        
        cout<<"the first root is : "<<r1<<endl;
        cout<<"the second root is : "<<r2<<endl;

    }
    else if(dis=0){
        r1=(-b)/(2*a);
        cout<<"the single root is: "<<r1;

    }
    else{
        cout<<"there is no root"<<endl;
    }





}