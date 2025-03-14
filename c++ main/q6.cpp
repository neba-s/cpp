#include<iostream>
using namespace std;
void calquotient(double,double,double&);

int main(){

    double a,b,c;
    cout<<"enter a,b and c"<<endl;
    cin >> a >> b;

    calquotient(a,b,c);
    cout<<c<<endl;

    return 0;
}

void calquotient(double n1,double n2, double &answer){

    if(n2!=0){
        answer=n1/n2;


    }
    
    else{

        cout<<"does not have the answer"<<endl;
    }

}