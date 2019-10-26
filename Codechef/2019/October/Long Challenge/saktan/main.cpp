#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    int t,i,n,m,j,k,q,l,s;
    vector<int> res,x,y;
    multimap<int, int> point;
    cin>>t;
    for(i=0;i<t;i++)
    {
        multimap
        res.push_back(0);
        cin>>n>>m>>q;
        if(q==0)
            continue;
        vector<vector<int>> v(n,vector<int>(m));
        for(l=0;l<q;l++)
        {
            x.push_back(0);
            y.push_back(0);
            cin>>x[l]>>y[l];
            if
            point.insert(pair<int,int> (x[l],y[l]));
        }
        for(l=0;l<q;l++)
        {
            if(point[x]!=y[l])
        }
        /*
        for(l=0;l<q-1;l++)
        {
            for(s=l+1;s<q;s++)
            {
                if(x[l]==x[s] && y[l]==y[s])
                {

                }
            }
        }
        */
        /*
        for(l=0;j<q;l++)
        {
            if(v[x[l]-1][y[l]-1]%4==0)
                continue;
            if(v[x[l]-1][y[l]-1]%2==0)

        }
        */
        /*
         for(j=0;j<n;j++)
            for(k=0;k<m;k++)
                if(v[j][k]%2==1)                res[i]+=m+n-2;

                    res[i]++;
                    */
                    point.clear();
    }
    for(i=0;i<t;i++)
        cout<<res[i]<<"\n";
}
/*

*/
