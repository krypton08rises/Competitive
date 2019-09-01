#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t,i,n,j,k;
    vector<int> v;
    vector<int,int> w;
    cin>>t;
    for(i=0;i<t;i++)
    {
            w.push_back(vector<int>);
            cin>>n>>k;
            for(j=0;j<n;j++)
            {
                    v.push_back(0);
                    cin>>v[j];
            }
            for(j=0;j<n;j++)
            {
                if(v[j]==-1)
                {
                    for(l=1;l<=k;l++)
                    {
                        if(l!=v[j] && l!=v[k])
                        {
                                 v[j] = l;
                                 break;
                        }
                    }
                }
                w[i].push_back(v[j]);
            }

    }
}
