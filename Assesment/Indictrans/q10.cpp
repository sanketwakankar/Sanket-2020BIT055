#include<iostream>
using namespace std;

void fact(int n,int &sum){
    if(n==0){
        return;
    }
   
    sum = sum * n;
    fact(n-1,sum);
    
}

int main(){
    int n;
    cout<<"please enter the no."<<endl;
    cin>>n;
    if(n==0){
        cout<<"factorial is 0"<<endl;
    }
    else{
    int sum = 1;
    fact(n,sum);
    cout<<"factorial is "<<sum<<endl;
    }
    return 0;
}