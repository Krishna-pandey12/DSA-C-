#include<iostream>
using namespace std;

void reverse(int arr[],int n){
    int start =0;
    int end =n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<endl;

}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[10]={8,9,3,4,6,11,87,99,5,10};
    int brr[5]={2,6,3,9,4};

    reverse(arr,10);
    reverse(brr,5);

    printArray(arr,10);
    printArray(brr,5);

}
