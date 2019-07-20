#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
    int t,i,n,j,k;
    vector<float> sum;
    vector<int> v;
    cin>>t;
    std::cout << std::fixed;
    std::cout << std::setprecision(6);
    for(i=0;i<t;i++){
        sum.push_back(0.0);
        cin>>n>>k;
        if(k==0){

                for(j=0;j<n;j++){
                        v.push_back(0);
                        cin>>v[j];
                        sum[i]+=v[j];
                }
                sum[i]/=v.size();
        }
        else {
                for(j=0;j<n;j++){
                        v.push_back(0);
                        cin>>v[j];
                    }

                sort(v.begin(),v.end());

                for(j=k;j<v.size()-k;j++)
                        sum[i]+=v[j];
                sum[i]/=(v.size()-2*k);
        }

    v.clear();
    }
    for(i=0;i<t;i++)
        cout<<sum[i]<<"\n";
}
