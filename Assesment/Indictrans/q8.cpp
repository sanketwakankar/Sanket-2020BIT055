#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"please enter the string "<<endl;
    getline(cin,s);
    
    
    
    for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i] = s[i] - 'A' + 'a';
        }
    }

    int i = 0;
    int j = s.size()-1;
    
    while(i<j){
        if(s[i] != s[j]){
            cout<<"False"<<endl;
            break;
        }
        else{
        i++;
        j--;
        continue;
        }
        
    }
    cout<<"True"<<endl;

}