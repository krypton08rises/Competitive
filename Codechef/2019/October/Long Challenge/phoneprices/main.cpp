#include <iostream>
#include <vector>
#include <climits>

using namespace std;

bool checkprice(vector<int> v,int n);
int main()
{
    int t,n,j,min5,ind;
    cin>>t;
    vector<int> p,res;
    for(int i=0;i<t;i++)
    {
        res.push_back(1);
        cin>>n;
        if(n==0)
        {
            res[i]=0;
            continue;
        }
        for(j=0;j<n;j++)
        {
            p.push_back(0);
            cin>>p[j];
        }

        min5 = p[0];
        for(j=1;j<n;j++)
        {
            if(j/5<1)
            {
                if(p[j]>=min5)
                    continue;
                res[i]++;
                min5 = p[j];
            }
        }
        for(j=5;j<n;j++)
        {
            if(p[j]>p[j-1])
            {
                    continue;
            }
            else
            {
                    if(checkprice(p,j))
                    {
                            res[i]++;
                    }
            }
        }

    }
    for(int i=0;i<t;i++)
        cout<<res[i]<<"\n";
}

bool checkprice(vector<int> v,int n)
{
        for(int i=n-1;n-i<6;i--)
        {
            if(v[n]>=v[i])
                return 0;
        }
        return 1;
}
