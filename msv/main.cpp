#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t,i,n,j,k,starmax,starindex;
    vector<int> v,resmax;
    cin>>t;
    for(i=0;i<t;i++)
    {
        resmax.push_back(0);
        cin>>n;
        for(j=0;j<n;j++)
        {
            v.push_back(0);
            cin>>v[j];
        }
        starmax = v[0];
        starindex = 0;
        for(j=1;j<n;j++)
        {
            if(starmax%v[j]==0)
            {
                    starmax = v[j];
                    starindex = j;
            }
        }
        for(j=0;j<starindex;j++)
        {
            if(v[j]%starmax==0)
                resmax[i]++;
        }
    }
    for(i=0;i<t;i++)
        cout<<resmax[i]<<"\n";
}
