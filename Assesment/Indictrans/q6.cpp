#include<iostream>
using namespace std;

void bsearch(int arr[],int l,int r,int t){
    int mid = (l+r)/2;
    if(arr[l]==t){
        cout<<"target position is "<<l<<endl;
    }
    else if(arr[r]==t){
        cout<<"target position is "<<r-1<<endl;
    }
    
    else if(arr[mid]==t){
        cout<<"target position is "<<mid<<endl;
    }

    else if(arr[mid]<t){
         bsearch(arr,mid,r,t);
    }
    else{
        bsearch(arr,l,mid,t);
    }
}

int main(){
    int n;
    cout<<"enter the no. in arrray"<<endl;
    cin>>n;

    int t;
    cout<<"enter the target"<<endl;
    cin>>t;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bsearch(arr,0,n,t);

    return 0;
}