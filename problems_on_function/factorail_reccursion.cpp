#include<iostream>
using namespace std;

int factorail(int n)
    {
    if(n==0){

        return 1;
    }
    if(n==1){

        return 1;
    }
    return n*factorail(n-1);



}

int main(){


int num;
cout<<"enter the number: ";
cin>>num;
cout<<factorail(num)<<endl;
    return 0;
}