#include <iostream>
#include <vector>

using namespace std;

int main(){
        int t,i,x,y,k,n,j,diff;
        vector<int> page,cost;
        vector<string> res;
        cin>>t;
        for(i=0;i<t;i++){
                res.push_back("UnluckyChef");
                cin>>x>>y>>k>>n;
                diff=x-y;
                for(j=0;j<n;j++){
                        page.push_back(0);
                        cost.push_back(0);
                        cin>>page[j]>>cost[j];
                        if(page[j]>=diff && cost[j]<=k){
                            res[i]="LuckyChef";
                            break;
                        }
                }
        }
        for(i=0;i<t;i++)
            cout<<res[i]<<"\n";
}
