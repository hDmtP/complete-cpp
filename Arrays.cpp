#include<iostream>
using namespace std;


//1. Array is a list of variables of similiar type
//2. Basic Structure of an Array:
//datatype arrayName[size];
//int array[4] = [10,20,30,48];


int main(){
    int firstArr[5] = {1,69,420,16,92};
    cout<<firstArr<<endl;
    int secondArr[5];
    for (int i = 0; i < 5; i++)
    {
        cin>>secondArr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<firstArr[i]<<" "<<secondArr[i]<<endl;
    }
    
    

    return 0;
}