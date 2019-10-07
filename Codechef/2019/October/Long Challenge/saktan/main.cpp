#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t,i,n,m,j,k,q,l,x,y;
    vector<vector<int>> v;
    vector<int> res;
    for(i=0;i<t;i++)
    {
        res.push_back(0);
        cin>>n>>m>>q;
        for(j=0;j<n;j++)
        {
            v.push_back();
            for(k=0;k<m;k++)
            {
                v[j].push_back(0);
            }
        }
        for(l=0;l<q;j++)
        {
            cin>>x>>y;
            k=y-1;
            for(j=0;j<n;j++)
                v[j][k]++;
            j=x-1;
            for(k=0;k<m;k++)
                v[j][k]++;
        }
         for(j=0;j<n;j++)
        {
            for(k=0;k<m;k++)
            {
                if(v[j][k]%2==1)
                    res[i]++;
            }
        }
    }
    for(i=0;i<t;i++)
        cout<<res[i]<<"\n";
}
