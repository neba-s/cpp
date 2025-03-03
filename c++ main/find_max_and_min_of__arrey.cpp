//a proggram that print the maximun and minimux element out of the arrey list
#include<iostream>
using namespace std; 
void getminmax(int arrey[],int *minimum,int *maximum)//the fuction that print the min
{
    *minimum=arrey[0];
    for (int i=0;i<5;i++) {
        if(*minimum>arrey[i]){
           * minimum=arrey[i];} \
        }

    *maximum=arrey[0];
    for (int i=0;i<5;i++){
        if(*maximum<arrey[i]){
            *maximum=arrey[i];}
        }

}

int main (){
    int arr[5]={6,44,2,5,7};
    int min=arr[0];
    int max=arr[0];

    getminmax(arr,&min, &max);
    cout<<min<<endl;
    cout<<max<<endl;

    return 0;
}