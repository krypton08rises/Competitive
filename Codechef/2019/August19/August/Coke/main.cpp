#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int t,i,n,m,j,k,l,r;
    cin>>t;
    vector<int> c,p,res;
    for(i=0;i<t;i++){
            res.push_back(INT_MAX);
            cin>>n>>m>>k>>l>>r;
            for(j=0;j<n;j++){
                    c.push_back(0);
                    p.push_back(0);
                        cin>>c[j]>>p[j];
                }
            for(j=0;j<n;j++){
                    if(c[j]<k){
                            if(c[j]+m<k)
                                c[j] = c[j]+m;
                            else
                                c[j] = k;
                    }
                    else if(c[j]>k){
                        if(c[j]-m>k)
                            c[j] = c[j] - m;
                        else
                            c[j] = k;
                    }
                    if(c[j]>=l && c[j]<=r){
                        if(res[i]>p[j])
                            res[i] = p[j];
                        }
                }
            if(res[i]==INT_MAX)
                res[i]=-1;
        }
        for(i=0;i<t;i++)
            cout<<res[i]<<"\n";
}
