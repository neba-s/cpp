#include<iostream>
#include<cmath>
using namespace std;
double opra(double a){
    if(a>=0){

        return sqrt(a);
    }
    else{

        return a*a;
    }





}



int main(){
    int a;
    cout<<"enter the number: ";
    cin>>a;

    cout<<opra(a)<<endl;



    return 0;
}