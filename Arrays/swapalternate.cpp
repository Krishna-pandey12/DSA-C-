#include<iostream>
using namespace std;

void swapAlternate(int arr[],int size){
     for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
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
    int even[10]={8,9,3,4,6,11,87,99,5,10};
    int odd[5]={2,6,3,9,4};

    swapAlternate(even,10);
    swapAlternate(odd,5);

    printArray(even,10);
    printArray(odd,5);

}