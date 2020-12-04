#include<iostream>
using namespace std;



int main(){
    int a=4, b=9;
    cout<<"Operators in C++"<<endl;

    // Arithmetic operators
    cout<<"a+b ="<<a+b<<endl;
    cout<<"a-b ="<<a-b<<endl;
    cout<<"a*b ="<<a*b<<endl;
    cout<<"a/b ="<<a/b<<endl;
    cout<<"a%b ="<<a%b<<endl;
    cout<<"a++ ="<<a++<<endl;
    cout<<"a-- ="<<a--<<endl;
    cout<<"++a ="<<++a<<endl;
    cout<<"--a ="<<--a<<endl;

cout<<endl;
    // Comparision operators
    cout<<"a==b "<<(a==b)<<endl;
    cout<<"a!=b "<<(a!=b)<<endl;
    cout<<"a>=b "<<(a>=b)<<endl;
    cout<<"a<=b "<<(a<=b)<<endl;
    cout<<"a>b "<<(a>b)<<endl;
    cout<<"a<b "<<(a<b)<<endl;
    cout<<"a+b = "<<(a+b)<<endl;

cout<<endl;
    // Logical operators
    cout<<((a<=b) && (a!=b))<<endl;
    cout<<((a<=b) || (a==b))<<endl;
    cout<<"Logical NOT operator: "<<!((a<=b) || (a==b))<<endl;
    return 0;
}