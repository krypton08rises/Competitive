#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n,t,i;
    string key,ans;
    cin>>t;

    vector<int> v;
    for(i=0;i<t;i++){
        v.push_back(0);
        cin>>n;
        cin>>key>>ans;
        for(int j=0;j<n;j++){
            if(ans[j]=='N' || ans[j]=='n')
                continue;
            else if(ans[j]!=key[j]){
                j++;
                continue;
            }
            else v[i]++;
        }
    }
    for(i=0;i<t;i++){
        cout<<v[i]<<endl;
    }
}
