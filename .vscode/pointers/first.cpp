#include<iostream>
using namespace std;

int main(){
    int num = 3;
    cout<<num<<endl;
    cout<<&num<<endl;
    int *ptr=&num;
    cout<<"Address is:" <<ptr<<endl;
    cout << "value is :"<<*ptr<<endl;

    double d=4.3;
    double *p2=&d;

    cout<<"Adreess is :"<<p2<<endl;
    cout << "value is :"<<*p2<<endl;

    int *p=0;
    cout<<*p<<endl;


}