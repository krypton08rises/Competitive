#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int t,i,n,j;
    cin>>t;
    vector<int> a,b,maxnum;
    for(i=0;i<t;i++){
            maxnum.push_back(INT_MIN);
            cin>>n;
            for(j=0;j<n;j++){
                    a.push_back(0);
                    cin>>a[j];
            }
            for(j=0;j<n;j++){
                    b.push_back(0);
                    cin>>b[j];
            }
            for(j=0;j<n;j++){
                    a[j] = a[j]*20 - b[j]*10;
                    if(a[j]<0)
                        a[j] = 0;
                    if(a[j]>maxnum[i])
                            maxnum[i] = a[j] ;
            }
        }
    for(i=0;i<t;i++)
        cout<<maxnum[i]<<"\n";
}
