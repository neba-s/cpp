#include<iostream>
#include<ctime>
using namespace std;
int main(){

srand(time(0));

int secret,guess,round;

secret=(rand()%20)+1;

round=0;
do{
    cout<<"enter the number between 1 and 20: ";
    cin>>guess;
    
    if(guess==secret)
    {
        cout<<"congrat! you got the number in "<<round<<" round "<<endl;

    }
    else if(guess>secret && guess<=20){
        cout<<"to high."<<endl;

    }
    else if (guess<secret && guess>=0)
    {
        cout<<"to low."<<endl;

    }
    else
    {

        cout<<"you have to enter the number between 1 and 20."<<endl;
    }

    round+=1;

}while(guess!=secret);





    return 0;
}
