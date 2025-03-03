//a proggram that will print a string and character arrey using function.
#include<iostream>
using namespace std;

void printstring(string newname){

    cout<<newname<<endl;
}
void printchararrey(char newname[]){
    cout<<newname<<endl;

}


int main(){
 
    char fullname1[100];
    string fullname;


    cout<<"enter your fullname again: ";
    cin.get(fullname1,100,'\n');
    printchararrey(fullname1);
    


    cout<<"enter your fullname: ";
    cin.ignore();
    getline(cin,fullname);
    printstring(fullname);
   







    return 0;
}