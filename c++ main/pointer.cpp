//a proggram that can show us the overview of what is a pointer

#include<iostream>

using namespace std;

/*void printletter(char* ptr);
void printnum(int * ptr);
void printstring(string* ptr);*/
void print(void* ptr,char type);

int main(){
    char letter='b';
    int num=53;
    string name="nebiyu";

    /*print(&letter,'c');
    print(&num,'i');
    print(&name,'s');*/


    /*printletter(&letter);
    printnum(&num);
    printstring(&name);*/

    int luckynum[5]={1,3,54,};
    cout<<luckynum <<endl;//same version of pointer but for the firs number
cout<<"-----------------------------------"<<endl;

    cout<<luckynum[0]<<endl;//using indext for dereffernce
    cout<<&luckynum[0]<<endl;
    cout<<luckynum <<endl;
    cout<<*luckynum<<endl;

cout<<"-----------------------------------"<<endl;


    cout<<luckynum[1]<<endl;
    cout<<&luckynum[1]<<endl;
    cout<<luckynum +1<<endl;
    cout<<*(luckynum +1)<<endl;

cout<<"-----------------------------------"<<endl;
    cout<<luckynum[2]<<endl;
    cout<<&luckynum[2]<<endl;
    cout<<luckynum + 2<<endl;
    cout<<*(luckynum + 2)<<endl;

cout<<"-------------generalization----------------------"<<endl;
cout<<luckynum[0]<<" is the same as "<<*luckynum<<endl;//and
cout<<&luckynum[0]<<" is the same as "<<luckynum<<endl;
cout<<"######################################################"<<endl;

int arrey[5];
for (int i=0;i<=4;i++){
    cout<<"enter the "<<i<<" element: ";
    cin>>arrey[i];

}

for (int i=0;i<=4;i++){
    cout<<arrey[i]<<"="<<*(arrey + i)<<" : "<<arrey + i<<endl;;
}








    return 0;
}

/*void printletter(char* ptr){

    cout<<* ptr<<endl;

}

void printnum(int* ptr){

    cout<<* ptr<<endl;

}

void printstring(string* ptr){

    cout<<*ptr<<endl;
}*/


void print(void* ptr,char type){
    switch (type)
    {
    case 'i'://handle the integer casting
        cout<<*((int*)ptr)<<endl;
        break;
    case 's'://handle the string casting
        cout<<*((string*)ptr)<<endl;
        break;
    case 'c'://handle the character casting
        cout<<*((char*)ptr)<<endl;
        break;

    }

}