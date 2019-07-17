#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,j,n;
    cin>>t;
    string str,buf;
    vector<int> res;
    for(i=0;i<t;i++){
            res.push_back(0);
            cin>>n;
            getline(cin,buf);
            getline(cin,str);
            res[i] = count(str.begin(), str.end(), '1');
            res[i]=((res[i])*(res[i]+1))/2;
    }
    for(i=0;i<t;i++)
        cout<<res[i]<<"\n";
}
