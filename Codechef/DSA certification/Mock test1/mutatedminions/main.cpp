#include <iostream>
#include <vector>
using namespace std;

int main(){

        int t,i,n,j,k;
        vector<int> v,res;
        cin>>t;
        for(i=0;i<t;i++){
            res.push_back(0);
            cin>>n>>k;
            for(j=0;j<n;j++){
                v.push_back(0);
                cin>>v[j];
            }
            for(j=0;j<n;j++){
                if(!((v[j]+k)%7))
                    res[i]++;
            }
            v.clear();
        }
        for(i=0;i<t;i++)
            cout<<res[i]<<"\n";
}
