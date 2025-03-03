#include <iostream>
using namespace std;

// Recursive function to find Fibonacci numbers
int fibonacci(int i){
    if(i==0){
        return 0;
    }
    if(i==1){
        return 1;
    }

    return fibonacci(i-1)+fibonacci(i-2);


}
int main() {

    int term;
    cout<<"enter the amount of the term: ";
    cin>>term;
for (int i=0;i<term;i++){
    cout<<fibonacci(i)<<" . ";


}
    return 0;
}
