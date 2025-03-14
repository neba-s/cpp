#include<iostream>
using namespace std;

int square(int a){
    return a*a;


}
double square(double a){
    return a*a;

    
}
int main(){
    int a=3;
    double b=3.3;
    cout<<square(a)<<endl;
    cout<<square(b)<<endl;







    return 0;
}