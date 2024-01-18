#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter no. in array"<<endl;
    cin>>n;

    int t;
    cout<<"enter the target sum"<<endl;
    cin>>t;

    int arr[n];
    cout<<"enter no. in array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"the pairs are as follows "<<endl;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int s = arr[i] + arr[j];
            if(s==t){
                cout<<"("<<arr[i]<<","<<arr[j]<<") ";
            }
        }
    }
    return 0;
}