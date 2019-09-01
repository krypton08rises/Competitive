#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t,i,j,k;
    cin>>t;
    int a[3];int c[3];
    vector<string> res;
    for(i=0;i<t;i++)
    {
        res.push_back("FAIR");
        for(j=0;j<3;j++)
                cin>>a[j];
        for(j=0;j<3;j++)
                cin>>c[j];
        for(j=0;j<2;j++)
        {
            for(k=j+1;k<3;k++)
            {
                    if(( a[j]==a[k] && c[j]!=c[k] ) || ( a[j]>a[k] && c[j]<=c[k] ) || ( a[j]<a[k] && c[j]>=c[k] ))
                    {
                            res[i] = "NOT FAIR";
                            break;
                    }
            }
            if(res[i]=="NOT FAIR")
                break;
        }

    }
    for(i=0;i<t;i++)
        cout<<res[i]<<"\n";
}
