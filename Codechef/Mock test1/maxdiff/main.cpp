#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,n,j,k;
    cin>>t;
    vector<int> w,sum;
    for(i=0;i<t;i++){
        sum.push_back(0);
        cin>>n>>k;
        for(j=0;j<n;j++){
            w.push_back(0);
            cin>>w[j];
        }
        sort(w.begin(),w.end());
        for(j=0;j<k;j++){
            sum[i]-=w[j];
        }
        for(j=k;j<n;j++){
            sum[i]+=w[j];
        }
        w.clear();
    }
    for(i=0;i<t;i++)
        cout<<sum[i]<<"\n";
}
