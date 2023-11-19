#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
string convert(string &a,int b,int &i){
    a[b]=tolower(a[b]);
    string ans;
    ans+=a[b];
    b++;
    
    while(!isupper(a[b]) && b<a.length()){
        a[b]=toupper(a[b]);
        ans+=a[b];
        i++;
        b++;
        
    }
    
    return ans;
    
}


int main()
{
    string q="iamaBigfoolandYoureGood";
    vector<string> ans;
    q[0]=toupper(q[0]);
    string first;
     first+=q[0];
    int j=1;
    while(!isupper(q[j])){
      first+=q[j];
        j++;
    }
    ans.push_back(first);
    
    for(int i=j;i<q.length();i++){
         if(isupper(q[i])){
            ans.push_back(convert(q,i,i));
            
        }
        
    }
