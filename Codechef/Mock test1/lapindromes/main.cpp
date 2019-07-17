#include <iostream>
#include <string>
#include <vector>
#include<bits/stdc++.h>

using namespace std;

int main(){

        int t,i,sz;
        cin>>t;
        string str,temp1,temp2,buf;
        getline(cin,buf);
        vector<string> res;
        for(i=0;i<t;i++){
            res.push_back("");
            getline(cin,str);
            sz = str.size();
            if(sz%2==0){
                temp1 = str.substr(0,(sz/2));
                temp2 = str.substr(sz/2,sz-1);
              }
              else {
                temp1 = str.substr(0,(sz/2));
                temp2  =str.substr((sz/2)+1,sz-1);
              }
              sort(temp1.begin(), temp1.end());
              sort(temp2.begin(), temp2.end());
              if(!temp1.compare(temp2))
                    res[i] = "YES";
        else res[i] = "NO";
        }
        for(i=0;i<t;i++){
            cout<<res[i]<<"\n";
        }
}
