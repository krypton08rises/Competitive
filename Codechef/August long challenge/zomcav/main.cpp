#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int main()
{
    int t,i,n,j,k,temp1,temp2;
    vector<long long int> c,h,rad;
    vector<string> res;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        res.push_back("NO");
        for(j=0;j<n;j++){
            c.push_back(0);
            rad.push_back(0);
            cin>>c[j];
        }
        for(j=0;j<n;j++){
            h.push_back(0);
            cin>>h[j];
        }
        sort(h.begin(),h.end());

        for(j=0;j<n;j++){
            temp1 = (j+1-c[j]>0)?j+1-c[j]:0;
            temp2 = (j+1+c[j]<n+1)?j+1+c[j]:n;
            for(k=temp1;k<temp2;k++){
                rad[k]++;
            }
        }
        sort(rad.begin(),rad.end());
        if(rad==h)
            res[i]="YES";

        c.clear();
        h.clear();
        rad.clear();
    }
    for(i=0;i<t;i++)
        cout<<res[i]<<"\n";
    }
