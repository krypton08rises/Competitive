#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t,i,n,j;
    vector<int> v;
    vector<vector<int>> c;
    cin>>t;

    for(i=0;i<t;i++){
            c.push_back(std::vector<int>());
            cin>>n;
            for(j=0;j<n;j++){
                    v.push_back(0);
                    c[i].push_back(1);
                    cin>>v[j];
            }
            for(j=n-1;j>0;j--){
                    if(v[j]*v[j-1]<0)
                        c[i][j-1]+=c[i][j];
            }
    }
    for(i=0;i<t;i++){
            for(j=0;j<c[i].size();j++){
                    cout<<c[i][j]<<" ";
            }
            cout<<endl;
    }

}
