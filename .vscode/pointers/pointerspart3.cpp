#include<iostream>
using namespace std;
int main(){
    // int i=5;
    // int * p=&i;
    // int **p2=&p;
    // cout<<i<<"\n";
    // cout<<*p<<"\n";
    // cout<<**p2<<"\n";
    int a= 6;
    // int b=18;
    int*ptr=&a;
    int *q=ptr;
    (*q)++;
    // *ptr=9;
    cout<<a <<"\n";


}