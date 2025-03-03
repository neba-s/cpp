#include<iostream>
using namespace std;
int main(){
int num;
cout<<"enter the number of term of the fibonachi pattern: ";
cin>>num;
int first=0,second=1,next;

cout<<first<<" , "<<second<<" , ";

for(int i=0;i<num;i++){
    next=first+second;
    cout<<next<<" , ";
    first=second;
    second=next;
}

    return 0;
}