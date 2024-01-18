#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"please enter the text"<<endl;
    getline(cin,s);

    map<string,int>mp;
    for(int i=0;i<s.size();i++){
        string st = "";
        while(s[i]!=' '){
            st += s[i];
            i++;
        }
        mp[st]++;
    }

    cout<<"frequency is as follows"<<endl;
    
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}