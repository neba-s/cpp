//a programm that will read and print using a funcion
#include<iostream>
using namespace std;
void readarrey(int newarr[][3])
{
    for(int i=0;i<4;i++)                           {
        for(int j=0;j<3;j++){
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin>>newarr[i][j];}
                                                    }

}

void printarrey(int newa[][3]){

    cout<<"the arrey elemnts are"<<endl;
    for(int i=0;i<4;i++)                {
        for(int j=0;j<3;j++){
            cout<<newa[i][j]<<endl;
                            }
    
                                        }


}



int main(){

    int arr[4][3];
    readarrey(arr);
    printarrey(arr);



    

    return 0;
}