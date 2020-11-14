#include<iostream>
#include<climits>
using namespace std;

//Question: Create an array by taking user input and find the minimun and max elemenmt of that array.

int main(){
    int n;
    cin>>n;
    int Array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>Array[i];
    }

    int max=INT_MIN,min=INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (max<Array[i])
        {
            max = Array[i];
        }
        if (min>Array[i])
        {
            min = Array[i];
        }
        
    }
    cout<<"min = "<<min<<" max = "<<max;

    return 0;
}