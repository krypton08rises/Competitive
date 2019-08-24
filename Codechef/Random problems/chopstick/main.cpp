#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
        int n,i,d,count=0;
        vector<int> v;
        cin>>n>>d;
        for(i=0;i<n;i++)
        {
                v.push_back(0);
                cin>>v[i];
        }
            sort(v.begin(),v.end());
            for(i=0;i<n-1;i++)
            {
                    if(abs(v[i]-v[i+1])<=d)
                    {
                        i++;
                        count++;
                        continue;
                    }
            }
            cout<<count;
}
