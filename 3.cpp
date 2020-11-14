#include<iostream>
using namespace std;

int global_var = 6;

void sum(){
    int a;
    cout<<global_var;
}

int main(){
    int global_var = 9;
    global_var = 69;

    bool is_true = false;

    cout<<global_var<<is_true<<endl;
    sum();

    return 0;
}