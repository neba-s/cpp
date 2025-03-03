#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"enter the number: ";
    cin>>num;
    int factorail=1;
    for(int i=1;i<=num;i++)
    {
            factorail*=i;

    }
    cout<<factorail<<endl;


    return 0;
}