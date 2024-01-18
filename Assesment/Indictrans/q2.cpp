#include<iostream>
using namespace std;

void do_even(int arr[],int a){
     cout<<"Even numbers are"<<endl;
     for(int i=0;i<a;i++){
        if(arr[i]%2==0){
            cout<<arr[i]<<" ";
        }
     }
}

int main(){
    int a;
    cout<<"please enter the no. of elements in array"<<endl;
    cin>>a;
    int arr[a];

    cout<<"enter the "<<a<<" elements in array"<<endl;
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }

    do_even(arr,a);
    return 0;
}