#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t,n,i,j;
    long long sum;
    float temp1,temp2;
    cin>>t;
    vector<long long> res,v;
    for(i=0;i<t;i++){
            res.push_back(0);
             sum=0;
            cin>>n;
        for(j=0;j<n;j++){
                v.push_back(0);
                cin>>v[j];
                sum+=v[j];
        }
        for(j=0;j<n;j++){
                temp1 = (float(sum)/n);
                temp2 = (float(sum-v[j])/(n-1));
            if(temp1==temp2){
                res[i] = j+1;
                j=-1;
                break;
            }
        }
        if(j!=-1)
            res[i]=-1;
            v.clear();
    }
    for(i=0;i<t;i++){
        if(res[i]==-1){
            cout<<"Impossible"<<endl;
            continue;
        }
        cout<<res[i]<<endl;
    }
}
