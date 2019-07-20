#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t,i,n,j,q,l;
    cin>>t;
    vector<int> v,k;
    for(i=0;i<t;i++){
        cin>>n>>q;
        for(j=0;j<n;j++){
            v.push_back(0);
            cin>>v[j];
        }
        sort(v.begin(),v.end());
        for(l=0;l<q;l++){
            k.push_back(0);
            cin>>k[l];
        }
    }

}
