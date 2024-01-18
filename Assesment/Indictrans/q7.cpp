#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Please enter the string"<<endl;
    cin>>s;

    map<char,int>mp;
    int maxi = INT_MIN;

    int l = 0;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
        for(auto it: mp){
            if(it.second>1){
              l++;
              maxi = max(maxi,i-l+1);
            }
        }
    }

    cout<<"longest substring is "<< maxi <<endl;
}
