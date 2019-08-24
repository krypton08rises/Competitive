#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t,i,j;
    long long int n,k,temp;
    cin>>t;
    vector<string> res;
    for(i=0;i<t;i++){
            cin>>n>>k;
            res.push_back("YES");
            if(k==1){
                res[i] = "NO";
                continue;
            }
            if(n==k)
                continue;
            temp = n/k;
            if(temp%k==0)
                res[i]="NO";
    }
    for(i=0;i<t;i++)
            cout<<res[i]<<"\n";
}
