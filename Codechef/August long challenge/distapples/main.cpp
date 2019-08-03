#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t,i,n,j,k;
    cin>>t;
    vector<string> res;
    for(i=0;i<t;i++){
            cin>>n>>k;
            res.push_back("YES");
            if(n%k!=0)
                return 0;
            if(k==1 || n==0){
                res[i] = "NO";
                continue;
            }
            if(n==k)
                continue;
            if(n%(k*k)==0 || n)
                res[i]="NO";
    }
    for(i=0;i<t;i++)
            cout<<res[i]<<"\n";
}
