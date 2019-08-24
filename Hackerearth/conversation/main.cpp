#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,i,res=0,temp=0;
    vector<int> t,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        t.push_back(0);
        x.push_back(0);
        cin>>t[i]>>x[i];
        if(temp<t[i])
            {
                res+=t[i]-temp;
                temp=t[i];
            }
            temp = temp-t[i];
            temp += x[i];
    }
    cout<<res;
}
